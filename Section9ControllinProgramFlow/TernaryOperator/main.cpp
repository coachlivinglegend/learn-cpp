#include <iostream>
using namespace std;
 
 
int main () {
    int num {};

    cout << "Enter an integer: ";
    cin >> num;

    num % 2 == 0 ? cout << "Even Number" : cout << "Odd number" << endl;;    

    int num1, num2;
    cout << "Enter two integers, sperated by a space: ";
    cin >> num1 >> num2;

    if (num1 != num2) {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << " Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    } else {
        cout << num1 << " = " << num2 << endl;
    }

    return 0;
}