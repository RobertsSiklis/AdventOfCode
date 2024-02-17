#include <iostream>
#include <deque>
int AdventOfCodeDay2Part1(const std::deque<std::deque<int>>& input) {
	int currentBiggestValue = 0;
	int currentSmallestValue = 0;
	int total = 0;
	int completeTotal = 0;
	for (int i = 0; i < input.size(); ++i) {
		currentBiggestValue = input.at(i).at(0);
		currentSmallestValue = input.at(i).at(0);
		for (int j = 1; j < input.at(i).size(); ++j) {
			if (input.at(i).at(j) > currentBiggestValue) {
				currentBiggestValue = input.at(i).at(j);
			}
			else if (input.at(i).at(j) < currentSmallestValue) {
				currentSmallestValue = input.at(i).at(j);
			}
		}
		std::cout << "Smallest Value: " << currentSmallestValue << " Biggest Value: " << currentBiggestValue;
		total += currentBiggestValue - currentSmallestValue;
		std::cout << " Round Total: " << total;
		completeTotal += total;
		std::cout << " Complete Total So Far: " << completeTotal << '\n';
		total = 0;
	}

	return completeTotal;
}