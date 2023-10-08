//This program reads a positive integer from the user, checks if it is a palindrome number, and provides the result.

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

// Function to check if a number is a palindrome
bool IsPalindromeNumber(int Number)
{
    return Number == ReverseNumber(Number);
}

int main()
{
    // Prompt the user to enter a positive number, check if it's a palindrome, and provide the result
    if (IsPalindromeNumber(ReadPositiveNumber("Please enter a positive number: ")))
    {
        cout << "\nYes, it is a Palindrome number.\n";
    }
    else
    {
        cout << "\nNo, it is NOT a Palindrome number.\n";
    }
    
    return 0;
}
