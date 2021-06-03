#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"

class Sorcerer{

    public:
        Sorcerer(std::string name, std::string title);
        ~Sorcerer();
		Sorcerer(const Sorcerer&);
		void operator = (const Sorcerer& s);
		void polymorph(Victim const & v) const;
		std::string GetName() const;
		std::string GetTitle() const;

	protected:
		std::string _name;
		std::string _title;
};

std::ostream & operator<< (std::ostream &out, Sorcerer const& s);

#endif