#ifndef TEST_FRAGTRAP_HPP
#define TEST_FRAGTRAP_HPP

#include <iostream>

const std::string randAttack[5] = {
        "Rasengan",
        "Rasenshuriken",
        "One Thousand Years Of Death",
        "FR4G-TP's special Jutsu",
        "just one punch"
};

class FragTrap {

    public:
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap &F);
        void operator = (const FragTrap &F);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const & target);

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

#endif //TEST_FRAGTRAP_HPP
