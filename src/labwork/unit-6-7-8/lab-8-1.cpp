#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream fo("D:\\file-handling\\file1.txt");
    string words;

    cout << "Enter words to write to the file. Enter '0' to exit.\n";
    while(true){
        getline(cin, words);
        if(words == "0"){
            break; // press 0 to exit
        }
        fo << words << endl; // writing on file using insertion operator
    }

    fo.close();
    cout << "\n\n\nHere's what written in the file :\n\n";

    ifstream fi("D:\\file-handling\\file1.txt");
    while(fi >> words){ // reading from file using extraction operator
        cout << words << endl;
    }
    fi.close();

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:8.1";
    fflush(stdin);
    cin.get();
}