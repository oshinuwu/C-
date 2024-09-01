#include <iostream>
using namespace std;

class Account
{
private:
    int accNo;
    double balance;
    static double minBalance;

public:
    // Static member function to display min_balance
    static void displayMinBalance()
    {
        cout << "Minimum Balance: " << minBalance << endl;
    }

    // Constructor
    Account() : accNo(0), balance(0.0) {}

    // Method to read values of object
    void readData()
    {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    // Method to display values of object
    void displayData()
    {
        cout << "Account Number: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Initialize static member variable
double Account::minBalance = 500.0;

int main()
{
    // Create array of objects to store data of 5 accounts
    Account accounts[5];

    // Read values of each object
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter data for Account " << (i + 1) << ":" << endl;
        accounts[i].readData();
    }

    // Display values of each object
    for (int i = 0; i < 5; i++)
    {
        cout << "Account " << (i + 1) << " Details:" << endl;
        accounts[i].displayData();
        cout << endl;
    }

    // Display minimum balance
    Account::displayMinBalance();
    cout << "\nName:Oshin Pant Roll NO:23 Lab_no:5.8";
    fflush(stdin);
    cin.get();
    return 0;
}