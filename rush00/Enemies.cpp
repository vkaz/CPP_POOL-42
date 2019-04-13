#include "Enemies.hpp"

#include "Window.hpp"

Enemy::Enemy(int startX, int startY, int type) : SpaceObject(),
	timeToMoveY(0), timeToShoot(0), type(type)
{
	switch(type)
	{
		case 0:
			_maxObjPoints = 4;
			_points[0] = (Point) {.x = startX, .y = startY, .bulletChar = "<"};
			_points[1] = (Point) {.x = startX + 1, .y = startY, .bulletChar = "<"};
			_points[2] = (Point) {.x = startX + 2, .y = startY, .bulletChar = "<"};
			_points[3] = (Point) {.x = startX + 3, .y = startY, .bulletChar = "<"};
			break;
		case 1:
			_maxObjPoints = 8;
			_points[0] = (Point) {.x = startX, .y = startY + 1, .bulletChar = "*"};
			_points[1] = (Point) {.x = startX, .y = startY + 2, .bulletChar = "*"};
			_points[2] = (Point) {.x = startX + 1, .y = startY, .bulletChar = "*"};
			_points[3] = (Point) {.x = startX + 1, .y = startY + 3, .bulletChar = "*"};
			_points[4] = (Point) {.x = startX + 2, .y = startY, .bulletChar = "*"};
			_points[5] = (Point) {.x = startX + 2, .y = startY + 3, .bulletChar = "*"};
			_points[6] = (Point) {.x = startX + 3, .y = startY + 1, .bulletChar = "*"};
			_points[7] = (Point) {.x = startX + 3, .y = startY + 2, .bulletChar = "*"};
			break;
		case 2:
			_maxObjPoints = 5;
			_points[0] = (Point) {.x = startX, .y = startY, .bulletChar = "c"};
			_points[1] = (Point) {.x = startX + 1, .y = startY, .bulletChar = "="};
			_points[2] = (Point) {.x = startX + 2, .y = startY, .bulletChar = "="};
			_points[3] = (Point) {.x = startX + 3, .y = startY, .bulletChar = "="};
			_points[4] = (Point) {.x = startX + 4, .y = startY, .bulletChar = "3"};
			break;
		case 3:
			_maxObjPoints = 3;
			_points[0] = (Point) {.x = startX, .y = startY, .bulletChar = "\\"};
			_points[1] = (Point) {.x = startX, .y = startY + 1, .bulletChar = "/"};
			_points[2] = (Point) {.x = startX + 1, .y = startY, .bulletChar = "_"};
			break;
		default:
			break;
	}
}

Enemy::~Enemy()
{
}

Enemy::Enemy(const Enemy &rhs)
{
	(void)rhs;
}

Enemy &Enemy::operator=(const Enemy &rhs)
{
	(void)rhs;
	return *this;
}

//	Functions for enemies processing

void	generateEnemies(Window &win, Enemy *pool[], int from, int count, int size)
{
	for (int i = from; i < from + count && i < size; ++i)
		pool[i] = new Enemy(win.width, 1 + rand() % (win.height - 2), rand() % 4);
}

void	drawEnemies(Window &win, Enemy *pool[], int size)
{
	for (int i = 0; i < size; ++i)
		if (pool[i] != NULL)
			pool[i]->draw(win.getWin(), COLOR_YELLOW, 3);
}

void	moveEnemies(Enemy *pool[], int size)
{
	for (int i = 0; i < size; ++i)
		if (pool[i] != NULL)
		{
			pool[i]->move(-1, pool[i]->timeToMoveY % 50 == 0 && pool[i]->type == 2 ? (-1 + rand() % 3) : 0);
			if (pool[i]->timeToMoveY % 50 == 0)
				pool[i]->timeToMoveY = 0;
			++pool[i]->timeToMoveY;
		}
}

void	removeEnemies(Window &win, Enemy* pool[], int size)
{
	bool allAreDead = true;
	for (int i = 0; i < size; ++i)
	{
		if (pool[i] != NULL)
		{
			for (int j = 0; j < pool[i]->getMaxObjPoints(); ++j)
			{
				if (pool[i]->getPoint(j).x <= 0)
				{
					delete pool[i];
					pool[i] = NULL;
					break;
				}
			}
			allAreDead = false;
		}
	}
	if (allAreDead)
		win.setVictory();
}

void enemiesShoot(Bullet *bullets[], Enemy *enemies[], int enemiesSize, int bulletsSize)
{
	for (int i = 0; i < enemiesSize; ++i)
	{
		if (enemies[i] != NULL && enemies[i]->type == Enemy::THIRD_SHIP && enemies[i]->timeToShoot % 150 == 0)
		{
			enemies[i]->timeToShoot = 0;
			for (int j = 0; j < bulletsSize; ++j)
			{
				if (bullets[j] == NULL)
				{
					bullets[j] = new Bullet(1);
					bullets[j]->setPosition(enemies[i]->getPoint(0).x - 2, enemies[i]->getPoint(0).y);
					break ;
				}
			}
		}
		if (enemies[i] != NULL && enemies[i]->type == Enemy::THIRD_SHIP)
			++(enemies[i]->timeToShoot);
	}
}

void	refreshBullets(Window& win, Bullet *bullets[], int bulletsSize)
{
	for (int i = 0; i < bulletsSize; ++i)
	{
		if (bullets[i] != NULL && bullets[i]->getPoint(0).x <= 0)
		{
			delete bullets[i];
			bullets[i] = NULL;
		}
		else if (bullets[i] != NULL)
		{
			bullets[i]->move(-2, 0);
			bullets[i]->draw(win.getWin(), COLOR_BLUE, 4);
		}
	}
}
