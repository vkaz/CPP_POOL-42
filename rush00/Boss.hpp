#pragma once

#include <ncurses.h>

class Boss
{
public:
	Boss();

	~Boss();
	void draw(WINDOW *win, int width, int height);
	int		hp;
	int 	shift;
	bool	killed() const;
	void	beKilled();
private:
	Boss(const Boss &rhs);
	Boss &operator=(const Boss &rhs);
	bool	_isKilled;
	int		timeToShift;
};


