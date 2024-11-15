#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Open the file in read/write mode without truncating (no ios::app here)
    fstream file("D:\\file-handling\\example.txt", ios::out | ios::in | ios::trunc);

    if (!file)
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    // Write initial data to the file (this overwrites the file contents)
    file << "Hello, World!" << endl;
    file << "This is a test file." << endl;

    // Move the get pointer to the beginning of the file before reading
    file.seekg(0, ios::beg); // Seek the get pointer (for reading)

    // Read the file line by line
    string line;
    cout << "Reading the file line by line before append:" << endl;
    while (getline(file, line))
    {
        cout << line << endl;
    }

    // Get and display the current position of the get pointer
    cout << "Current position of get pointer (after reading): " << file.tellg() << endl;

    // Close the file after reading
    file.close();

    // Open the file again in append mode, this time for writing only
    file.open("D:\\file-handling\\example.txt", ios::out | ios::app);

    if (!file)
    {
        cout << "Error opening file for appending." << endl;
        return 1;
    }

    file.seekp(0, ios::end);
    cout << "Current position of put pointer : " << file.tellp() << endl;
    // Append new data to the file
    file << "This is appended data." << endl;

    // Close the file after appending
    file.close();

    // Now, reopen the file in read/write mode to read everything
    file.open("D:\\file-handling\\example.txt", ios::in | ios::out);

    if (!file)
    {
        cout << "Error opening file for reading and writing." << endl;
        return 1;
    }

    // Move the get pointer to the beginning of the file to read all the data
    file.seekg(0, ios::beg);

    // Read the file again to see the appended data
    cout << "\nReading the file again after appending:" << endl;
    while (getline(file, line))
    {
        cout << line << endl;
    }

    // Close the file
    file.close();

    // Final output
    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:8.7" << endl;
    cin.ignore(); // Clear input buffer (useful in some cases)
    cin.get();    // Wait for user input before closing

    return 0;
}
