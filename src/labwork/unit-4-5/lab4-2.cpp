#include <iostream> //4.2
using namespace std;
class Concat
{
    string part1, part2;

public:
    Concat(string a, string b) : part1(a), part2(b) {};
    void operator++()
    {
        cout << "After concatenation : " << part1 + part2;
    }
};
int main()
{
    string part1, part2;
    cout << "Enter two parts of a word to concatnate them: ";
    cin >> part1 >> part2;
    Concat W(part1, part2);
    ++W;

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:4.2";
    fflush(stdin);
    cin.get();
}