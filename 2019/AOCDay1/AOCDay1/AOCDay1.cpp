#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include "AOCDay1Part1.h"
#include "AOCDay1Part2.h"
int main()
{
    std::ifstream ifs;
    ifs.open("input.txt");
    if (!ifs.is_open()) {
        std::cout << "Failed to open the input file!";
        return 1;
    }
    std::string line;
    std::list<int> input;
    while (std::getline(ifs, line)) {
        input.push_back(std::stoi(line));
    }
    ifs.close();
    //std::cout << AdventOfCodeDay1Part1(input);
    std::cout << AdventOfCodeDay1Part2(input);
}
