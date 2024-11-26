#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weaponPtr(NULL) {
	std::cout << "Constructor for a human B named " << this->_name << " is called" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "Destructor for Human B named " << this->_name << " is called" << std::endl;
}

void	HumanB::setWeapon(Weapon& weaponRef) {
	this->_weaponPtr = &weaponRef;
}

void	HumanB::attack() const {

	if(this->_weaponPtr == NULL)
	{
		std::cerr << "No weapon was set" << std::endl;
		return ;
	}
	std::cout << this->_name << "attacks with their " << this->_weaponPtr->getType() << std::endl;
}

