#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	if (N <= 0) {
		std::cerr << "Error: the nb of zombies we want to create is less or equal to 0" << std::endl;
		return NULL;
	}
	Zombie	*zHorde = new Zombie[N]; //if(!zHorde) не нужно, так?
	for (int i = 0; i < N; i++) {
		zHorde[i].setName(name);
	}
	return (zHorde);
}
