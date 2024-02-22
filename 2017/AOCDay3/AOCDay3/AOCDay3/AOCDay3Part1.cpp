#include <iostream>
void AdventOfCodeDay3Part1() {
	int passedValue = 12;
	int stepsFromAccessPort = 0;
	int counter = 0;
	int nextAmount = 1;
	for (int i = 0; i < passedValue; ++i) {
		if (counter == nextAmount) {
			nextAmount = i + 8;
			stepsFromAccessPort++;
			counter = 0;
		}
		counter++;
	}
	std::cout << stepsFromAccessPort;
}