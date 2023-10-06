//This program reads a positive integer from the user and generates an inverted letter pattern.
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

// Function to print an inverted letter pattern
void PrintInvertedLetterPattern(int Number)
{
    cout << "\n";
    for (int i = 65 + Number - 1; i >= 65; i--)  // ASCII code for 'A' is 65
    {
        for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
        {
            cout << char(i);  // Convert ASCII code to a character and print it
        }
        cout << "\n";  // Move to the next line after printing the pattern for a letter
    }
}

int main()
{
    // Prompt the user to enter a positive number and print the inverted letter pattern
    PrintInvertedLetterPattern(ReadPositiveNumber("Please enter a positive number: "));
    
    return 0;
}
