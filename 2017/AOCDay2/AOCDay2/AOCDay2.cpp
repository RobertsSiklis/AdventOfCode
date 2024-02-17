#include <iostream>
#include <fstream>
#include <deque>
#include <string>
#include <string.h>
#include "AOCDay2Part1.h"
#include "AOCDay2Part2.h"
int main()
{
    std::ifstream ifs;
    ifs.open("input.txt");

    if (!ifs.is_open()) {
        std::cout << "Failed to open the input file";
        return 1;
    }

    std::deque<std::deque<int>>input;
    char c;
    std::deque<int> intDeque;
    int total = 0;
    std::string line;
    while (ifs.get(c)) {
        if (std::isspace(c) || c == '\n') {
            total += std::stoi(line);
            line.clear();
            intDeque.push_back(total);
            total = 0;
        }
        if (c == '\n') {
            input.push_back(intDeque);
            intDeque.clear();
        }
        if (std::isdigit(c)) {
            line.push_back(c);
        }

    }
    input.push_back(intDeque);
    ifs.close();
    //std::cout << "The total is: " << AdventOfCodeDay2Part1(input) << '\n';
    std::cout << "The total is: " << AdventOfCodeDay2Part2(input) << '\n';
}
