#include <iostream> //4.8
#include <ctime>
using namespace std;
class Time
{
    int hour;
    int minute;

public:
    Time(int hour, int minute) : hour(hour), minute(minute) {};
    Time operator+(const Time &t)
    {
        return Time((hour + t.hour) % 24, (minute + t.minute) % 60);
    }
    void clock()
    {
        cout << "\n\nYou will leave at " << hour << ":" << minute << " ";
    }
};
int main()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int min;
    cout << "its " << ltm->tm_hour << ":" << ltm->tm_min << " right now. How many minutes will you stay here?" << endl;
    cin >> min;
    int hour1 = ltm->tm_hour, min1 = ltm->tm_min, hour2 = (min + min1) / 60, min2 = min;

    Time t1(hour1, min1), t2(hour2, min2);

    Time final = t1 + t2;
    final.clock();

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:4.8";
    fflush(stdin);
    cin.get();
}