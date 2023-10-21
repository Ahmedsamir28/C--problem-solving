#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stInfo{
    int age ;
    bool driverLicenses;
};

stInfo readInfo(){
    stInfo info;
    cout << "please enter your age :  " <<endl;
    cin >> info.age;
    cout << "do you have driverLicenses :" <<endl;
    cin >> info.driverLicenses;
    return info; 
    }

bool isAccepted(stInfo info){
    return (info.age > 21 && info.driverLicenses );
};

void printResult(stInfo info){
    if (isAccepted(info))
    {
        cout << "\nhired" << endl; 
    }else{
        cout << "\nrejected" <<endl;
    }
    
}
int main(){
    printResult(readInfo());
    return 0;
}
