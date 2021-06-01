#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "SC4V-TP is alive, sir!(" << std::endl;
    MaxHitPoints = 100;
    MaxEnergyPoints = 50;
    HitPoints = 100;
    EnergyPoints = 50;
    Level = 1;
    Name = name;
    MeleeAttackDamage = 20;
    RangedAttackDamage = 15;
    ArmorDamageReduction = 3;
}

ScavTrap::~ScavTrap() {
    std::cout << "SC4V-TP is dead, sir!(" << std::endl;
}

void ScavTrap::challengeNewcomer() {
    srand((unsigned int)time(0));
    if (HitPoints <= 0) {
        std::cout << "SC4V-TP isn't working properly, he needs repairing!" << std::endl;
        return;
    }
    if (EnergyPoints - 25 < 0) {
        std::cout << "You don't have enough points" << std::endl;
        return;
    }
    EnergyPoints -= 25;
    std::cout << Name << " is challanges " << randChallanger[rand() % 5] << std::endl;
}
