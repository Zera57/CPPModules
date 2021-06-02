#ifndef TEST_SUPERTRAP_HPP
#define TEST_SUPERTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"


class SuperTrap : public FragTrap , public NinjaTrap {

    public:
        SuperTrap(std::string name);
        ~SuperTrap();
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
};

#endif
