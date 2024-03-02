#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <tgmath.h>
#include "AOCDay2Part1.h"
bool BinarySearch(std::vector<int> arr, int low, int high, int needle) {
    do {
        int mid = std::floor(low + (high - low) / 2);
        int value = arr[mid];
        if (value == needle) {
            return true;
        }
        else if (value > needle) {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    } while (low < high);
    return false;
}

int TowCrystalBalls(std::vector<bool> breaks) {
    const int jumpAmount = std::floor(std::sqrt(breaks.size()));
    int i = jumpAmount;
    for (; i < breaks.size(); i += jumpAmount) {
        if (breaks[i]) {
            break;
        }
    }
    i -= jumpAmount;
    for (int j = 0; j < jumpAmount && i < breaks.size(); ++j, ++i) {
        if (breaks[i]) {
            return i;
        }
    }
}

std::vector<int> BubbleSort(std::vector<int> arr) {
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr.size() - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
         }
    }
    return arr;
}
int main()
{
    std::ifstream ifs;
    ifs.open("input.txt");
    if (!ifs.is_open()) {
        std::cout << "Failed to open input file!";
        return 1;
    }

    std::string line;
    char c;
    std::vector<int> input;
    while (ifs.get(c)) {
        if (c == ',' || c == '\n') {
            input.push_back(std::stoi(line));
            line.clear();
        }
        if (c != ',') {
            line.push_back(c);
        }   
    }
    ifs.close();
    //AdventOfCodeDay2Part1(input);
    int numToFind = 60;
    std::vector<int> arr { 10 , 20 , 30, 40 , 50 , 60, 70 ,80 ,90 ,100 , 110, 120, 130};
    
    int low = 0;
    int high = arr.size();
    
    std::cout << "Found the needle: " << BinarySearch(arr, low, high, numToFind);
    std::cout << '\n';
    std::vector<bool> crystal{ false, false , false , false, false, true , true, true, true };
    std::cout << "Break point at: " << TowCrystalBalls(crystal);
    std::cout << '\n';
    std::vector<int> bubble{ 23, 10, 2, 334, 20, 12, 67, 43, 65, 88, 99 };
    std::vector<int> sortedBubble = BubbleSort(bubble);
    for (int num : sortedBubble) {
        std::cout << num << "\t";
    }
}
