#include <iostream>
#include <fstream>
#include <deque>
int main()
{
    std::ifstream ifs;

    ifs.open("input.txt");

    if (!ifs.is_open()) {
        std::cout << "Failed opening input file!";
        return 1;
    }

    std::deque<int> input;
    std::deque<int>* inputPtr = &input;
    char c;

    while (ifs.get(c)) {
        input.push_back(c - '0');
    }
    ifs.close();
    int total = 0;


    for (int i = 0; i < input.size() - 1; ++i) {
        if (inputPtr + i + 1 == nullptr) {
            break;
        }
        if (input.at(i) == input.at(i + 1)) {
            total += input.at(i);
        }
    }

    if (input.front() == input.back()) {
        total += input.front();
    }

    std::cout << total;
}
