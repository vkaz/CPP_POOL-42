#include "Character.hpp"
#include "Window.hpp"

Character::Character(int startX, int startY) : SpaceObject(9),
	_score(0), _startY(startY), _startX(startX)
{
	_points[0] = (Point){.x = _startX, .y = _startY, .bulletChar = "]"};
	_points[1] = (Point){.x = _startX, .y = _startY + 1, .bulletChar = "("};
	_points[2] = (Point){.x = _startX, .y = _startY + 2, .bulletChar = ">"};
	_points[3] = (Point){.x = _startX, .y = _startY + 3, .bulletChar = "("};
	_points[4] = (Point){.x = _startX, .y = _startY + 4, .bulletChar = "]"};
	_points[5] = (Point){.x = _startX + 1, .y = _startY + 1, .bulletChar = ">"};
	_points[6] = (Point){.x = _startX + 1, .y = _startY + 2, .bulletChar = ">"};
	_points[7] = (Point){.x = _startX + 1, .y = _startY + 3, .bulletChar = ">"};
	_points[8] = (Point){.x = _startX + 2, .y = _startY + 2, .bulletChar = "]"};
}

Character::Character(const Character &rhs) : SpaceObject(rhs)
{
	(void)rhs;
}

Character &Character::operator=(const Character &rhs)
{
	SpaceObject::operator=(rhs);
	return *this;
}

Character::~Character()
{
}

void Character::shoot()
{
	for (int i = 0; i < _maxBullets; ++i)
		if (_bullets[i].empty())
		{
			_bullets[i].setPosition(_points[8].x + 1, _points[8].y);
			break ;
		}
}

long long Character::getPoints() const
{
	return _score;
}

void Character::drawBullets(WINDOW *win) const
{
	for (int i = 0; i < _maxBullets; ++i)
		if (!_bullets[i].empty())
		{
			_bullets[i].draw(win, COLOR_RED, 5);
		}
}

void Character::refreshBullets(Window& win)
{
	for (int i = 0; i < _maxBullets; ++i)
	{
		if (!_bullets[i].empty())
			_bullets[i].move(1, 0);
		else if (_bullets[i].getPoint(0).x > win.width)
		{
			_bullets[i].getPoint(0).x = -1;
			_bullets[i].getPoint(0).y = -1;
		}
	}
}

bool	Character::_bulletHitsEnemy(Enemy* enemy, int bulletPos)
{
	Point& bullet = _bullets[bulletPos].getPoint(0);
	for (int i = 0; i < enemy->getMaxObjPoints(); ++i)
		if (bullet.x == enemy->getPoint(i).x && bullet.y == enemy->getPoint(i).y)
			return true;
	return false;
}

void	Character::checkEnemyHit(Enemy *pool[], int size)
{
	for (int i = 0; i < _maxBullets; ++i)
	{
		if (!_bullets[i].empty())
		{
			for (int j = 0; j < size; ++j)
			{
				if (pool[j] != NULL && _bulletHitsEnemy(pool[j], i))
				{
					delete pool[j];
					pool[j] = NULL;
					_score += 10;
					_bullets[i].getPoint(0).x = -1;
					_bullets[i].getPoint(0).y = -1;
					break ;
				}
			}
		}
	}

}

bool Character::_characterIsHit(Enemy *enemy, int shipPart)
{
	for (int i = 0; i < enemy->getMaxObjPoints(); ++i)
		if (enemy->getPoint(i).x == _points[shipPart].x && enemy->getPoint(i).y == _points[shipPart].y)
			return true;
	return false;
}

bool Character::checkCharacterHit(Enemy *pool[], int size)
{
	for (int i = 0; i < _maxObjPoints; ++i)
		for (int j = 0; j < size; ++j)
			if (pool[j] != NULL && _characterIsHit(pool[j], i))
				return true;
	return false;
}

bool Character::checkCharacterOutOfZone(Window &win)
{
	for (int i = 0; i < _maxObjPoints; ++i)
		if ((_points[i].x <= 0 || _points[i].x >= win.width - 1) ||
			(_points[i].y <= 0 || _points[i].y >= win.height - 1))
			return true;
	return false;
}

bool Character::checkEnemiesBulletsColision(Bullet *enemiesBullets[], int bulletsSize)
{
	for (int i = 0; i < bulletsSize; ++i)
	{
		if (enemiesBullets[i] != NULL)
		{
			for (int j = 0; j < _maxObjPoints; ++j)
			{
				if (enemiesBullets[i]->getPoint(0).x == _points[j].x &&
					enemiesBullets[i]->getPoint(0).y == _points[j].y)
					return true;
			}
		}
	}
	return false;
}

void Character::checkBossColisionWithBullets(Window &win, Boss &boss)
{
	for (int i = 0; i < _maxBullets; ++i)
	{
		if (!_bullets[i].empty())
		{
			if (_bullets[i].getPoint(0).y >= (win.height / 2 - 7) + boss.shift &&
				_bullets[i].getPoint(0).y <= (win.height / 2 + 7) + boss.shift &&
				_bullets[i].getPoint(0).x >= win.width - 70 &&
				_bullets[i].getPoint(0).x <= win.width)
				{
					_bullets[i].getPoint(0).x = -1;
					_bullets[i].getPoint(0).y = -1;
					--(boss.hp);
				}
		}
	}
	if (boss.hp <= 0)
	{
		boss.beKilled();
		win.setVictory();
	}
}

void Character::clear()
{
	for (int i = 0; i < _maxBullets; ++i)
	{
		_bullets[i].getPoint(0).x = -1;
		_bullets[i].getPoint(0).y = -1;
	}
}


