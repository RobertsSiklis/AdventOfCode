#include <iostream>
#include <tgmath.h>
#include <list>
int AdventOfCodeDay1Part1(std::list<int>& input) {
	int total = 0;
	for (int moduleFuel : input) {
		int fuelNeeded = std::floor(moduleFuel / 3 - 2);
		total += fuelNeeded;
	}
	return total;
}