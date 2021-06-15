#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>

class SuperMutant : public Enemy {
	public:
		SuperMutant();
		virtual ~SuperMutant();
		SuperMutant(const SuperMutant& e);
		void operator = (const SuperMutant& e);
		virtual void takeDamage(int);
};


#endif