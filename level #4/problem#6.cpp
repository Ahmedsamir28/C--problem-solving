#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct  stFullName
{
    string firstName;
    string lastName;
};

stFullName readName(){
    stFullName fullName;
    cout << "\nplease enter your first name : " << endl;
    cin >> fullName.firstName;
    cout << "\nplease enter your last name : " << endl;
    cin >> fullName.lastName;
    return fullName;
}

void printFullName(stFullName name){
    cout << "\nyour name is : " << name.firstName << " " << name.lastName << endl;
}
int main(){
    printFullName(readName());
    return 0;
}
