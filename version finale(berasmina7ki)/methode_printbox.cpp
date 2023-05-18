#include <iostream>
#include <sstream>

void printBox(const std::string& message) {
    std::istringstream iss(message);
    std::string line;

    int maxLength = 0;
    while (std::getline(iss, line)) {
        if (line.length() > maxLength) {
            maxLength = line.length();
        }
    }

    int borderLength = maxLength + 4;

    std::cout << "+";
    for (int i = 0; i < borderLength; ++i) {
        std::cout << "-";
    }
    std::cout << "+" << std::endl;

    iss.clear();
    iss.seekg(0);

    while (std::getline(iss, line)) {
        std::cout << "| ";
        std::cout << line;
        for (int i = 0; i < maxLength - line.length(); ++i) {
            std::cout << " ";
        }
        std::cout << " |" << std::endl;
    }

    std::cout << "+";
    for (int i = 0; i < borderLength; ++i) {
        std::cout << "-";
    }
    std::cout << "+" << std::endl;
}
