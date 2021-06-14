#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
    std::cout << "I'm NINJ4-TP and I'm ALLIIIIVEEE!" << std::endl;
    MaxHitPoints = 60;
    MaxEnergyPoints = 120;
    HitPoints = 60;
    EnergyPoints = 120;
    Level = 1;
    Name = name;
    MeleeAttackDamage = 60;
    RangedAttackDamage = 5;
    ArmorDamageReduction = 0;
}

NinjaTrap::~NinjaTrap() {
    std::cout << "I'm NINJ4-TP and I'm dead!(" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &F) : ClapTrap(F) {
    std::cout << "Copy constructor called" << std::endl;
}
void NinjaTrap::operator = (const NinjaTrap &F) {
    std::cout << "Assignation operator called" << std::endl;
    ClapTrap::operator=(F);
}

void NinjaTrap::ninjaShoebox(ClapTrap trap) {
    srand((unsigned int)time(0));
    if (HitPoints <= 0) {
        std::cout << "NINJ4-TP isn't working properly, he needs repairing!" << std::endl;
        return;
    }
    if (EnergyPoints - 25 < 0) {
        std::cout << "You don't have enough points" << std::endl;
        return;
    }
    EnergyPoints -= 25;
    std::cout << Name << " is using " << randNinjaAttack[rand() % 5] << " on a " << trap.GetName() << std::endl;
    trap.takeDamage(MeleeAttackDamage);
}
