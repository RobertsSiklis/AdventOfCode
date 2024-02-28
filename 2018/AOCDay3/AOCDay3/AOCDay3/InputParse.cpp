#include <string>
#include <deque>
#include <regex>
std::string GetDistanceFromEdges(std::string line) {
    std::regex reg("(\\w*\\d,\\w*)");
    std::smatch matches;
    if (std::regex_search(line, matches, reg)) {
        return matches.str(0);
    }
    return "";
}

int GetDistanceFromLeftSide(std::string line) {
    std::regex reg("^\\w*\\d");
    std::smatch matches;
    if (std::regex_search(line, matches, reg)) {
        //std::cout << "Distance from left " << matches.str(0) << '\n';
        return std::stoi(matches.str(0));
    }
    return 0;
}

int GetDistanceFromTopSide(std::string line) {
    std::regex reg("\\w*\\d$");
    std::smatch matches;
    if (std::regex_search(line, matches, reg)) {
        //std::cout << "Distance from top " << matches.str(0) << '\n';
        return std::stoi(matches.str(0));
    }
    return 0;
}

std::string GetFabricSize(std::string line) {
    std::regex reg("(\\w*\\dx\\w*)");
    std::smatch matches;
    if (std::regex_search(line, matches, reg)) {
        return matches.str(0);
    }
    return "";
}

int GetFabricSizeWidth(std::string line) {
    std::regex reg("^\\d*");
    std::smatch matches;
    if (std::regex_search(line, matches, reg)) {
        //std::cout << "Width of the fabric to cut " << matches.str(0) << '\n';
        return std::stoi(matches.str(0));
    }
    return 0;
}

int GetFabricSizeHeight(std::string line) {
    std::regex reg("\\d*$");
    std::smatch matches;
    if (std::regex_search(line, matches, reg)) {
        //std::cout << "Height of the fabric to cut " << matches.str(0) << '\n';
        return std::stoi(matches.str(0));
    }
    return 0;
}
