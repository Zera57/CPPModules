#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

class MateriaSource;

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _templates[4];

	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(const MateriaSource&);
		void operator=(const MateriaSource& op);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif