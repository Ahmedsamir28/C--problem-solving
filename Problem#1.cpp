// Program for multiplication tables from 1 to 10
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Prints the table header for the multiplication table
void printTableHeader()
{
    cout << "\n\n\t\t\t Multiplication Table From 1 to 10\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n-----------------------------------------------------------------------------------\n" << endl;
}

// Returns the column separator for the multiplication table
string columnSeparator(int i)
{
    if (i < 10)
    {
        return "|";
    }
    else
    {
        return "|";
    }
}

// Prints the multiplication table from 1 to 10
void printMultiplicationTable()
{
    printTableHeader();
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " " << columnSeparator(i) << "\t";
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}

int main()
{
    printMultiplicationTable();
    return 0;
}
