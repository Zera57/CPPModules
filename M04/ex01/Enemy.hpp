#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
	private:
		int _hp;
		std::string const _type;
	public:
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();
		Enemy(const Enemy& e);
		void operator = (const Enemy& e);
		std::string const &getType() const;
		int getHP() const;
		virtual void takeDamage(int);
};


#endif