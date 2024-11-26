#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	public:
		Zombie(std::string name); // почему не по ссылке?
		~Zombie();

		void announce() const;
	private:
		std::string _name;
};

Zombie*	newZombie( std::string name);
void	randomChump( std::string name);

#endif
