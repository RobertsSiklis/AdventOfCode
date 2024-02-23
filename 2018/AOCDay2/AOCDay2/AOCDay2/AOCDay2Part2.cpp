#include <deque>
#include <iostream>
void AdventOfCodeDay2Part2(std::deque<std::string>& input) {
	for (int i = 0; i < input.size(); ++i) {
		std::string identificator = input[i];
		char diffChar = ' ';
		for (int j = 0; j < input.size(); ++j) {
			std::string identificatorComparor = "";
			int differAmount = 0;
			if (j + 1 < input.size()) {
				identificatorComparor = input[j + 1];
			}
			for (int k = 0; k < identificatorComparor.size() && j + 1 < input.size(); ++k) {
				if (identificator[k] != identificatorComparor[k]) {
					++differAmount;
					diffChar = identificator[k];
				}
			}
			if (differAmount == 1) {
				std::cout << identificator << "|" << identificatorComparor << "|" << diffChar << '\n';
			}
		}
	}
}