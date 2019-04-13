#include "Bullet.hpp"

Bullet::Bullet(int) : SpaceObject(1)
{
	_points[0] = (Point){.x = -1, .y = -1, .bulletChar = "*"};
}

Bullet::Bullet() : SpaceObject(1)
{
	_points[0] = (Point){.x = -1, .y = -1, .bulletChar = ")"};
}


Bullet::~Bullet()
{
}

bool Bullet::empty() const
{
	return _points[0].x == -1 && _points[0].y == -1;
}

void Bullet::setPosition(int x, int y)
{
	_points[0].x = x;
	_points[0].y = y;
}
