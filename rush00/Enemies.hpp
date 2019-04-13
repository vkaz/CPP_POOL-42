#pragma once

# include "SpaceObject.hpp"
# include "Bullet.hpp"
class Window;

class Enemy : public SpaceObject
{
public:
	static const int FIRST_SHIP = 0;
	static const int SECOND_SHIP = 1;
	static const int THIRD_SHIP = 2;
	static const int FOURTH_SHIP = 3;
	Enemy(int startX, int startY, int type);
	~Enemy();
	int			timeToMoveY;
	int			timeToShoot;
	int			type;
private:
	Enemy();
	Enemy(const Enemy &rhs);
	Enemy &operator=(const Enemy &rhs);
};

void	generateEnemies(Window &win, Enemy *pool[], int from, int count, int size);
void	drawEnemies(Window &win, Enemy *pool[], int size);
void	moveEnemies(Enemy *pool[], int size);
void	removeEnemies(Window &win, Enemy* pool[], int size);
void	enemiesShoot(Bullet *bullets[], Enemy *enemies[], int enemiesSize, int bulletsSize);
void	refreshBullets(Window& win, Bullet *bullets[], int bulletsSize);