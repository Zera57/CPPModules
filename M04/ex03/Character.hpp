#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character;

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _inventory[4];

	public:
		Character(std::string const & name);
		virtual ~Character();
		Character(const Character&);
		void operator=(const Character& op);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};


#endif