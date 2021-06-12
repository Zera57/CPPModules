#ifndef TEST_NINJATRAP_HPP
#define TEST_NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

const std::string randNinjaAttack[5] = {
        "Rasengan",
        "Rasenshuriken",
        "One Thousand Years Of Death",
        "NINJ4-TP's special Jutsu",
        "just one punch"
};

class NinjaTrap : virtual public ClapTrap {

    public:
        NinjaTrap(std::string name);
        ~NinjaTrap();
        NinjaTrap(const NinjaTrap &F);
        void operator = (const NinjaTrap &F);
        void ninjaShoebox(ClapTrap trap);

};

#endif
