#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {
	std::cout << "Weapon default constructor called" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon destructor called" << std::endl;
}

const std::string& Weapon::getType() const {
	return (this->_type);
}

void Weapon::setType(std::string type) {
	this->_type = type;
}