/*Write a program that converts data members feet and inch to object of
distance class.*/
#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    // Constructor to initialize distance with feet and inches
    Distance(int f, float i)
    {
        feet = f;
        inches = i;
    }

    // Method to convert feet and inches to meters
    float getMeters()
    {
        return (feet + inches / 12) * 0.3048; // 1 foot = 0.3048 meters
    }
};

int main()
{
    int feet;
    float inches;

    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;

    // Create a Distance object with the entered values
    Distance distance(feet, inches);

    // Get and print the distance in meters
    cout << "Distance in meters: " << distance.getMeters() << endl;

     cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:4.11";
    fflush(stdin);
    cin.get();
    return 0;
}