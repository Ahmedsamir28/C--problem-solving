//This program allows the user to enter a 3-letter password and then attempts to guess the password using a brute-force approach.
#include <iostream>
#include <string>

using namespace std;

// Function to read a 3-letter password from the user
string ReadPassword()
{
    string Password;
    cout << "Please enter a 3-Letter Password (all capital): \n";
    cin >> Password;
    return Password;
}

// Function to guess the password using brute-force
bool GuessPassword(string OriginalPassword)
{
    string word = "";
    int Counter = 0;
    cout << "\n";

    // Loop through all combinations of 3 capital letters (AAA to ZZZ)
    for (int i = 65; i <= 90; i++)  // First character
    {
        for (int j = 65; j <= 90; j++)  // Second character
        {
            for (int k = 65; k <= 90; k++)  // Third character
            {
                word = word + char(i);  // Append the first character to the word
                word = word + char(j);  // Append the second character to the word
                word = word + char(k);  // Append the third character to the word

                Counter++;  // Increment the trial counter
                cout << "Trial [" << Counter << "] : " << word << endl;

                if (word == OriginalPassword)  // Check if the generated word matches the original password
                {
                    cout << "\nPassword is " << word << "\n";
                    cout << "Found after " << Counter << " Trial(s)\n";
                    return true;  // Password found
                }

                word = "";  // Reset the word for the next iteration
            }
        }
    }

    return false;  // Password not found
}

int main()
{
    // Call the function to guess the password using brute-force
    GuessPassword(ReadPassword());

    return 0;
}
