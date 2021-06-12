#ifndef TEST_FRAGTRAP_HPP
#define TEST_FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

const std::string randAttack[5] = {
        "Throw rock",
        "Bite",
        "Big Stick",
        "FR4G-TP's secret trick",
        "Punch"
};

class FragTrap : virtual public ClapTrap {

    public:
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap &F);
        void operator = (const FragTrap &F);
        void vaulthunter_dot_exe(std::string const & target);

};

#endif
