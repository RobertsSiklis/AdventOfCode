#include <iostream>
#include <vector>

void AdventOfCodeDay2Part1(std::vector<int>& input) {
	int index = 0;
	int currentUpCode = input[index];
	input[index + 1] = 12;
	input[index + 2] = 2;
	while (currentUpCode != 99) {
		int inputPositionOne = input[index + 1];
		int inputPositionTwo = input[index + 2];
		int outputPositionThree = input[index + 3];

		int inputValueOne = input[inputPositionOne];
		int inputValueTwo = input[inputPositionTwo];

		if (currentUpCode == 1) {
			input[outputPositionThree] = inputValueOne + inputValueTwo;
		}

		if (currentUpCode == 2) {
			input[outputPositionThree] = inputValueOne * inputValueTwo;
		}
		index += 4;
		currentUpCode = input[index];
	}

	std::cout << input[0];
}