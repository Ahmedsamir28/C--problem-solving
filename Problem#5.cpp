// This program reads a positive number from the user and prints its digits one by one.
#include <iostream>
#include <string>

using namespace std;

// Function to read a positive number from the user
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0); // Continue until a positive number is entered
    return Number;
}

// Function to print the digits of a number
void PrintDigits(int Number)
{
    int Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10; // Get the last digit of the number
        Number = Number / 10; // Remove the last digit from the number
        cout << Remainder << endl; // Print the last digit
    }
}

int main()
{
    // Prompt the user for a positive number and print its digits
    PrintDigits(ReadPositiveNumber("Please enter a positive number: "));
    return 0;
}

// another road by string used

// string readNumber(string message){
//     string number = "";
//     do
//     {
//         cout << message << "\n";
//         cin >> number ; 
//     } while (stoll(number) < 0);
//     return number;
// }

// void printDigit(string number){
//     int length =number.length();
//     for (int i = 0; i <= length ; length--)
//     {
//         cout << number[length-1] <<"\n";
//     }
    
// }


// int main(){
//     printDigit(readNumber("Enter positive number : "));
//     return 0;
// }

