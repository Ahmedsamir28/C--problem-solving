//This program calculates and prints the frequency of each digit (0-9) in a positive integer entered by the user.
#include <iostream>
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
int CountDigitFrequency(short DigitToCheck, int Number)
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

// Function to print the frequency of all digits (0-9) in a number
void PrintAllDigitsFrequency(int Number)
{
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        short DigitFrequency = 0;
        DigitFrequency = CountDigitFrequency(i, Number);
        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequency is "
                << DigitFrequency << " Time(s).\n";
        }
    }
}

int main()
{
    // Prompt the user to enter a number
    int Number = ReadPositiveNumber("Please enter a number: ");
    
    // Calculate and print the frequency of each digit in the number
    PrintAllDigitsFrequency(Number);
    
    return 0;
}
