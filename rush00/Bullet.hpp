#pragma once
# include "SpaceObject.hpp"

class Bullet : public SpaceObject
{
public:
	Bullet(int);
	Bullet();
	~Bullet();
	bool	empty() const;
	void	setPosition(int x, int y);
private:
	Bullet &operator=(const Bullet &rhs);
	Bullet(const Bullet &rhs);
};


