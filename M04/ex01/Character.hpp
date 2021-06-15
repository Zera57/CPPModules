#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string name;
		int ap;
		AWeapon *weapon;
	public:
		Character(std::string const & name);
		virtual ~Character();
		Character(const Character& e);
		void operator = (const Character& e);

		std::string const &getName() const;
		int getAP() const;
		AWeapon *getWeapon() const;
		void recoverAP();
		void equip(AWeapon *weapon);
		void attack(Enemy *enemy);
};

std::ostream & operator<< (std::ostream &out, Character const& p);


#endif