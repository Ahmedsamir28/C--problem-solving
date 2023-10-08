//This program calculates the frequency of a specific digit in a positive integer entered by the user.
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

// Function to count the frequency of a specific digit in a number
int CountDigitFrequency(int DigitToCheck, int Number)
{
    int FreqCount = 0, Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;  // Get the last digit of 'Number'
        Number = Number / 10;  // Remove the last digit from 'Number'
        if (DigitToCheck == Remainder)  // Check if the last digit matches the 'DigitToCheck'
        {
            FreqCount++;  // Increment the frequency count
        }
    }
    return FreqCount;
}

int main()
{
    // Prompt the user to enter the main number
    int Number = ReadPositiveNumber("Please enter the main number: "); 

    // Prompt the user to enter one digit to check
    short DigitToCheck = ReadPositiveNumber("Please enter one digit to check: "); 

    // Calculate and display the frequency of the specified digit
    cout << "\nDigit " << DigitToCheck << " Frequency is " << CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n"; 

    return 0;
}
