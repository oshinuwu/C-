#include <iostream>
#include <string>

using namespace std;

// Abstract Clock class
class Clock {
protected:
    int hours; // 0-23
    int minutes; // 0-59
    int seconds; // 0-59

public:
    // Constructor with default values
    Clock(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    // Set time
    void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Get time
    string getTime() {
        return to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
    }

  
};

// Derived WallClock class
class WallClock : public Clock {
private:
    double circumference; // circumference of the clock face

public:
    // Constructor with default values
    WallClock(double circ = 0.0, int h = 0, int m = 0, int s = 0)
        : Clock(h, m, s), circumference(circ) {}

    // Set circumference
    void setCircumference(double circ) {
        circumference = circ;
    }

    // Get circumference
    double getCircumference() {
        return circumference;
    }

    // Override getClockType method
    string getClockType() {
        return "Wall Clock";
    }
};

int main() {
    // Create two objects of WallClock class 
    WallClock clock1(12.0, 34, 50);  // Set time for clock1
    WallClock clock2(30.0); // clock face circumference is 30 inches (time remains default)

    cout << "Clock 1: " << clock1.getTime() << " - " << " with circumference " << clock1.getCircumference() << " inches" << endl;
    cout << "Clock 2: " << clock2.getTime() << " - " << clock2.getClockType() << " with circumference " << clock2.getCircumference() << " inches" << endl;

     cout << "\nName: Oshin Pant Roll NO:23 Lab_no:5.4";
    fflush(stdin);
    cin.get();
    return 0;
}