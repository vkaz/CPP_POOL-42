
# include "Enemies.hpp"
# include "Character.hpp"
# include "Window.hpp"
# include "Boss.hpp"

int		main()
{
	srand(time(NULL));
	Window			win;
	int row, col;
	start_color();
	init_pair(1, COLOR_YELLOW, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	clear();
	getmaxyx(stdscr, row, col);
	bool tr = false;
	WINDOW *menuwin = newwin(row / 2, col / 2, row / 4, col / 4);
	getmaxyx(menuwin, row, col);
	box(menuwin, 0, 0);
	refresh();
	wrefresh(menuwin);
	keypad(menuwin, true);
	std::string choices[3] = {"Limited enemies", "INFINITY", "EXIT"};
	int choice;
	int highlight = 0;
	while (true)
	{
		for (int i = 0; i < 3; i++)
		{
			if (i == highlight)
				wattron(menuwin, COLOR_PAIR(2) | A_BOLD);
			mvwprintw(menuwin, (row / 2 - 3) + i * 4, (col / 2) - 10, choices[i].c_str());
			wattroff(menuwin, COLOR_PAIR(2)| A_BOLD);
		}
		choice = wgetch(menuwin);
		switch (choice)
		{
			case KEY_UP:
				highlight--;
				if (highlight == -1)
					highlight = 0;
				break;
			case KEY_DOWN:
				highlight++;
				if (highlight == 3)
					highlight = 2;
				break;
			default:
				break;
		}
		if (choice == 10)
			break;
	}

	int		maxEnemies = 10000;
	if (highlight == 0 || highlight == 1)
		tr = true;
	if (highlight == 0)
		maxEnemies = 150;
	clear();

	Character		character(3, win.height / 2);
	int				toGenerate = 3;
	int				currentlyGenerated = 0;
	Enemy			**enemiesPool = new Enemy*[maxEnemies];
	Bullet			**enemiesBullets = new Bullet*[maxEnemies / 4];
	bzero(enemiesPool, maxEnemies * sizeof(Enemy *));
	bzero(enemiesBullets, (maxEnemies / 4) * sizeof(Bullet*));
	long long int	secondsLeft = 0;
	if (tr)
	{
		for (int i = 0; !win.gameOver() && !win.victory(); ++i)
		{
			if (secondsLeft % 500000 == 0 && currentlyGenerated < maxEnemies)
			{
				generateEnemies(win, enemiesPool, currentlyGenerated,
					toGenerate, maxEnemies);
				currentlyGenerated += toGenerate;
			}
			usleep(10000);

			win.clear();
			win.drawStats(&character, secondsLeft, currentlyGenerated, 0);
			box(win.getWin(), 0, 0);
			character.draw(win.getWin(), COLOR_GREEN, 1);
			character.refreshBullets(win);
			character.drawBullets(win.getWin());

			drawEnemies(win, enemiesPool, currentlyGenerated);
			moveEnemies(enemiesPool, currentlyGenerated);

			enemiesShoot(enemiesBullets, enemiesPool, maxEnemies, maxEnemies / 4);
			refreshBullets(win, enemiesBullets, maxEnemies / 4);
			character.checkEnemyHit(enemiesPool, maxEnemies);
			removeEnemies(win, enemiesPool, maxEnemies);

			if (character.checkCharacterHit(enemiesPool, maxEnemies) ||
				character.checkCharacterOutOfZone(win) ||
				character.checkEnemiesBulletsColision(enemiesBullets, maxEnemies / 4))
				win.setGameOver();
			win.handleEvents(&character);
			win.update();
			secondsLeft += 20000;
		}
	}
	character.clear();
	Boss boss;
	while (!boss.killed() && win.victory())
	{
		usleep(10000);
		win.clear();
		win.drawStats(&character, secondsLeft, currentlyGenerated, boss.hp);
		box(win.getWin(), 0, 0);
		character.draw(win.getWin(), COLOR_GREEN, 2);
		character.refreshBullets(win);
		character.drawBullets(win.getWin());
		character.checkBossColisionWithBullets(win, boss);
		boss.draw(win.getWin(), win.width, win.height);
		win.handleEvents(&character);
		win.update();
	}

	while (win.victory() || win.gameOver())
	{
		win.clear();
		if (win.gameOver())
			win.drawGameOver();
		else if (win.victory())
			win.drawVictory();
		win.update();
		win.handleEvents(&character);
	}
	delete[] enemiesPool;
	endwin();
	return 0;
}
