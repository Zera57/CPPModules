#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <iostream>
#include <list>
#include "ISquad.hpp"

class Squad: public ISquad
{
	private:
		std::list<ISpaceMarine*> units;

	public:
		Squad();
		Squad(const Squad&);
		virtual ~Squad();
		void operator=(const Squad& squad);

		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);

};


# endif