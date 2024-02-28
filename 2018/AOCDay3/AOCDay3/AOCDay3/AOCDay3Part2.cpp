#include <deque>
#include <string>
#include <iostream>
#include "InputParse.h"
void AdventOfCodeDay3Part2(std::deque<std::string>& input) {

    std::deque<std::deque<char>>* sizeOfFabric = new std::deque<std::deque<char>>();
    for (int i = 0; i < 1000; ++i) {
        std::deque<char> row;
        for (int j = 0; j < 1000; ++j) {
            row.push_back('#');
        }
        sizeOfFabric->push_back(row);
    }
    for (std::string line : input) {

        std::string edgeDistances = GetDistanceFromEdges(line);
        int leftEdgeDistance = GetDistanceFromLeftSide(edgeDistances);
        int topEdgeDistance = GetDistanceFromTopSide(edgeDistances);
        std::string sizeOfFabricToCut = GetFabricSize(line);
        int widthOfFabricToCut = GetFabricSizeWidth(sizeOfFabricToCut);
        int heightOfFabricToCut = GetFabricSizeHeight(sizeOfFabricToCut);
        int currentOverlap = 0;
        for (int i = topEdgeDistance; i < topEdgeDistance + heightOfFabricToCut; ++i) {
            for (int j = leftEdgeDistance; j < leftEdgeDistance + widthOfFabricToCut; ++j) {
                if ((*sizeOfFabric)[i][j] == 'O') {
                    continue;
                }
                if ((*sizeOfFabric)[i][j] == '#') {
                    (*sizeOfFabric)[i][j] = 'X';
                } else {
                    (*sizeOfFabric)[i][j] = 'O';
                    ++currentOverlap;
                }
            }
        }
        //std::cout << '\n' << "TOTAL RESULTS:" << " LEFT EDGE DISTANCE: " << leftEdgeDistance << " TOP EDGE DISTANCE: " << topEdgeDistance <<
        //    " WIDTH OF FABRIC: " << widthOfFabricToCut << " HEIGTH OF FABRIC: " << heightOfFabricToCut << '\n';
        //std::cout << '\n' << "----------------" << '\n';
    }

    for (std::string line : input) {

        std::string edgeDistances = GetDistanceFromEdges(line);
        int leftEdgeDistance = GetDistanceFromLeftSide(edgeDistances);
        int topEdgeDistance = GetDistanceFromTopSide(edgeDistances);
        std::string sizeOfFabricToCut = GetFabricSize(line);
        int widthOfFabricToCut = GetFabricSizeWidth(sizeOfFabricToCut);
        int heightOfFabricToCut = GetFabricSizeHeight(sizeOfFabricToCut);
        int currentOverlap = 0;
        for (int i = topEdgeDistance; i < topEdgeDistance + heightOfFabricToCut; ++i) {
            for (int j = leftEdgeDistance; j < leftEdgeDistance + widthOfFabricToCut; ++j) {
                if ((*sizeOfFabric)[i][j] == 'O') {
                    ++currentOverlap;
                    continue;
                }
            }
        }
        if (currentOverlap == 0) {
            std::cout << line;
        }

        //std::cout << '\n' << "TOTAL RESULTS:" << " LEFT EDGE DISTANCE: " << leftEdgeDistance << " TOP EDGE DISTANCE: " << topEdgeDistance <<
        //    " WIDTH OF FABRIC: " << widthOfFabricToCut << " HEIGTH OF FABRIC: " << heightOfFabricToCut << '\n';
        //std::cout << '\n' << "----------------" << '\n';
    }
    delete sizeOfFabric;
}