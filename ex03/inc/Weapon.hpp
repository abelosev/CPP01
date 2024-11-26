#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	
	public:
		Weapon(std::string type);
		~Weapon();

		const std::string &getType() const;
		void setType(std::string type); // параметр передается по ссылке, чтобы не копировать строку

	private:
		std::string _type;
};

#endif