#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void readNumber(int& num1 , int& num2){
    cout << "please enter number 1 :"<<endl ;
    cin >> num1;
    cout << "\nplease enter number 2 :"<<endl ;
    cin >> num2;
}

int maxOf2Numbers(int num1  , int num2){
    if (num1 > num2)
        return num1;
    else 
        return num2;
    }

void printResult(int max){
    cout << "\nthe maximum number is : " << max << endl;
}

int main(){
    int num1 ,num2;
    readNumber(num1,num2);
    printResult (maxOf2Numbers(num1,num2));
    return 0; 
}
