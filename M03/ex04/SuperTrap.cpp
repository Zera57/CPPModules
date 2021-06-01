#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : NinjaTrap(name), FragTrap(name) {
    std::cout << "I'm NINJ4-TP and I'm ALLIIIIVEEE!" << std::endl;
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

SuperTrap::~SuperTrap() {
    std::cout << "I'm NINJ4-TP and I'm dead!(" << std::endl;
}
