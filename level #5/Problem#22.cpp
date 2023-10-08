//This program allows the user to input an array of integers and a number. It then counts how many times the given number appears in the array.
#include <iostream>
using namespace std;

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

// Function to read an array of integers and its length
void ReadArray(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    cout << "\nEnter array elements: \n";

    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
    cout << endl;
}

// Function to print an array
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

// Function to count how many times a number appears in an array
int TimesRepeated(int Number, int arr[100], int arrLength)
{
    int count = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (Number == arr[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[100], arrLength, NumberToCheck;

    // Read the array from the user
    ReadArray(arr, arrLength);

    // Read the number to check for repetitions
    NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");

    // Display the original array
    cout << "\nOriginal array: ";
    PrintArray(arr, arrLength);

    // Count and display the number of times the given number appears in the array
    cout << "\nNumber " << NumberToCheck << " is repeated ";
    cout << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";

    return 0;
}
