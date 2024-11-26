#include "Zombie.hpp"

int main()
{
	unsigned int N = 0;
	std::string name;
	std::cout << "How many zombies do you want to create?" << std::endl;
	std::cin >> N; //нужно ли защищать от overload?
	std::cout << "How would you call them?" << std::endl;
	std::cin >> name;
	Zombie *zHorde = zombieHorde(N, name);
	if(!zHorde) {
		std::cerr << "Memory allocation pb" << std::endl;
		return 1;
	}
	for (unsigned int i = 0; i < N; i++) {
		zHorde[i].announce();
	}
	delete [] zHorde;
	std::cout << "Zombie Horde is destroyed by using delete []" << std::endl;
	return 0;
}
