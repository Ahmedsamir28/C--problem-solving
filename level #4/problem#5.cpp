#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stInfo{
    int age ;
    bool driverLicenses;
    bool recommendation;
};

stInfo readInfo(){
    stInfo info;
    cout << "please enter your age :  " <<endl;
    cin >> info.age;
    cout << "do you have driverLicenses :" <<endl;
    cin >> info.driverLicenses;
    cout << "do you have  :" <<endl;
    cin >> info.recommendation;
    return info; 
    }

bool isAccepted(stInfo info){
    if (info.recommendation)
    {
        return true;
    }else{
        (info.age > 21 && info.driverLicenses && info.recommendation);
    }
    
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
