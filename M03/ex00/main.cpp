#include "FragTrap.hpp"

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
    return 0;
}
