#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"

class Sorcerer{

    public:
        Sorcerer(std::string name, std::string title);
        ~Sorcerer();
		Sorcerer(const Sorcerer&);
		void operator = (const Sorcerer& s);
		std::ostream & operator << (std::ostream &out);
		void polymorph(Victim const & v) const;

	protected:
		std::string _name;
		std::string _title;
};

#endif