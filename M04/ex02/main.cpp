#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "Squad" << std::endl;
	ISquad* squad = new Squad(*(Squad*)vlc);
	for (int i = 0; i < squad->getCount(); ++i)
	{
		ISpaceMarine* cur = squad->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	delete squad;
	return 0;
}
