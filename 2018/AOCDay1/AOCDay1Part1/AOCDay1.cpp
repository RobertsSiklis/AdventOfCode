#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <deque>
#include "AOCDay1Part1.h"
#include "AOCDay1Part2.h"
int main()
{
	std::ifstream ifs;
	ifs.open("input.txt");
	
	if (!ifs.is_open()) {
		std::cout << "Failed opening input file!";
	}

	std::deque<int> input;
	std::string line;
	while (std::getline(ifs, line)) {
		input.push_back(std::stoi(line));
	}
	//std::cout << AdventOfCodeDay1Part1(input);
	std::cout << AdventOfCodeDay1Part2(input);
}
