#include <iostream>//8.4
#include <fstream>
#include <string>
using namespace std;
int main(){
    ofstream fo;
    ifstream fi;
    string s;
    fi.open("D:\\file-handling\\characterIO.txt");
    fo.open("D:\\file-handling\\newfile.txt");
    while(fi>>s){
        fo<<s<<endl;

    }
    
}