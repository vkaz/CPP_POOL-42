#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    std::cout << "START GAME"<< std::endl;
    FragTrap    prog("programer");
    FragTrap    cheater("cheater");
    ScavTrap    ca("name");
    NinjaTrap   ninja("ninja");
    ClapTrap    clap("clap");

    srand(time(NULL));
    std::cout << std::endl << "ROUND 1" << std::endl;
    prog.meleeAttack(cheater.getName());
    cheater.takeDamage(prog.getMeleeAttackDamage());
    std::cout << std::endl << "ROUND 2" << std::endl;
    cheater.rangedAttack(prog.getName());
    prog.takeDamage(cheater.getRangedAttackDamage());
    std::cout << std::endl << "ROUND 3" << std::endl;
    prog.vaulhunter_dot_exe(cheater.getName());
    cheater.takeDamage(prog.getVaulHunter_dot_exeDamage());
    std::cout << std::endl << "ROUND 4" << std::endl;
    prog.meleeAttack(cheater.getName());
    cheater.takeDamage(prog.getMeleeAttackDamage());
    std::cout << std::endl << "ROUND 5" << std::endl;
    cheater.rangedAttack(prog.getName());
    prog.takeDamage(cheater.getRangedAttackDamage());
    std::cout << std::endl << "ROUND 6" << std::endl;
    prog.vaulhunter_dot_exe(cheater.getName());
    cheater.takeDamage(prog.getVaulHunter_dot_exeDamage());
    std::cout << std::endl << "ROUND Scave" << std::endl;
    ca.chellengeNewcomer(cheater.getName());
    std::cout << std::endl << "ROUND Scave2" << std::endl;
    ca.chellengeNewcomer(prog.getName());
    std::cout << std::endl << "ROUND Ninja" << std::endl;
    ninja.rangedAttack(prog.getName());
    prog.takeDamage(ninja.getRangedAttackDamage());
    std::cout << std::endl << "ROUND NinjaShoebox Frag" << std::endl;
    ninja.ninjaShoebox(prog);
    std::cout << std::endl << "ROUND NinjaShoebox Clap" << std::endl;
    ninja.ninjaShoebox(ca);
    std::cout << std::endl << "ROUND NinjaShoebox Scav" << std::endl;
    ninja.ninjaShoebox(clap);
    std::cout << std::endl << "ROUND NinjaShoebox Ninja" << std::endl;
    ninja.ninjaShoebox(ninja);
    return (0);
}