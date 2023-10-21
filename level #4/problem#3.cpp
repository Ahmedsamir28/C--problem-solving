#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enNumberType {odd = 1 , even =2};

int readNumber(){
    int number;
    cout << "please enter the number : " << endl;
    cin >> number;
    return number;
}

enNumberType checkNumberType (int num){
    int result = num % 2 ;
    if (result == 0)
    {
        return enNumberType::even;
    }else {
        return enNumberType::odd;
    }
}

void printResult(enNumberType numberType){
    if (numberType == enNumberType::even)
    {
        cout << "\nthe number is : even" << endl;
    }else{
        cout << "\nthe number is : odd" << endl;
    }
    
}
int main(){
    printResult(checkNumberType(readNumber()));
    return 0;
}
