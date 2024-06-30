#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::string filename = "D:\\programming\\C++\\example.csv";
    std::ofstream file(filename);

    if (!file) {
        std::cerr << "Unable to open file " << filename << std::endl;
        return 1;
    }

    // Write the header row
    file << "Name,Age,Occupation\n";

    // Write some sample data
    file << "John,25,Software Engineer\n";
    file << "Alice,30,Doctor\n";
    file << "Bob,35,Teacher\n";

    file.close();

    std::cout << "CSV file created successfully!" << std::endl;

    fflush(stdin);
    std::cin.get();
    return 0;
}