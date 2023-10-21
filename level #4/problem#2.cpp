#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string readName(){
    string name;
    cout << "enter your name : " << endl;
    getline(cin , name);
    return name;
}

void printName(string name){
    cout << "\nyour name is : " << name <<"\n"; 
}

int main(){
    printName(readName());
    return 0;
}
