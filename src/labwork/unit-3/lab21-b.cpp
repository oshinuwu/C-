#include <iostream>
using namespace std;
class rectangle{
    private:
    double length;
    double width;
    public:
    rectangle(double a, double b){
        length = a;
        width = b;
    }
    double getlength(){return length;}
    double getwidth(){return width;}
    };
    int main(){
        rectangle rec(3.6,6.9);
        cout<<"Length of the rectangle : "<<rec.getlength()<<endl;
        cout<<"Width of the rectangle : "<<rec.getwidth();

    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-a";
    fflush(stdin);
    cin.get();
        return 0;
    }
