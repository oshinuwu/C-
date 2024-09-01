#include <iostream>//5.5
using namespace std;

class Shape{
    string name;
    string color;
    public:
    Shape(string n, string c):name(n), color(c){};
    void shape_info(){
        cout<<"\n\n\nThe shape is "<<name<<" and it is "<<color<<" in color. "
            <<endl;
    }
    
};
class Triangle : public Shape{
    double  base;
    double height;
    public:
    Triangle(string n, string c) : Shape(n,c){};
    void set_shape_info(){
        cout<<"Enter base in cm : ";
        cin>>base;
        cout<<"Enter height in cm : ";
        cin>>height;

    }
    
    void print_shape_info(){
        shape_info();
       
        cout<<"The triangle's base is "<<base<<" cm and its height is "<<height
            <<" cm which makes its area "<<(0.5)*base*height<<" sq. cm.";


    }


};

class Rectangle : public Shape{
    double length;
    double breadth;
    public:
    Rectangle(string n, string c): Shape(n,c){};
    void set_shape_info(){
        cout<<"Enter length in cm : ";
        cin>>length;
        cout<<"Enter width in cm : ";
        cin>>breadth;


    }
   
    void print_shape_info(){
        shape_info();
        
        cout<<"The rectangle base is "<<length<<" cm long and "<<breadth
            <<" cm wide which makes its area "<<length*breadth<<" sq. cm.";

    }


};
int main(){
    string name, color;
    cout<<"Enter name of the shape(we can find its area if its triangle or rectangle) : ";
    cin>>name;
    cout<<"Now enter its color : ";
    cin>>color;
    if(name =="triangle"||name=="Triangle"){
        Triangle s(name,color);
        s.set_shape_info();
        s.print_shape_info();

    }
    else if(name =="rectangle"||name=="Rectangle"){
        Rectangle s(name, color);
        s.set_shape_info();
        s.print_shape_info();

    }
    else{
        Shape s(name, color);
        s.shape_info();


    }

    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:5.5";
    fflush(stdin);
    cin.get();
}