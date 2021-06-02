#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : Victim {

    public:
        Peon(std::string name);
        ~Peon();
		Peon(const Peon&);
		void operator = (const Peon& s);
		std::ostream & operator << (std::ostream &out);
		void getPolymorphed() const;

	protected:
		std::string _name;
};

#endif
