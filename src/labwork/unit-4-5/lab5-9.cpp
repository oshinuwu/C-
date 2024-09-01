#include <iostream>
#include <iomanip> // for std::setw and std::setfill

using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Default constructor initializing to 0
    Time() : hours(0), minutes(0), seconds(0) {}

    // Parameterized constructor
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Display time in 11:59:59 format
    void display() const
    {
        cout << setfill('0') << setw(2) << hours << ":"
             << setfill('0') << setw(2) << minutes << ":"
             << setfill('0') << setw(2) << seconds << endl;
    }

    // Add two time objects
    void add(const Time &t1, const Time &t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + seconds / 60;
        hours = t1.hours + t2.hours + minutes / 60;
        seconds %= 60;
        minutes %= 60;
        hours %= 24; // Assuming we wrap around after 24 hours
    }
};

int main()
{
    // Creating two initialized Time objects
    const Time t1(11, 59, 59);
    const Time t2(0, 0, 1);

    // Creating one uninitialized Time object
    Time t3;

    // Adding t1 and t2, storing the result in t3
    t3.add(t1, t2);

    // Displaying the value of t3
    cout << "The result of adding the two times is: ";
    t3.display();
    cout << "\nName:Oshin Pant Roll NO:23 Lab_no:5.9";
     fflush(stdin);
    cin.get();
    return 0;
}