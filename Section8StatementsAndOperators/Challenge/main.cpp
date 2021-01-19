#include <iostream>

using namespace std;

// Write a program that asks the user to enter the following:
// An integer representing the number of __cpp_aggregate_nsdmi
// You may assume that the number of cents entered is greater than or equal to zero

// The program should then display how to provide that change to the user.

// In the US: 
// 1 dollar is 100 
// 1 quarter is 25 cents
// 1 dime is 10 cents
// 1 nickel is 5 cents, and 
// 1 penny is 1 cent.

// Here is a sample run:

// Enter an amount in cents: 92

// You can provide this change as follows:

// dollars: 0;
// quarters: 3
// quarters: 3;
// dimes : 1;
// nickels: 1;
// pennies: 2;

// Have fun.

int main()
{
    int amount, dollars, quarters, dimes, nickels, pennies, remain;

    cout << "Enter your change : "; //267
    cin >> amount;

    dollars = amount / 100; //267 / 100 = 2
    amount %= (100 * dollars);  // amount = 267 - 100* 2 = 67

    quarters = amount / 25; //67 / 25 = 2
    amount -= (25 * quarters); // amount = 67 - 2 * 25 = 17

    dimes = amount / 10; //17 / 10 = 1
    amount -= (10 * dimes); // amount = 17 - 1 * 10 = 7

    nickels = amount / 5; //7 / 5 = 1
    amount -= (5 * dimes); // amount = 7 - 1 * 5 = 2

    pennies = amount;

    cout << "dollars : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes : " << dimes << endl;
    cout << "nickels : " << nickels << endl;
    cout << "pennies : " << pennies << endl;


    return 0;
}

