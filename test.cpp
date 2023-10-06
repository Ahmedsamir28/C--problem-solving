#include <iostream>
#include <string>

using namespace std;

int readNumber(string message){
int number ;
do
{
    cout<< message << endl;
    cin >> number ;
} while (number <= 0);
return number;
}

void printInvertedNumber(int number){
    cout <<"\n";
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i ;
        }
        cout << endl;
    }
    
}

int main(){
    printInvertedNumber((readNumber("enter the number")));
    return 0;
}