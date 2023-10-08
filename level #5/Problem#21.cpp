//This program generates random keys consisting of capital letters in a specified format.
#include <iostream>
#include <string>

using namespace std;

// Enumeration to represent character types
enum enCharType
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

// Function to generate a random number within a specified range
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

// Function to get a random character of a specific type
char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
        case enCharType::SmallLetter:
            return char(RandomNumber(97, 122));  // ASCII codes for small letters (a to z)

        case enCharType::CapitalLetter:
            return char(RandomNumber(65, 90));   // ASCII codes for capital letters (A to Z)

        case enCharType::SpecialCharacter:
            return char(RandomNumber(33, 47));   // ASCII codes for special characters (! to /)

        case enCharType::Digit:
            return char(RandomNumber(48, 57));   // ASCII codes for digits (0 to 9)
    }
}

// Function to read a positive number from the user
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

// Function to generate a random word of a specified length and character type
string GenerateWord(enCharType CharType, short Length)
{
    string Word;
    for (int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandomCharacter(CharType);
    }
    return Word;
}

// Function to generate a random key in the specified format
string GenerateKey()
{
    string Key = "";

    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

    return Key;
}

// Function to generate a specified number of keys
void GenerateKeys(short NumberOfKeys)
{
    for (int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [" << i << "] : ";
        cout << GenerateKey() << endl;
    }
}

int main()
{
    // Seed the random number generator with the current time
    srand((unsigned)time(NULL));

    // Generate and print a specified number of keys
    GenerateKeys(ReadPositiveNumber("Please enter how many keys to generate?"));

    return 0;
}
