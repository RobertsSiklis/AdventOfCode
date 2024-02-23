#include <iostream>
#include <fstream>
#include <deque>
#include <string>
#include "AOCDay2Part1.h"
#include "AOCDay2Part2.h"
int main()
{
    std::ifstream ifs;
    ifs.open("input.txt");

    if (!ifs.is_open()) {
        std::cout << "Failed opening input file!";
        return 1;
    }

    std::deque<std::string> input;
    std::string line;
    while (std::getline(ifs, line)) {
        input.push_back(line);
    }
    
    //std::cout << AdventOfCodeDay2Part1(input);
    AdventOfCodeDay2Part2(input);
}
