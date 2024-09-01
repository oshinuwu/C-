/*Write a program that converts object of another distance class with
data members feet and inch.(Assume 1m = 3.3 feet and 1cm = 0.4 inch).*/
#include <iostream>
#include <cmath>

using namespace std;

class Distance {
private:
    double meters;
    double centimeters;

public:
    Distance(double m = 0, double cm = 0) : meters(m), centimeters(cm) {}

    void display() {
        cout << meters << " meters and " << centimeters << " centimeters" << endl;
    }

    double getMeters() const { return meters; }
    double getCentimeters() const { return centimeters; }
};

class FeetInchDistance {
private:
    double feet;
    double inch;

public:
    FeetInchDistance() : feet(0), inch(0) {}

    FeetInchDistance(const Distance& d) {
        double totalInches = (d.getMeters() * 3.3 * 12) + (d.getCentimeters() * 0.4);
        feet = floor(totalInches / 12);
        inch = totalInches - (feet * 12);
    }

    void display() {
        cout << feet << " feet and " << inch << " inches" << endl;
    }
};

int main() {
    Distance d(5, 20); // 5 meters and 20 centimeters
    d.display();

    FeetInchDistance fid(d);
    fid.display();

    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:4.10";
    fflush(stdin);
    cin.get();
    
}

