#include <iostream>//4.1
#include<cmath>
using namespace std;

class Point{
    int x;
    int y;
    public:
    Point(int x, int y): x(x), y(y){};
    double operator --(){
        
        int x2=1,y2=2;//lets suppose the other point is (1,2)
    
        return (sqrt((x2-x)*(x2-x) + (y2-y)*(y2-y)));
    }
};
int main()
{
    Point p(3,4);

    double d = --p;

    cout << "The distance between point (3,4) and point(1,2) is " << d << " units.";

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:4.1";
    fflush(stdin);
    cin.get();
}