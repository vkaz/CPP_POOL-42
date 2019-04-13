#include "Boss.hpp"
#include "stdlib.h"

void Boss::draw(WINDOW *win, int width, int height)
{
	init_pair(1, COLOR_BLUE, COLOR_BLACK);
	wattron(win, COLOR_PAIR(1) | A_BOLD);

	++timeToShift;

	if (timeToShift % 10 == 0)
	{
		timeToShift = 0;
		shift = -5 + rand() % 7;
	}
	mvwprintw(win, (height / 2 - 7) + shift, width - 70, "           .          .");
	mvwprintw(win, (height / 2 - 6) + shift, width - 70, " .          .                  .          .");
	mvwprintw(win, (height / 2 - 5) + shift, width - 70, "       -.           _____  .        .       ");
	mvwprintw(win, (height / 2 - 4) + shift, width - 70, "   .        .   ,-~\"     \"~-.           ");
	mvwprintw(win, (height / 2 - 3) + shift, width - 70, "              ,^ ___         ^. -              ");
	mvwprintw(win, (height / 2 - 2) + shift, width - 70, "             / .^   ^.         \\         .  ");
	mvwprintw(win, (height / 2 - 1) + shift, width - 70, "            Y  l  o  !          Y  .        ");
	mvwprintw(win, (height / 2 - 0) + shift, width - 70, "    .       l_ `.___.'        _,[          ");
	mvwprintw(win, (height / 2 + 1) + shift, width - 70, "            |^~\"-----------\"\"~ ^|       ");
	mvwprintw(win, (height / 2 + 2) + shift, width - 70, "  +       . !                   !     .   ");
	mvwprintw(win, (height / 2 + 3) + shift, width - 70, "         .   \\                 /             ");
	mvwprintw(win, (height / 2 + 4) + shift, width - 70, "              ^.             .^            . ");
	mvwprintw(win, (height / 2 + 5) + shift, width - 70, "                \"-.._____.,-\" .                    .");
	mvwprintw(win, (height / 2 + 6) + shift, width - 70, "  +          .             +                 ");
	mvwprintw(win, (height / 2 + 7) + shift, width - 70, "         .             .      .      ");
	wattroff(win, COLOR_PAIR(1) | A_BOLD);
}

Boss::Boss() :
	hp(25), shift(0), _isKilled(false), timeToShift(0)
{
}

Boss::Boss(const Boss &rhs)
{
	(void)rhs;
}

Boss &Boss::operator=(const Boss &rhs)
{
	(void)rhs;
	return *this;
}

Boss::~Boss()
{
}

void Boss::beKilled()
{
	_isKilled = true;
}

bool Boss::killed() const
{
	return _isKilled;
}

