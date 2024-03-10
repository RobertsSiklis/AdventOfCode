#include <iostream>
#include <string>
#include <unordered_set>
void AdventOfCodeDay3Part2(std::string& input) {
    enum Santas { Santa, RoboSanta};
    Santas currentSanta = Santa;
    int santaCurrentX = 0;
    int santaCurrentY = 0;
    int roboSantaCurrentX = 0;
    int roboSantaCurrentY = 0;
    std::unordered_set<std::string> holder;
    holder.insert(std::to_string(santaCurrentX) + "," + std::to_string(santaCurrentY));
    for (int i = 0; i < input.size(); ++i) {
        if(currentSanta == Santa){
            switch (input[i]) {
            case '^':
                ++santaCurrentY;
                break;
            case 'v':
                --santaCurrentY;
                break;
            case '>':
                ++santaCurrentX;
                break;
            case '<':
                --santaCurrentX;
                break;
            default:
                std::cout << "No input";
                break;
            }
            currentSanta = RoboSanta;
            holder.insert(std::to_string(santaCurrentX) + "," + std::to_string(santaCurrentY));
        }

        else if (currentSanta == RoboSanta) {
            switch (input[i]) {
            case '^':
                ++roboSantaCurrentY;
                break;
            case 'v':
                --roboSantaCurrentY;
                break;
            case '>':
                ++roboSantaCurrentX;
                break;
            case '<':
                --roboSantaCurrentX;
                break;
            default:
                std::cout << "No input";
                break;
            }
            currentSanta = Santa;
            holder.insert(std::to_string(roboSantaCurrentX) + "," + std::to_string(roboSantaCurrentY));
        }
        
    }
    std::cout << holder.size();
}