// This program finds and prints all perfect numbers from 1 to a user-entered positive integer.
#include <iostream>
#include <string>

using namespace std;

// Function to read a positive number from the user
int readPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0); // Continue until a positive number is entered
    return number;
}

// Function to check if a number is perfect
bool isPerfectNumber(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
            sum += i; // Sum all divisors of the number
    }
    return number == sum; // If the sum of divisors equals the number, it's perfect
}

// Function to print all perfect numbers from 1 to the given number
void PrintPerfectNumbersFrom1ToN(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (isPerfectNumber(i))
        {
            cout << i << endl; // Print perfect numbers in the range
        }
    }
}

int main()
{
    // Prompt the user for a positive number and print perfect numbers up to that number
    PrintPerfectNumbersFrom1ToN(readPositiveNumber("Please enter a positive number: "));
    return 0;
}
