//This program generates random numbers and fills an array with them. It then finds and displays the maximum number in the array.
#include <iostream>
using namespace std;

// Function to generate a random number within a specified range
int RandomNumber(int From, int To)
{
    // Generate a random number within the range [From, To]
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

// Function to fill an array with random numbers
void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    // Fill the array with random numbers between 1 and 100
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

// Function to print the elements of an array
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

// Function to find the maximum number in an array
int MaxNumberInArray(int arr[100], int arrLength)
{
    int Max = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max;
}

int main()
{
    // Seed the random number generator with the current time
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    // Fill the array with random numbers
    FillArrayWithRandomNumbers(arr, arrLength);

    // Display the elements of the array
    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    // Find and display the maximum number in the array
    cout << "\nMax Number is : ";
    cout << MaxNumberInArray(arr, arrLength) << endl;

    return 0;
}
