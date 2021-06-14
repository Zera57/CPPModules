#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
    std::cout << "I'm S4PER-TP and I'm ALLIIIIVEEE!" << std::endl;
    this->MaxHitPoints = FragTrap::MaxHitPoints;
    this->MaxEnergyPoints = NinjaTrap::MaxEnergyPoints;
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoints = NinjaTrap::EnergyPoints;
    this->Level = 1;
    this->Name = name;
    this->MeleeAttackDamage = NinjaTrap::MeleeAttackDamage;
    this->RangedAttackDamage = FragTrap::RangedAttackDamage;
    this->ArmorDamageReduction = FragTrap::ArmorDamageReduction;
}

SuperTrap::~SuperTrap() {
    std::cout << "I'm S4PER-TP and I'm dead!(" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &F) : ClapTrap(F), FragTrap(F), NinjaTrap(F) {
    std::cout << "Copy constructor called" << std::endl;
}
void SuperTrap::operator = (const SuperTrap &F) {
    std::cout << "Assignation operator called" << std::endl;
    ClapTrap::operator=(F);
}

void SuperTrap::rangedAttack(std::string const & target) {
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target) {
    NinjaTrap::meleeAttack(target);
}
