#include<iostream>
#include<deque>
int AdventOfCodeDay1Part2(const std::deque<int>* const inputPtr) {

    int stepsForward = inputPtr->size() / 2;
    int total = 0;
    for (int i = 0; i < inputPtr->size() - 1; ++i) {
        if (inputPtr + i + stepsForward == nullptr) {
            //Used for checking how many steps left when entering new Circle Round
            int stepsIntoNextCircleRound = inputPtr->size() - i - stepsForward;
            std::cout << stepsIntoNextCircleRound;
            //if (inputPtr->at(i) == inputPtr->at(stepsIntoNextCircleRound)) {
            //    total += inputPtr->at(i);
            //}     
        //} else if (inputPtr->at(i) == inputPtr->at(i + stepsForward)) {
         //   total += inputPtr->at(i);
        }
    }

    return total;
}
