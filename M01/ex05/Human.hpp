#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human {

	public: 
		std::string	name;


		std::string	identify();
		Brain&		getBrain();

	private:
		Brain		_brain;
};

#endif