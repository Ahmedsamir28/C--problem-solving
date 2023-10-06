//This program allows the user to enter text, encrypts it using a simple encryption key, and then decrypts it.
#include <iostream>
#include <string>

using namespace std;

// Function to read text from the user
string ReadText()
{
    string Text;
    cout << "Please enter Text: \n";
    getline(cin, Text);  // Read a line of text, including spaces
    return Text;
}

// Function to encrypt text using a given encryption key
string EncryptText(string Text, short EncryptionKey)
{
    for (int i = 0; i < Text.length(); i++)  // Loop through each character in the text
    {
        Text[i] = char(int(Text[i]) + EncryptionKey);  // Add the encryption key to the ASCII value of the character
    }
    return Text;
}

// Function to decrypt text using a given encryption key
string DecryptText(string Text, short EncryptionKey)
{
    for (int i = 0; i < Text.length(); i++)  // Loop through each character in the text
    {
        Text[i] = char(int(Text[i]) - EncryptionKey);  // Subtract the encryption key from the ASCII value of the character
    }
    return Text;
}

int main()
{
    const short EncryptionKey = 2;  // Set the encryption key (you can change this value)
    string TextAfterEncryption, TextAfterDecryption;
    string Text = ReadText();

    // Encrypt the text and then decrypt it
    TextAfterEncryption = EncryptText(Text, EncryptionKey);
    TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

    cout << "\nText Before Encryption : ";
    cout << Text << endl;
    cout << "Text After Encryption : ";
    cout << TextAfterEncryption << endl;
    cout << "Text After Decryption : ";
    cout << TextAfterDecryption << endl;

    return 0;
}
