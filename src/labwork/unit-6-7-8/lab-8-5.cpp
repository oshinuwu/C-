#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    // Write to file in output mode
    ofstream fo("D:\\file-handling\\fstreamfile.dat", ios::out);
    if (!fo) {
        cout << "Error opening file for writing." << endl;
        return 1;
    }

    string words;
    cout << "Enter words to write to the file. Enter '0' to exit.\n";
    while (true) {
        getline(cin, words);
        if (words == "0") {
            break; // press 0 to exit
        }
        fo << words << endl; // writing on file using insertion operator
    }

    fo.close();

    // Read from file in input mode
    ifstream fi("D:\\file-handling\\fstreamfile.dat", ios::in);
    if (!fi) {
        cout << "Error opening file for reading." << endl;
        return 1;
    }

    cout << "\n\n\nHere's what written in the file :\n\n";
    while (fi >> words) { // reading from file using extraction operator
        cout << words << endl;
    }

    fi.close();

    // Read from file in binary mode
    ifstream fb("D:\\file-handling\\fstreamfile.dat", ios::in | ios::binary);
    if (!fb) {
        cout << "Error opening file for binary reading." << endl;
        return 1;
    }

    char buffer[1024];
    cout << "\n\n\nHere's what written in the file in binary mode :\n\n";
    while (fb.read(buffer, 1024)) {
        cout.write(buffer, fb.gcount());
    }

    fb.close();

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:8.5";
    fflush(stdin);
    cin.get();

    return 0;
}