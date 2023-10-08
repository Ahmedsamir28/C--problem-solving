//This program reads a positive integer from the user and generates a number pattern.
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

// Function to print a number pattern
void PrintNumberPattern(int Number)
{
    cout << "\n";
    for (int i = 1; i <= Number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;  // Print the value of 'i' on the same line 'i' times
        }
        cout << "\n";  // Move to the next line after printing 'i' times
    }
}

int main()
{
    // Prompt the user to enter a positive number and print the number pattern
    PrintNumberPattern(ReadPositiveNumber("Please enter a positive number: "));
    
    return 0;
}
