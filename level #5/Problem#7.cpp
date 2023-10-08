
// This program reads a positive integer from the user and calculates its reverse.
// It then displays the reversed number to the user.

#include <iostream>
#include <string>

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
int reverseNumber(int Number)
{
    int Remainder = 0, ReversedNumber = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;  // Get the last digit of 'Number'
        Number /= 10;  // Remove the last digit from 'Number'
        ReversedNumber = ReversedNumber * 10 + Remainder;  // Append the last digit to the 'ReversedNumber'
    }
    return ReversedNumber;
}

int main()
{
    // Prompt the user to enter a positive number and reverse its digits
    cout << "Reversed number is:\n" << reverseNumber(ReadPositiveNumber("Please enter a positive number: ")) << endl;
    return 0;
}
