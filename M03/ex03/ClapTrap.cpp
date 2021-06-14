#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
    std::cout << "CL4P-TP is alive!(" << std::endl;
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

ClapTrap::~ClapTrap() {
    std::cout << "CL4P-TP is dead!(" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &F) : MaxHitPoints(F.MaxHitPoints), MaxEnergyPoints(F.MaxEnergyPoints) {
    std::cout << "Copy constructor called" << std::endl;
    *this = F;
}
void ClapTrap::operator = (const ClapTrap &F) {
    std::cout << "Assignation operator called" << std::endl;
    this->Name = F.Name;
    this->ArmorDamageReduction = F.ArmorDamageReduction;
    this->HitPoints = F.HitPoints;
    this->EnergyPoints = F.EnergyPoints;
    this->Level = F.Level;
    this->MeleeAttackDamage = F.MeleeAttackDamage;
    this->RangedAttackDamage = F.RangedAttackDamage;
}

void ClapTrap::rangedAttack(const std::string &target) {
    if (HitPoints > 0)
        std::cout << Name << " " << Name << " shoots the " << target << " dealing " << RangedAttackDamage << " points of damage." << std::endl;
    else
        std::cout << Name << " isn't working properly, he needs repairing!" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target) {
    if (HitPoints > 0)
        std::cout << Name << " " << Name << " punches " << target << ", and deals damage by " << MeleeAttackDamage << std::endl;
    else
        std::cout << Name << " isn't working properly, he needs repairing!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
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
    std::cout << Name << " takes " << amount << " in the face." << std::endl;
    std::cout << "Now " << Name << " have " << HitPoints << " Hitpoints." << std::endl;
    if (HitPoints == 0) {
        std::cout << Name << " is crushed!" << std::endl;
        HitPoints = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    HitPoints += amount;
    if (HitPoints > MaxHitPoints) {
        amount -= HitPoints - MaxHitPoints;
        HitPoints = MaxHitPoints;
    }
    std::cout << Name << " repaired by " << amount << " points." << std::endl;
    std::cout << "Now " << Name << " have " << HitPoints << " Hitpoints." << std::endl;
}

std::string ClapTrap::GetName() {
    return Name;
}

