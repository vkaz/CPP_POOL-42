#pragma once

# include <ncurses.h>
# include "Character.hpp"

class Window
{
public:
	Window();
	Window(const Window &rhs);
	Window &operator=(const Window &rhs);
	~Window();

	bool		gameOver() const;
	bool		victory() const;
	void		drawGameOver() const;
	void		drawVictory() const;
	void		drawStats(Character *character, long long secondsLeft, int generatedEnemies, int bossHP) const;
	void		clear();
	void		update();
	void		handleEvents(Character* character);
	WINDOW*		getWin();
	void		setGameOver();
	void		setVictory();
	int width;
	int height;
private:
	WINDOW		*_win;
	bool		_gameOver;
	bool		_victory;
};
