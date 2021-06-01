#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

const std::string randChallanger[5] = {
        "Big Boii",
        "Sobaka sutulaya",
        "FR4G-TP",
        "Spanish Inquisition",
        "Insane Rat"
};

class ScavTrap : public ClapTrap {

    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        void challengeNewcomer();

};

#endif
