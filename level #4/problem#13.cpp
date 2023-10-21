#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void readNumber(int& num1 , int& num2 , int& num3){
    cout << "please enter number 1 :"<<endl ;
    cin >> num1;
    cout << "\nplease enter number 2 :"<<endl ;
    cin >> num2;
    cout << "\nplease enter number 3 :"<<endl ;
    cin >> num3;
}

int maxOf2Numbers(int num1  , int num2 , int num3){
    if (num1 > num2)
        if (num1 > num3)
            return num1;
        else
            return num3;
    else 
        if (num2 > num3)
            return num2;
        else
            return num3;;
    }

void printResult(int max){
    cout << "\nthe maximum number is : " << max << endl;
}

int main(){
    int num1 ,num2 , num3;
    readNumber(num1,num2,num3);
    printResult (maxOf2Numbers(num1,num2,num3));
    return 0; 
}
