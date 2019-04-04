#include "FragTrap.hpp"

int main(void)
{
    std::cout << "START GAME"<< std::endl;
    FragTrap    prog("programer");
    FragTrap    cheater("cheater");

    std::cout << std::endl << "ROUND 1" << std::endl;
    prog.meleeAttack(cheater.getName());
    cheater.takeDamage(prog.getMeleeAttackDamage());
    std::cout << std::endl << "ROUND 2" << std::endl;
    cheater.rangedAttack(prog.getName());
    prog.takeDamage(cheater.getRangedAttackDamage());
    std::cout << std::endl << "ROUND 3" << std::endl;
    prog.vaulhunter_dot_exe(cheater.getName());
    cheater.takeDamage(prog.getVaulHunter_dot_exeDamage());
    return (0);
}