#include <iostream>
#include <string>
#include <deque>
void AdventOfCodeDay2Part2(std::deque<std::deque<int>>& input) {
	int total = 0;
	for (std::deque<int> line : input) {
		int ribbonSize = line[0] * line[1] * line[2];

		int allSides[3];
		allSides[0] = line[0] + line[1];
		allSides[1] = line[1] + line[2];
		allSides[2] = line[2] + line[0];

		int smallestSidePerimeter = allSides[0] * 2;
		for (int i = 1; i < 3; ++i) {
			if (smallestSidePerimeter > allSides[i] * 2) {
				smallestSidePerimeter = allSides[i] * 2;
			}
		}
		total += ribbonSize + smallestSidePerimeter;
	}
	std::cout << total;
}