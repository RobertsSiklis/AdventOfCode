#include <iostream>
#include <deque>
int AdventOfCodeDay2Part2(const std::deque<std::deque<int>>& input) {
	bool found = false;
	int total = 0;
	for (int i = 0; i < input.size(); ++i) {
		for (int j = 0; j < input.at(i).size(); ++j) {
			int num1 = input.at(i).at(j);
			for (int k = 0; k < input.at(i).size(); ++k) {
				int num2 = input.at(i).at(k);
				if (num1 > num2) {
					if (num1 != num2 && (num1 % num2 == 0)) {
						std::cout << num1 << "|" << num2 << "|" << num1 / num2 << '\n';
						total += num1 / num2;
						found = true;
						break;
					}
				}
				else {
					if (num1 != num2 && (num1 % num2 == 0)) {
						std::cout << num2 << "|" << num1 << "|" << num2 / num1 << '\n';
						total += num1 / num2;
						found = true;
						break;
					}
				}
			}
			if (found == true) {
				found = false;
				break;
			}
		}
	}
	return total;
}