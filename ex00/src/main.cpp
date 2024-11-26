#include "Zombie.hpp"

int main()
{
	Zombie z1("Ana");
	Zombie *z2 = newZombie("Ael");
	std::cout << "Zombie Ana is created on stack" << std::endl;
	std::cout << "Zombie Ael is created on heap (needs memory deallocation)" << std::endl;
	delete z2;
	return 0;
}