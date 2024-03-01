#include <iostream>
#include <tgmath.h>
#include <list>
int AdventOfCodeDay1Part2(std::list<int>& input) {
	int total = 0;
	for (int moduleFuel : input) {
		int fuelNeeded = moduleFuel;
		while (fuelNeeded > 0) {
			fuelNeeded = std::floor(fuelNeeded / 3 - 2);
			total += fuelNeeded;
		}
		total += fuelNeeded * (-1);
	}
	return total;
}