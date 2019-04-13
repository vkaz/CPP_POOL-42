#pragma once

# include "Bullet.hpp"
# include "Enemies.hpp"
# include "Boss.hpp"

class Character : public SpaceObject
{
public:
	Character(int startX, int startY);
	~Character();
	void		checkEnemyHit(Enemy *pool[], int size);
	bool		checkCharacterHit(Enemy* pool[], int size);
	bool		checkCharacterOutOfZone(Window& win);
	bool		checkEnemiesBulletsColision(Bullet *enemiesBullets[], int bulletsSize);
	void		shoot();
	long long	getPoints() const;
	void		drawBullets(WINDOW *win) const;
	void		refreshBullets(Window& win);
	void		checkBossColisionWithBullets(Window &win, Boss &boss);
	void		clear();
private:
	Character();
	Character(const Character &rhs);
	Character &operator=(const Character &rhs);
	bool				_characterIsHit(Enemy *enemy, int shipPart);
	bool				_bulletHitsEnemy(Enemy* enemy, int bulletPos);
	static const int	_maxBullets = 1000;
	long long			_score;
	int					_startY;
	int					_startX;
	Bullet				_bullets[_maxBullets];
};
