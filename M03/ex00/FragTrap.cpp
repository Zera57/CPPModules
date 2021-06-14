#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : MaxHitPoints(100), MaxEnergyPoints(100) {
    std::cout << "I'm FR4G-TP and I'm ALLIIIIVEEE!" << std::endl;
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

void FragTrap::rangedAttack(const std::string &target) {
    if (HitPoints > 0)
        std::cout << "FR4G-TP " << Name << " shoots " << target << ", and deal " << RangedAttackDamage << " points of damage." << std::endl;
    else
        std::cout << "FR4G-TP isn't working properly, he needs repairing!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &F) : MaxHitPoints(F.MaxHitPoints), MaxEnergyPoints(F.MaxEnergyPoints) {
    std::cout << "Copy constructor called" << std::endl;
    *this = F;
}
void FragTrap::operator = (const FragTrap &F) {
    std::cout << "Assignation operator called" << std::endl;
    this->Name = F.Name;
    this->ArmorDamageReduction = F.ArmorDamageReduction;
    this->HitPoints = F.HitPoints;
    this->EnergyPoints = F.EnergyPoints;
    this->Level = F.Level;
    this->MeleeAttackDamage = F.MeleeAttackDamage;
    this->RangedAttackDamage = F.RangedAttackDamage;
}

void FragTrap::meleeAttack(const std::string &target) {
    if (HitPoints > 0)
        std::cout << "FR4G-TP " << Name << " smashes " << target << ", and deal " << MeleeAttackDamage << " points of damage." << std::endl;
    else
        std::cout << "FR4G-TP isn't working properly, he needs repairing!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
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
    std::cout << "FR4G-TP gets " << amount << " in the face." << std::endl;
    std::cout << "Now " << Name << " have " << HitPoints << " Hitpoints." << std::endl;
    if (HitPoints == 0) {
        std::cout << "FR4G-TP is crushed!" << std::endl;
        HitPoints = 0;
    }
}

void FragTrap::beRepaired(unsigned int amount) {
    HitPoints += amount;
    if (HitPoints > MaxHitPoints) {
        amount -= HitPoints - MaxHitPoints;
        HitPoints = MaxHitPoints;
    }
    std::cout << "FR4G-TP repaired by " << amount << " points." << std::endl;
    std::cout << "Now " << Name << " have " << HitPoints << " Hitpoints." << std::endl;
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
    std::cout << "FR4G-TP is using " << randAttack[rand() % 5] << " on a " << target << std::endl;
}
