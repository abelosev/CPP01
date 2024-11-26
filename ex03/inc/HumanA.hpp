#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	
	public:
		HumanA(std::string name, const Weapon& weaponRef);
		~HumanA();

		void attack() const;

	private:
		std::string _name;
		const Weapon& _weaponRef; //HumanA не владеет объектом Weapon
};

#endif