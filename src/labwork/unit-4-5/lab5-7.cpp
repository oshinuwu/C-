#include <iostream> //5.7
using namespace std;
class author
{
    string name;
    string qualification;

public:
    void get_a_data()
    {
        cout << "Name of the author : ";
        cin >> name;
        cout << "Qualification of the author : ";
        cin >> qualification;
    }
    void put_a_data()
    {
        cout << "\n\n\nAuthor :\n\t\t";
        cout << "Name : " << name << "\n\t\t";
        cout << "Qualification : " << qualification << endl;
    }
};

class publication
{
    string pname;

public:
    void get_p_data()
    {
        cout << "Name of the publication : ";
        cin >> pname;
    }
    void put_p_data()
    {
        cout << "\n\nPublication :\n\t\t";
        cout << "Name : " << pname << endl;
    }
};

class book : public author, public publication
{
    string title;
    int price;

public:
    void get_b_data()
    {

        cout << "\n\n\n\nTitle of the book : ";
        cin >> title;
        cout << "Price of the book in rupees : ";
        cin >> price;
        get_a_data();
        get_p_data();
    }

    void put_b_data()
    {
        put_a_data();
        put_p_data();
        cout << "\n\nBook :\n\t\t";
        cout << "Title : " << title << "\n\t\t";
        cout << "Price : " << price << endl;
    }
};

int main()
{
    book b1;
    b1.get_b_data();
    b1.put_b_data();

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:5.7";
    fflush(stdin);
    cin.get();
}