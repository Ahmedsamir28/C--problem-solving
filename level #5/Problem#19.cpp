//This program generates and prints random numbers within a specified range.
#include <iostream>
#include <cstdlib>  // Include the C standard library for random number generation

using namespace std;

// Function to generate a random number within a specified range
int RandomNumber(int From, int To)
{
    // Generate a random number within the range [From, To]
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int main()
{
    // Seed the random number generator with the current time
    srand((unsigned)time(NULL));

    // Generate and print three random numbers within the range [1, 10]
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;

    return 0;
}
