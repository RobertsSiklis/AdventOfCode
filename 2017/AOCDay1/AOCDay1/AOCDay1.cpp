#include "includes/AOCDay1Part1.h"
#include "includes/AOCDay1Part2.h"
#include <iostream>
#include <fstream>
#include <deque>
int main()
{
    std::ifstream ifs;

    ifs.open("input.txt");

    if (!ifs.is_open()) {
        std::cout << "Failed opening input file!";
    }

    std::deque<int> input;
    const std::deque<int>* const inputPtr = &input;
    char c;

    while (ifs.get(c)) {
        input.push_back(c - '0');
    }
    ifs.close();

	std::cout << "Part1 Result: " << AdventOfCodeDay1Part1(inputPtr) << '\n';
    std::cout << "Part2 Result: " << AdventOfCodeDay1Part2(inputPtr) << '\n';
}

