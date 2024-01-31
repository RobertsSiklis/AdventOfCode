#include<iostream>
#include<deque>
int AdventOfCodeDay1Part2(const std::deque<int>* const inputPtr) {

    int stepsForward = inputPtr->size() / 2;
    int total = 0;
    for (int i = 0; i < inputPtr->size(); ++i) {
        if (inputPtr + i + stepsForward > inputPtr + inputPtr->size() - 1) {
            //Checking how many steps left when entering new Circle Round
            int stepsLeftToGetToNextCircleRound = inputPtr->size() - i;
            int stepsIntoNextCircleRound = stepsForward - stepsLeftToGetToNextCircleRound;
            if (inputPtr->at(i) == inputPtr->at(stepsIntoNextCircleRound)) {
                total += inputPtr->at(i);
            }     
        } else if (inputPtr->at(i) == inputPtr->at(i + stepsForward)) {
            total += inputPtr->at(i);
        }
    }

    return total;
}
