#include <iostream>
#include <string>
#include <cmath>
using namespace std;


void readNumber(int& num1 , int& num2 , int& num3){
    cout << "please enter the first number"<<endl ;
    cin >> num1;
    cout << "\nplease enter the second number"<<endl ;
    cin >> num2;
    cout << "\nplease enter the third number"<<endl;
    cin >> num3;
}

int sum3Numbers(int num1 , int num2 ,int num3){
    int sum = num1 + num2 + num3;
    return sum;
}

void printResult(int total){
    cout << "\nsum of three numbers is  : " << total<< endl;
}

int main(){
    int num1,num2,num3;
    readNumber(num1 , num2 ,num3);
    printResult (sum3Numbers(num1 , num2 ,num3));
    return 0; 

}
