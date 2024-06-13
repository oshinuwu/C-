#include <iostream>
#include <string>

std::string removeWhitespaces(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (!std::isspace(c)) {//checks whether the character is a whitespace
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string output = removeWhitespaces(input);

    std::cout << "String without whitespaces: " << output << std::endl;

    fflush(stdin);
    std::cin.get();
    return 0;
}