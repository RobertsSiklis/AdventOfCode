#include <iostream>
#include <fstream>
#include <string>
#include <deque>
#include "AOCDay2Part1.h"
#include "AOCDay2Part2.h"
int main()
{
    std::ifstream ifs;
    ifs.open("input.txt");
    if (!ifs.is_open()) {
        std::cout << "Failed to open the input file!";
        return 1;
    }

    char c;
    std::string digit;
    std::deque<int> line;
    std::deque<std::deque<int>> input;
    while (ifs.get(c)) {
        if (std::isdigit(c)) {
            digit.push_back(c);
        }
        else if (c == 'x') {
            line.push_back(std::stoi(digit));
            digit.clear();
        } else if (c == '\n') {
            line.push_back(std::stoi(digit));
            input.push_back(line);
            line.clear();
            digit.clear();
        }
    }

    ifs.close();

    //AdventOfCodeDay2Part1(input);
    AdventOfCodeDay2Part2(input);
}
