#include <deque>
int AdventOfCodeDay1Part1(const std::deque<int>* const inputPtr) {

    int total = 0;

    for (int i = 0; i < inputPtr->size() - 1; ++i) {
        if (inputPtr + i + 1 == nullptr) {
            break;
        }
        if (inputPtr->at(i) == inputPtr->at(i + 1)) {
            total += inputPtr->at(i);
        }
    }

    if (inputPtr->front() == inputPtr->back()) {
        total += inputPtr->front();
    }

    return total;

}