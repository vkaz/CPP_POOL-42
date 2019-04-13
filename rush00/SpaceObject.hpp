#pragma once

#include <ncurses.h>
#include <iostream>
#include <unistd.h>

struct Point
{
	int x;
	int y;
	char bulletChar[2];
};

class SpaceObject
{
protected:
	SpaceObject();
	SpaceObject(int maxObjPoints);
	SpaceObject(const SpaceObject &rhs);
	SpaceObject &operator=(const SpaceObject &rhs);
	~SpaceObject();
	int		_maxObjPoints;
	Point	_points[10];
public:

	int		getMaxObjPoints() const;
	Point&	getPoint(int pos);
	void	draw(WINDOW *win, short color, short colorPair) const;
	void	move(int shiftX, int shiftY);
};


