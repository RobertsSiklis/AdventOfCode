#include <iostream>
#include <fstream>
#include <unordered_set>
#include <string>
#include "AOCDay3Part1.h"
#include "AOCDay3Part2.h"
int main()
{
    std::ifstream ifs;
    ifs.open("input.txt");
    if (!ifs.is_open()) {
        std::cout << "Failed to open input file!";
        return 1;
    }
    std::string input;
    std::getline(ifs, input);
    ifs.close();
    //AdventOfCodeDay3Part1(input);
    AdventOfCodeDay3Part2(input);
}
