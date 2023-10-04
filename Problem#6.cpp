//This program calculates the sum of digits of a positive number entered by the user.
#include <iostream>
#include <string>

using namespace std;

// Function to read a positive number from the user
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;  // Display the message to the user
        cin >> Number;  // Read the user's input into the 'Number' variable
    } while (Number <= 0);  // Repeat until a positive number is entered
    return Number;
}

// Function to calculate the sum of digits of a number
int sumOfDigits(int Number)
{
    int Remainder = 0, sum = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;  // Get the last digit of 'Number'
        Number /= 10;  // Remove the last digit from 'Number'
        sum += Remainder;  // Add the last digit to the 'sum'
    }
    return sum;
}

int main()
{
    // Prompt the user to enter a positive number and calculate the sum of its digits
    cout << "Sum of digits:\n" << sumOfDigits(ReadPositiveNumber("Please enter a positive number: ")) << endl;
    return 0;
}
