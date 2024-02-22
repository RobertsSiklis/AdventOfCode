#include <iostream>
#include <unordered_set>
#include <deque>

int AdventOfCodeDay1Part2(std::deque<int>& input) {
    std::unordered_set<int> seenFrequencies;
    int total = 0;
    int i = 0;

    while (true) {
        total += input.at(i);

        if (seenFrequencies.find(total) != seenFrequencies.end()) {
            return total; // Found repeated frequency
        }

        seenFrequencies.insert(total);

        ++i;
        if (i >= input.size()) {
            i = 0;
        }
    }

    return 0;
}