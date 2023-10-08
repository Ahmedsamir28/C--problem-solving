//This program reads a positive integer from the user, reverses it, and then prints its digits.
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Function to read a positive number from the user
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;  // Prompt the user to enter a number
        cin >> Number;  // Read the user's input into the 'Number' variable
    } while (Number <= 0);  // Repeat until a positive number is entered
    return Number;
}

// Function to reverse the digits of a number
int ReverseNumber(int Number)
{
    int Remainder = 0, ReversedNumber = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;  // Get the last digit of 'Number'
        Number = Number / 10;  // Remove the last digit from 'Number'
        ReversedNumber = ReversedNumber * 10 + Remainder;  // Append the last digit to the 'ReversedNumber'
    }
    return ReversedNumber;
}

// Function to print the digits of a number
void PrintDigits(int Number)
{
    int Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;  // Get the last digit of 'Number'
        Number = Number / 10;  // Remove the last digit from 'Number'
        cout << Remainder << endl;  // Print the last digit
    }
}

int main()
{
    // Prompt the user to enter a positive number, reverse it, and print its digits
    PrintDigits(ReverseNumber(ReadPositiveNumber("Please enter a positive number: ")));
    
    return 0;
}
