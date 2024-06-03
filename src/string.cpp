#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s1="hello";
    string s2="world";
    cout << "the 1st character is "<< s1.at(0)<<endl;  // First character
    cout<<"the length is "<<s1.size()<<endl;//length of s1
    cout<<"concatenation" <<s1.append(s2)<<endl;//concatenates s1 and s2
    //using replace() function
    cout<< s1.replace(0,3,s2)<<endl;
    //using insert() function
    cout<<s1.insert(4,s2)<<endl;
    //using erase() fucntion
    s1.erase();
    //to check if its empty
    cout<<s1.empty()<<endl;
    fflush(stdin);
    cin.get();

    return 0;

}