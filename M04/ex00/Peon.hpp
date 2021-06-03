#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {

    public:
        Peon(std::string name);
        ~Peon();
		Peon(const Peon&);
		void operator = (const Peon& s);
		virtual void getPolymorphed() const;
		std::string GetName() const;

	protected:
		std::string _name;
};

std::ostream & operator<< (std::ostream &out, Peon const& p);

#endif
