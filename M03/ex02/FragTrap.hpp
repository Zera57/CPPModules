#ifndef TEST_FRAGTRAP_HPP
#define TEST_FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

const std::string randAttack[5] = {
        "Rasengan",
        "Rasenshuriken",
        "One Thousand Years Of Death",
        "FR4G-TP's special Jutsu",
        "just one punch"
};

class FragTrap : public ClapTrap {

    public:
        FragTrap(std::string name);
        ~FragTrap();
        void vaulthunter_dot_exe(std::string const & target);

};

#endif //TEST_FRAGTRAP_HPP
