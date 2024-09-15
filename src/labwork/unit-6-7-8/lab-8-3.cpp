#include <iostream>//8.3
#include <fstream>
using namespace std;
int main(){
    ofstream fo;
    char c;
    fo.open("D:\\file-handling\\BinaryIO.txt");
    cout<<"Enter some characters in to the file, (enter E once you are done)\n\n\n";
    while(fo){
        cin>>c;
        if(c=='E'){
            break;//press 0 to exit
        }
        fo<<c<<endl;

    }
    fo.close();
    cout<<"\n\n\nHere's what written in the file :\n\n";

    ifstream fi;
    fi.open("D:\\file-handling\\BinaryIO.txt");
    while(fi>>c){
        cout<<c<<endl;
    }
    fi.close();
     cout << "\nName: Oshin Pant Roll NO:23 Lab_no:8.3";
    fflush(stdin);
    cin.get();


}