/*  NAME: Nicole Mutia
    DATE: Nov. 14, 2018
    PURPOSE: to determine if the entered number is a prime number or not
*/

#include <iostream>

using namespace std;

// Function prototypes
void mainMenu();
void primeOrNot(int);
bool doesTheUserWantToContinue = true;

//  Main function
int userInput;
int main()
{
// Greet User
    cout << "Hello! I can determine if a number is prime or not :) " << endl;
    mainMenu();
    return 0;
}
void mainMenu()
{
    do
    {
        cout << "\n\nPlease choose an option from the menu below: " << endl;
        cout << "> Enter a number: \n\n";
        cout << "> Press any key if you want to exit \n" << endl;
        cout << "-> ";
        cin >> userInput; // Get the user's choice

        // Check if mainMenuChoice is an integer
        if (userInput)
        {
            // Compute the integer if it's a prime number or not
            primeOrNot(userInput);
        }
        else
        {
            // User did not enter an integer, so prevent from looping again
            doesTheUserWantToContinue = false;
        }
    }
    while(doesTheUserWantToContinue);
}
void primeOrNot(int i)
{
bool isTheNumberPrime = true;
    // To deteremine the range you have to divide to the user input
    int divisor,endRange;
    // while (tryNumber < endRange)
    endRange = i - 1;
    for (divisor = 2; divisor <= endRange; ++divisor)
    {
        // Get the remainder from 2 to (n-1)
        int remainder = i % divisor;
        // remainder = userInput % endRange;
        if (remainder == 0)
        {
           // cout << "The number you entered is not a prime number" << endl;
            isTheNumberPrime = false;
        }
        else
        {
            // cout << "The number you entered is a prime number" << endl;
        }
    }
    if (isTheNumberPrime == false)
    {
        cout << "The number you entered is not a prime number" << endl;
    }
    else
    {
        cout << "The number you entered is a prime number" << endl;
    }
}
