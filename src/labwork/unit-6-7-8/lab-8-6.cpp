#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class student
{
    int sid;
    string sname;
    string level;

public:
    void read_details()
    {
        cout << "\nId : ";
        cin >> sid;
        cout << "Name : ";
        cin >> sname;
        cout << "Level : ";
        cin >> level;
        ofstream fio;

        // Open the file in append mode
        fio.open("D:\\file-handling\\newfile1.txt", ios::app);

        fio << "SID : " << sid << endl
            << "Name : " << sname << endl
            << "Level : " << level << endl << endl; // Add an extra newline for separation
        fio.close();

        string text;

        ifstream fi;
        cout << "\n\n\n";
        fi.open("D:\\file-handling\\newfile1.txt");
        while (getline(fi, text))
        {
            cout << text << endl;
        }
        fi.close();
    }
};

int main()
{
    student s1, s2;
    s1.read_details();
    s2.read_details();

       cout << "\nName: Oshin Pant Roll NO:23 Lab_no:8.6";
    fflush(stdin);
    cin.get();
}