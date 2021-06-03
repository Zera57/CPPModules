#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim{

    public:
        Victim(std::string name);
        ~Victim();
		Victim(const Victim&);
		void operator = (const Victim& s);
		std::ostream & operator << (std::ostream &out);
		virtual void getPolymorphed() const;
		std::string GetName() const;

	protected:
		std::string _name;
};

std::ostream & operator<< (std::ostream &out, Victim const& v);

#endif