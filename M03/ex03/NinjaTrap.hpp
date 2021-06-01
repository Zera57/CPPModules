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

class NinjaTrap : public ClapTrap {

    public:
        NinjaTrap(std::string name);
        ~NinjaTrap();
        void ninjaShoebox(ClapTrap trap);

};

#endif
