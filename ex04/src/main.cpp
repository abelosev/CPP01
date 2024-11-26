#include "Sed.hpp"

int main(int ac, char **av)
{
    if (ac != 4) {
        std::cerr << "Error: invalid nb of args" << std::endl;
        return 1;
    }
    if (Sed::replace(av[1], av[2], av[3])) {
        std::cerr << "Error: couldn't replace s1 with s2" << std::endl;
        return 1;
    }
    std::cerr << "Successfully replaced" << std::endl;
    return 0;
}
