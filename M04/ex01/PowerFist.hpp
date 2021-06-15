#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {

	public:
		PowerFist();
		virtual ~PowerFist();
		PowerFist(const PowerFist&);
		void operator = (const PowerFist& s);
		void attack() const;

	protected:
		
};

#endif
