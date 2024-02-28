#include <iostream>
#include <fstream>
#include <string>
#include <deque>
#include "AOCDay3Part1.h"
#include "AOCDay3Part2.h"
int main()
{
    std::ifstream ifs;
    ifs.open("input.txt");
    
    if (!ifs.is_open()) {
        std::cout << "Failed to Open Input File!";
        return 1;
    }
    
    std::string line;
    std::deque<std::string> input;
    while (std::getline(ifs, line)) {
        input.push_back(line);
    }
    ifs.close();

    //AdventOfCodeDay3Part1(input);
    AdventOfCodeDay3Part2(input);
}
