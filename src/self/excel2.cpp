#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<fstream> // Include the fstream library for file I/O
struct Person {
    std::string name;
    int age;
    std::string occupation;
};
std::vector<Person> readCSV(const std::string& filename) {
    std::vector<Person> people;
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Unable to open file " << filename << std::endl;
        file.close(); // Close the file
        return people;
    }
    std::string line;
    std::getline(file, line); // Skip the header row
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        Person person;
        std::getline(iss, person.name, ',');
        std::string ageStr;
        std::getline(iss, ageStr, ',');
        person.age = std::stoi(ageStr); // Convert age string to integer
        std::getline(iss, person.occupation, ',');
        people.push_back(person);
    }

    file.close(); // Close the file
    return people; // Return the vector of people
}

void writeCSV(const std::string& filename, const std::vector<Person>& people) {
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Unable to open file " << filename << std::endl;
        return;
    }

    file << "Name,Age,Occupation\n"; // Write the header row

    for (const auto& person : people) {
        file << person.name << "," << person.age << "," << person.occupation << "\n"; // Write each person's data
    }

    file.close(); // Close the file
}

int main(){
    // Read the CSV file
    std::string filename = "D:\\programming\\C++\\example.csv";
    std::vector<Person> people = readCSV(filename); // Read the CSV file into a vector of people

    // Modify a specific person
    for (auto& person : people) {
        if (person.name == "Alice") {
            person.age = 31; // Update Alice's age
            person.occupation = "Surgeon"; // Update Alice's occupation
            break;
        }
    }

    // Write the modified data back to the file
    writeCSV(filename, people); // Write the modified data back to the file

    std::cout << "CSV file modified successfully!" << std::endl;

    fflush(stdin);
    std::cin.get();
    return 0; 
}