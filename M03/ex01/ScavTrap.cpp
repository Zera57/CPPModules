#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : MaxHitPoints(100), MaxEnergyPoints(50) {
    std::cout << "SC4V-TP is alive, sir!(" << std::endl;
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

void ScavTrap::rangedAttack(const std::string &target) {
    if (HitPoints > 0)
        std::cout << "SC4V-TP " << Name << " shoots the " << target << " dealing " << RangedAttackDamage << " points of damage." << std::endl;
    else
        std::cout << "SC4V-TP isn't working properly, he needs repairing!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) {
    if (HitPoints > 0)
        std::cout << "SC4V-TP " << Name << " punches " << target << ", and deals damage by " << MeleeAttackDamage << std::endl;
    else
        std::cout << "SC4V-TP isn't working properly, he needs repairing!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    if (ArmorDamageReduction >= amount)
    {
        std::cout << "Armor is too great for this hit";
        return;
    }
    amount -= ArmorDamageReduction;
    if (HitPoints < amount)
        HitPoints = 0;
    else
        HitPoints -= amount;
    std::cout << "SC4V-TP takes " << amount << " in the face." << std::endl;
    std::cout << "Now " << Name << " have " << HitPoints << " Hitpoints." << std::endl;
    if (HitPoints == 0) {
        std::cout << "SC4V-TP is crushed!" << std::endl;
        HitPoints = 0;
    }
}

void ScavTrap::beRepaired(unsigned int amount) {
    HitPoints += amount;
    if (HitPoints > MaxHitPoints) {
        amount -= HitPoints - MaxHitPoints;
        HitPoints = 100;
    }
    std::cout << "SC4V-TP repaired by " << amount << " points." << std::endl;
    std::cout << "Now " << Name << " have " << HitPoints << " Hitpoints." << std::endl;
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
    std::cout << "SC4V-TP is challanges " << randChallanger[rand() % 5] << std::endl;
}
