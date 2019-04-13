#include "SpaceObject.hpp"

SpaceObject::SpaceObject(int maxObjPoints) :
	_maxObjPoints(maxObjPoints)
{
}

SpaceObject::SpaceObject(const SpaceObject &rhs)
{
	(void)rhs;
}

SpaceObject &SpaceObject::operator=(const SpaceObject &rhs)
{
	(void)rhs;
	return *this;
}

SpaceObject::~SpaceObject()
{
}

void SpaceObject::draw(WINDOW *win, short color, short colorPair) const
{
	init_pair(colorPair, color, COLOR_BLACK);
	wattron(win, COLOR_PAIR(colorPair) | A_BOLD);
	for (int i = 0; i < _maxObjPoints; ++i)
		mvwprintw(win, _points[i].y, _points[i].x, _points[i].bulletChar);
	wattroff(win, COLOR_PAIR(colorPair) | A_BOLD);
}

void SpaceObject::move(int shiftX, int shiftY)
{
	for (int i = 0; i < _maxObjPoints; ++i)
	{
		_points[i].x += shiftX;
		_points[i].y += shiftY;
	}
}

SpaceObject::SpaceObject()
{

}

Point &SpaceObject::getPoint(int pos)
{
	return _points[pos];
}

int SpaceObject::getMaxObjPoints() const
{
	return _maxObjPoints;
}
