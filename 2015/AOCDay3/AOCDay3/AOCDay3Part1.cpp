#include <iostream>
#include <string>
#include <unordered_set>
void AdventOfCodeDay3Part1(std::string& input) {
    int currentX = 0;
    int currentY = 0;
    std::unordered_set<std::string> holder;
    holder.insert(std::to_string(currentX) + "," + std::to_string(currentY));
    for (int i = 0; i < input.size(); ++i) {
        switch (input[i]) {
        case '^':
            ++currentY;
            break;
        case 'v':
            --currentY;
            break;
        case '>':
            ++currentX;
            break;
        case '<':
            --currentX;
            break;
        default:
            std::cout << "No input";
            break;
        }
        holder.insert(std::to_string(currentX) + "," + std::to_string(currentY));
    }
    std::cout << holder.size();
}