#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <stdlib.h>

class ClapTrap {

    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string GetName();

    protected:
        unsigned int HitPoints;
        unsigned int MaxHitPoints;
        unsigned int EnergyPoints;
        unsigned int MaxEnergyPoints;
        unsigned int Level;
        std::string Name;
        unsigned int MeleeAttackDamage;
        unsigned int RangedAttackDamage;
        unsigned int ArmorDamageReduction;
};

#endif
