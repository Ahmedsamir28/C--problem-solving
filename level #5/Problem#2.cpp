// Check if a given number is prime or not.
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrimeNoPrime
{
    prime = 1,
    notPrime = 2
};

/**
 * Read a positive number from the user.*
* @param message the message to display to the user
 *
 * @return the positive number entered by the user
 *
 * @throws None
 */
int readPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

/**
 * Check if a given number is prime or not.
 *
 * @param number the number to be checked
 *
 * @return enPrimeNoPrime::notPrime if the number is not prime,
 *         enPrimeNoPrime::prime if the number is prime
 *
 * @throws None
 */
enPrimeNoPrime checkPrime(int number)
{
    int m = round(number / 2);
    for (int counter = 2; counter <= m; counter++)
    {
        if (number % counter == 0)
        {
            return enPrimeNoPrime::notPrime;
        }
    }
    return enPrimeNoPrime::prime;
}

/**
 * Prints all prime numbers from 1 to the given number.
 *
 * @param number the upper limit of the range
 *
 * @return void
 *
 * @throws None
 */
void printPrimeNumbersFromToN(int number)
{
    cout << "\n";
    cout << "prime Number form " << 1 << " to " << number << endl;
    cout << "are: " << endl;
    for (int i = 1; i <= number; i++)
    {
        if (checkPrime(i) == enPrimeNoPrime::prime)
        {
            cout << i << endl;
        }
    }
}

/**
 * Generates a function comment for the given function body in a markdown code block with the correct language syntax.
 *
 * @return The function comment in markdown format.
 *
 * @throws Exception If there is an error generating the function comment.
 */
int main()
{
    printPrimeNumbersFromToN(readPositiveNumber("please enter a positive number ?"));
    return 0;
}
