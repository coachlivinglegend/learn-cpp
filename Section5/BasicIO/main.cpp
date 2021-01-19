#include <iostream>

using namespace std;

int main() {
    
    cout << "Hello World" << endl;
    
    cout << "Hello World \nThis is Daniel, Yeah? \n";
    
    
    int num1;
    int num2;
    double num3;
    
//    cout << "Enter an integer: ";
//    cin >> num1;
//    cout << "You entered: " << num1 << endl;
    
//    cout << "Enter the first integer: ";
//    cin >> num1;
//    cout << "Enter the second integer: ";
//    cin >> num2;
//    cout << "Your first integer is: " << num1 << " and your second integer is: " << num2 << endl ;
    
    cout << "Enter two integers seperated with a space: ";
    cin >> num1 >> num2;
    cout << "Your first integer is: " << num1 << " and your second integer is: " << num2 << endl ;
    
    cout << "Enter a double: ";
    cin >> num3;
    cout << "Here's your double: " << num3 << endl;

    return 0;
}