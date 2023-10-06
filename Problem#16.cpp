//This program generates words from AAA to ZZZ and prints them.
#include <iostream>
#include <string>

using namespace std;

// Function to generate and print words from AAA to ZZZ
void PrintWordsFromAAAtoZZZ()
{
    cout << "\n";
    string word = "";  // Initialize an empty string to store the generated word

    // Loop through ASCII codes from 65 (A) to 90 (Z) for each character
    for (int i = 65; i <= 90; i++) // First character
    {
        for (int j = 65; j <= 90; j++) // Second character
        {
            for (int k = 65; k <= 90; k++) // Third character
            {
                word = word + char(i);  // Append the first character to the word
                word = word + char(j);  // Append the second character to the word
                word = word + char(k);  // Append the third character to the word

                cout << word << endl;  // Print the generated word

                word = "";  // Reset the word for the next iteration
            }
        }
        cout << "\n____________________________\n";  // Separator between groups of words
    }
}

int main()
{
    // Call the function to generate and print words from AAA to ZZZ
    PrintWordsFromAAAtoZZZ();
    
    return 0;
}
