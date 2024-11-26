#include "Harl.hpp"

int main()
{
	std::string	level;
	Harl		harl;

	std::cout << "Level of complainig : ";
	std::cin >> level;
	harl.complain(level);
	return 0;
}