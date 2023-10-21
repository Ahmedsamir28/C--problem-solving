#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int readNumber(string message){
    int number;
    do
    {
        cout <<   message << endl;
        cin >> number ;
    } while (number <=0);
    return number ;
}

float halfNumber(int num ){
    return float(num) /2;
}

void printResult(int num ){
    string  result ="half of " + to_string(num) + " is " + to_string(halfNumber(num)) ;
    cout << endl << result << endl;
}

int main(){
    printResult (readNumber("please enter your number : "));
}
