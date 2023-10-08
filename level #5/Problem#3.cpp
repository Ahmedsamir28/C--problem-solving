// This program checks if a user-entered positive integer is a perfect number or not.

#include <iostream>
#include <string>

using namespace std;

// Function to read a positive number from the user
int readPerfectNumber(string message)
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

// Function to print the result
void printResult(int number)
{
    if (isPerfectNumber(number))
    {
        cout << number << " is a perfect number" << endl;
    }
    else
    {
        cout << number << " is not a perfect number" << endl;
    }
}

int main()
{
    // Prompt the user for a positive number and print the result
    printResult(readPerfectNumber("Please enter a positive number: "));
    return 0;
}
