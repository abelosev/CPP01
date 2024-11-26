#include "Sed.hpp"
#include <iostream>
#include <fstream>

Sed::Sed() {};

Sed::~Sed() {};

int Sed::replace(const std::string& filename, const std::string& s1, const std::string& s2) {
    if (s1.empty() || s2.empty()) {
        std::cerr << "Error: s1 or s2 are empty" << std::endl;
        return 1;
    }
    std::ifstream infile(filename);
    if (!infile.is_open()) {
        std::cerr << "Error: can't open file " << filename << std::endl;
        return 1;
    }
    std::string outputFile = filename + ".replace";
    std::ofstream outfile(outputFile, std::ios::trunc);
    if (!outfile.is_open()) {
        std::cerr << "Error: can't create output file " << outputFile << std::endl;
        infile.close();
        return 1;
    }
    std::string line;
    bool firstLine = true;

    while (std::getline(infile, line)) {
        std::size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line.erase(pos, s1.size());
            line.insert(pos, s2);
            pos += s2.size();
        }
        if (!firstLine) {
            outfile << '\n';
        }
        outfile << line;
        firstLine = false;
    }
    infile.close();
    outfile.close();
    return 0;
}
