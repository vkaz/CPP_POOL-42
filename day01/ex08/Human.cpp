#include "Human.hpp"



void	Human::meleeAttack(std::string const &target)
{
	std::cout << name << " attack " << target << " with a melee attack" << std::endl;
}

void	Human::rangedAttack(std::string const &target)
{
	std::cout << name << " attack " << target << " with a ranged attack" << std::endl;
}

void	Human::intimidatingShout(std::string const &target)
{
	std::cout << name << " attack " << target << " with a intimidating shout" << std::endl;
}

void	Human::action(std::string const &action_name, std::string const &target)
{
	
}