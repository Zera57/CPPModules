#ifndef ICE_HPP
# define ICE_HPP

class Ice;

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice&);
		void operator=(const Ice& op);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif