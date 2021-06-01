#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "I'm FR4G-TP and I'm ALLIIIIVEEE!" << std::endl;
    MaxHitPoints = 100;
    MaxEnergyPoints = 100;
    HitPoints = 100;
    EnergyPoints = 100;
    Level = 1;
    Name = name;
    MeleeAttackDamage = 30;
    RangedAttackDamage = 20;
    ArmorDamageReduction = 5;
}

FragTrap::~FragTrap() {
    std::cout << "I'm FR4G-TP and I'm dead!(" << std::endl;
}


void FragTrap::vaulthunter_dot_exe(const std::string &target) {
    srand((unsigned int)time(0));
    if (HitPoints <= 0) {
        std::cout << "FR4G-TP isn't working properly, he needs repairing!" << std::endl;
        return;
    }
    if (EnergyPoints - 25 < 0) {
        std::cout << "You don't have enough points" << std::endl;
        return;
    }
    EnergyPoints -= 25;
    std::cout << Name << " is using " << randAttack[rand() % 5] << " on a " << target << std::endl;
}
