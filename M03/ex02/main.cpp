#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    FragTrap f = FragTrap("Bob");
    f.meleeAttack("Azat");
    f.rangedAttack("Azat");
    f.takeDamage(90);
    f.beRepaired(40);
    f.takeDamage(70);
    f.meleeAttack("Azat");
    f.beRepaired(120);
    f.vaulthunter_dot_exe("Tor");
    std::cout << std::endl;
    ScavTrap s = ScavTrap("Bob");
    s.meleeAttack("Rat");
    s.rangedAttack("Rat");
    s.takeDamage(90);
    s.beRepaired(40);
    s.takeDamage(70);
    s.meleeAttack("Rat");
    s.beRepaired(120);
    s.challengeNewcomer();
    return 0;
}
