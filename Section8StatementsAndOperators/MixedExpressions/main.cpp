#include <iostream>
using namespace std;

int main () {
    double total;
    int num1, num2, num3;
    const int count = 3;

    cout << "Enter 3 integers seperated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 +  num2 + num3;

    double average;

    average = total / static_cast<double>(count);
    average = total / (double)count;
    // average = total / count;

    //alternatively, we could just set the type of total to double initially

    cout << "The 3 numbers were: " << num1 << " , " << num2 << " and "  << num3 <<endl;
    cout << "The sum of the numbers is " << total << endl;
    cout << "The average is " << average << endl;
}