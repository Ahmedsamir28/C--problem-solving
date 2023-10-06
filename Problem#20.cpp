//This program generates and prints random characters of different types (small letters, capital letters, special characters, and digits).
#include <iostream>
#include <string>

using namespace std;

// Function to generate a random number within a specified range
int RandomNumber(int From, int To)
{
    // Generate a random number within the range [From, To]
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

// Enumeration to represent character types
enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

// Function to get a random character of a specific type
char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
        case enCharType::SmallLetter:
            return char(RandomNumber(97, 122)); // ASCII codes for small letters (a to z)
            break;

        case enCharType::CapitalLetter:
            return char(RandomNumber(65, 90)); // ASCII codes for capital letters (A to Z)
            break;

        case enCharType::SpecialCharacter:
            return char(RandomNumber(33, 47)); // ASCII codes for special characters (! to /)
            break;

        case enCharType::Digit:
            return char(RandomNumber(48, 57)); // ASCII codes for digits (0 to 9)
            break;
    }
}

int main()
{
    // Seed the random number generator with the current time
    srand((unsigned)time(NULL));

    // Generate and print random characters of different types
    cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
    cout << GetRandomCharacter(enCharType::Digit) << endl;

    return 0;
}
