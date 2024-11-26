#include "HumanA.hpp"

HumanA::HumanA(std::string name, const Weapon& weaponRef): _name(name), _weaponRef(weaponRef) {
	std::cout << "Constructor for a human A named " << this->_name << " with a weapon " << weaponRef.getType() << " is called" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "Destructor for Human A named " << this->_name << " is called" << std::endl;
}

void HumanA::attack() const {

	std::cout << this->_name << "attacks with their " << this->_weaponRef.getType() << std::endl;
	
}

//Для ссылок, которые являются членами класса, список инициализации конструктора
// — это единственный способ их инициализировать (потому что позже в теле конструктора уже нельзя (?))