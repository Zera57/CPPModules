#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure;

class Cure : public AMateria
{
	public:
		Cure();
		virtual ~Cure();
		Cure(const Cure&);
		void operator=(const Cure& op);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif