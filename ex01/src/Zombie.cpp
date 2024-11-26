#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Constructor called for Zombie" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Destructor called for Zombie" << this->_name << std::endl;
}

void Zombie::announce() const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}

