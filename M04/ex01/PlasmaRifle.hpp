#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

	public:
		PlasmaRifle();
		virtual ~PlasmaRifle();
		PlasmaRifle(const PlasmaRifle&);
		void operator = (const PlasmaRifle& s);
		void attack() const;

	protected:
		
};

#endif
