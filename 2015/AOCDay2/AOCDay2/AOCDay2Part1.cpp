#include <iostream>
#include <string>
#include <deque>
void AdventOfCodeDay2Part1(std::deque<std::deque<int>>& input) {
	int total = 0;
	for (std::deque<int> line : input) {	
		int allSides[3];
		allSides[0] = line[0] * line[1];
		allSides[1] = line[1] * line[2];
		allSides[2] = line[2] * line[0];

		int smallestSide = allSides[0];
		for (int i = 1; i < 3; ++i) {
			if (smallestSide > allSides[i]) {
				smallestSide = allSides[i];
			}
		}
		int totalSurfaceArea = 2 * allSides[0] + 2 * allSides[1] + 2 * allSides[2];
		totalSurfaceArea += smallestSide;
		total += totalSurfaceArea;
	}
	std::cout << total;
}