#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class AMateria;

class AMateria {
	private:
		std::string _type;
		unsigned int _xp;
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(const AMateria&);
		void operator=(const AMateria& op);

		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif