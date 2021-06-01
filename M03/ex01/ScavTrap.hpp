#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

const std::string randChallanger[5] = {
        "Big Boii",
        "Sobaka sutulaya",
        "FR4G-TP",
        "Spanish Inquisition",
        "Insane Rat"
};

class ScavTrap {

public:
    ScavTrap(std::string name);
    ~ScavTrap();
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer();

private:
    unsigned int HitPoints;
    unsigned int const MaxHitPoints;
    unsigned int EnergyPoints;
    unsigned int const MaxEnergyPoints;
    unsigned int Level;
    std::string Name;
    unsigned int MeleeAttackDamage;
    unsigned int RangedAttackDamage;
    unsigned int ArmorDamageReduction;
};

#endif
