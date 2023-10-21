#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPassFail{pass = 1 , fail= 2 };

void readNumber(int& mark1 , int& mark2 , int& mark3){
    cout << "please enter the first number"<<endl ;
    cin >> mark1;
    cout << "\nplease enter the second number"<<endl ;
    cin >> mark2;
    cout << "\nplease enter the third number"<<endl;
    cin >> mark3;
}

int sum3Numbers(int mark1 , int mark2 ,int mark3){
    int mark = mark1 + mark2 + mark3;
    return mark;
}

float calculateAverage(int mark1 , int mark2 ,int mark3){
    float average = sum3Numbers(mark1 , mark2 , mark3) / 3;
    return average;
}

enPassFail checkAverage(int average){
    if (average >= 10)
    {
        return enPassFail::pass;
    }else {
        return enPassFail::fail;
    }
}
void printResult(int average){
    cout << "\naverage of three numbers is  : " << average<< endl;
    if (checkAverage(average) == enPassFail::pass)
    {
        cout << "\nyou passed" <<  endl;
    }else {
        cout << "\nyou faild" <<  endl;
    }
    
}

int main(){
    int mark1,mark2,mark3;
    readNumber(mark1 , mark2 , mark3);
    printResult (calculateAverage(mark1 , mark2 , mark3));
    return 0; 
}
