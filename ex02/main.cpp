#include <iostream>
#include <string>

int main()
{
	std::string var("HI THIS IS BRAIN");
	std::string *stringPTR = &var;
	std::string &stringREF = var;

	std::cout << "L’adresse de la string en mémoire : " << &var << std::endl;
	std::cout << "L’adresse stockée dans stringPTR : " << stringPTR << std::endl;
	std::cout << "L’adresse stockée dans stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "La valeur de la string : " << var << std::endl;
	std::cout << "La valeur pointée par stringPTR : " << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF : " << stringREF << std::endl;

	return 0;
}
