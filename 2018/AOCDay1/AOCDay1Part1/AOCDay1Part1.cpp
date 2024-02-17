#include <iostream>
#include<deque>
int AdventOfCodeDay1Part1(std::deque<int>& input) {
	int total = 0;
	for (int seq : input) {
		total += seq;
	}

	return  total;
}