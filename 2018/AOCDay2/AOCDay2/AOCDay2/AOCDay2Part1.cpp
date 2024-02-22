#include <deque>
#include <iostream>

int AdventOfCodeDay2Part1(std::deque<std::string>& input) {
	int threeOfAnyLetter = 0;
	int twoOfAnyLetter = 0;
	int yay = 1;
	for (std::string line : input) {
		std::string tempLine = line;
		//std::cout << "CURRENT LINE: " << yay << " ";
		bool threeOfAnyLetterHasBeenCounted = false;
		bool twoOfAnyLetterHasBeenCounted = false;
		for (int i = 0; i < line.size() + 1; ++i) {
			char compareLetter = line.front();
			//std::cout << "Current Line: " << line << " for letter " << compareLetter;
			 
			int counter = 0;
			for (int j = 0; j < line.size(); ++j) {
				if (compareLetter == line[j]) {
					++counter;
					line.erase(j, 1);
					--j;
					i = 0;
				}
			}
			if (counter == 3 && threeOfAnyLetterHasBeenCounted == false) {
				++threeOfAnyLetter;
				threeOfAnyLetterHasBeenCounted = true;
				//std::cout << "Three Occurances found for letter " << compareLetter << " on Line " << line << "|" << tempLine <<  '\n';
			}
			if (counter == 2 && twoOfAnyLetterHasBeenCounted == false) {
				twoOfAnyLetterHasBeenCounted = true;
				//std::cout << "Two Occurances found for letter " << compareLetter << " on Line " << line << "|" << tempLine << '\n';
				++twoOfAnyLetter;
			}
			//std::cout << " had " << counter  << " occurances!" << '\n';
			
		}
		++yay;
	}
	//std::cout << threeOfAnyLetter << '\n';
	//std::cout << twoOfAnyLetter << '\n';
	return threeOfAnyLetter * twoOfAnyLetter;
}

