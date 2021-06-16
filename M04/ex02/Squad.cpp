#include "Squad.hpp"

Squad::Squad() {

}

Squad::~Squad() {
	if (units.size() != 0) {
		for (std::list<ISpaceMarine*>::const_iterator iter = units.begin(); iter != units.end(); iter++)
		{
			delete(*iter);
		}
		units.clear();
	}
}

Squad::Squad(const Squad& squad) {
	*this = squad;
}

void Squad::operator=(const Squad& squad) {
	for (std::list<ISpaceMarine*>::const_iterator iter = squad.units.begin(); iter != squad.units.end(); iter++)
	{
		units.push_back((*iter)->clone());
	}
}

int Squad::getCount() const {
	return units.size();
}

ISpaceMarine* Squad::getUnit(int i) const {
	std::list<ISpaceMarine*>::const_iterator start = units.begin();
	std::advance(start, i);
	return *start;
}

int Squad::push(ISpaceMarine *s) {
	units.push_back(s);
	return getCount();
}
