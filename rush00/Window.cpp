#include "Window.hpp"

Window::Window()
{
	initscr();
	getmaxyx(stdscr, height, width);
	width -= 30;
	height -= 1;
	_win = newwin(height, width, 1, 1);
	noecho();
	keypad(_win, true);
	curs_set(0);
	wtimeout(_win, 1);
}

Window::Window(const Window &rhs)
{
	(void)rhs;
}

Window &Window::operator=(const Window &rhs)
{
	(void)rhs;
	return *this;
}

Window::~Window()
{
	endwin();
}

bool Window::gameOver() const
{
	return _gameOver;
}

void Window::drawGameOver() const
{
	start_color();
	init_pair(2, COLOR_RED, COLOR_BLACK);
	wattron(_win, COLOR_PAIR(2));
	mvwprintw(_win, height / 2, width / 2, "Game over");
	wattroff(_win, COLOR_PAIR(2));
}

void Window::clear()
{
	werase(_win);
}

void Window::update()
{
	wrefresh(_win);
	refresh();
}

void Window::handleEvents(Character* character)
{
	int c = wgetch(_win);
	switch (c)
	{
		case 'w':
			character->move(0, -1);
			break;
		case 's':
			character->move(0, 1);
			break;
		case 'a':
			character->move(-1, 0);
			break;
		case 'd':
			if (character->getPoint(8).x < width / 10)
			character->move(1, 0);
			break;
		case ' ':
			character->shoot();
			break;
		case 'q':
			endwin();
			exit(EXIT_SUCCESS);
			break;
	}
}

WINDOW *Window::getWin()
{
	return _win;
}

void Window::drawStats(Character *character, long long secondsLeft, int generatedEnemies, int bossHP) const
{
	mvwprintw(stdscr, 2, width + 3 , "%s", "Life: 1");
	mvwprintw(stdscr, 3, width + 10, "%lld", secondsLeft / 1000000);
	mvwprintw(stdscr, 3, width + 3 , "%s", "TIMER: ");
	mvwprintw(stdscr, 4, width + 3 , "%s", "MOVE : WASD");
	mvwprintw(stdscr, 5, width + 3 , "%s", "FIRE : SPACE");
	mvwprintw(stdscr, 6, width + 3 , "%s", "EXIT : Q");
	mvwprintw(stdscr, 7, width + 3 , "%s %i", "SCORES : ", character->getPoints());
	mvwprintw(stdscr, 8, width + 3, "%s %i", "Enemies generated: ", generatedEnemies);
	(void)bossHP;
}

void Window::setGameOver()
{
	_gameOver = true;
}

void Window::setVictory()
{
	_victory = true;
}

bool Window::victory() const
{
	return _victory;
}

void Window::drawVictory() const
{
	start_color();
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	wattron(_win, COLOR_PAIR(2));
	mvwprintw(_win, height / 2, width / 2, "Victory");
	wattroff(_win, COLOR_PAIR(2));
}
