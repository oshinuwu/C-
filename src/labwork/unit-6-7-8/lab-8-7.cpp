#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    // Create a file stream object
    fstream file("D:\\file-handling\\example.txt", ios::out | ios::in | ios::trunc);

    if (!file) {
        cout << "Error opening file." << endl;
        return 1;
    }

    // Write some data to the file
    file << "Hello, World!" << endl;
    file << "This is a test file." << endl;

    // Move the file pointer to the beginning of the file
    file.seekp(0, ios::beg);

    // Read the file line by line using getline()
    string line;
    cout << "Reading the file line by line:" << endl;
    while (getline(file, line)) {
        cout << line << endl;
    }

    // Get the current position of the get pointer
    cout << "Current position of get pointer: " << file.tellg() << endl;

    // Move the file pointer to the end of the file
    file.seekp(0, ios::end);

    // Get the current position of the put pointer
    cout << "Current position of put pointer: " << file.tellp() << endl;

    // Append some data to the file
    file << " This is appended data." << endl;

    // Move the file pointer to the beginning of the file
    file.seekg(0, ios::beg);

    // Read the file again to see the appended data
    cout << "\nReading the file again:" << endl;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();

 cout << "\nName: Oshin Pant Roll NO:23 Lab_no:8.7";
    fflush(stdin);
    cin.get();
    return 0;
}