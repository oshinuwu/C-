#include <iostream>//8.2
#include <fstream>
#include <string>
using namespace std;
int main(){
    ofstream fo;
    char a;
    fo.open("D:\\file-handling\\characterIO.txt");
    cout<<"Enter characters : (enter 0 once you are done)\n\n\n";
    while(fo){
        cin>>a;
        if(a=='0'){
            break;//press 0 to exit
        }
        fo<<a<<endl;

    }
    fo.close();
    cout<<"\n\n\nHere's what written in the file :\n\n";

    ifstream fi;
    fi.open("D:\\file-handling\\characterIO.txt");
    while(fi>>a){
        cout<<a<<endl;
    }
    fi.close();
     cout << "\nName: Oshin Pant Roll NO:23 Lab_no:8.2";
    fflush(stdin);
    cin.get();


}