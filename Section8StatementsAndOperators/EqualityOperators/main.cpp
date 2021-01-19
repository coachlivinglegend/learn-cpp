#include <iostream>
using namespace std;

int main() {

    bool equal_result {false};
    bool not_equal_result {false};

    int num1{}, num2{};

    cout << boolalpha; //we use this ti change the namespace from outputting 1 and 0 and instead, true or false.

    cout << "Enter two integers seperated by a space: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);

    cout << "Comparison result (equals) : " << equal_result <<endl;
    cout << "Comparison result (not equals) : " << not_equal_result <<endl;



    // bool equal_result;
    // bool not_equal_result;

    // int num1, num2;

    // cout << boolalpha; //we use this ti change the namespace from outputting 1 and 0 and instead, true or false.

    // cout << "Enter two integers seperated by a space: ";
    // cin >> num1 >> num2;
    // equal_result = num1 == num2;
    // not_equal_result = num1 != num2;

    // cout << "Comparison result (equals) : " << equal_result <<endl;
    // cout << "Comparison result (not equals) : " << not_equal_result <<endl;


    char char1, char2;
    cout << "Enter two characters seperated by a space: ";
    cin >> char1 >> char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);

    cout << "Comparison result (equals) : " << equal_result <<endl;
    cout << "Comparison result (not equals) : " << not_equal_result <<endl;

    long double double1; long double double2;
    cout << "Enter two doubles seperated by a space: ";
    cin >> double1 >> double2;
    equal_result = (double1 == double2);
    not_equal_result = (double1 != double2);

    cout << "Comparison result (equals) : " << equal_result <<endl;
    cout << "Comparison result (not equals) : " << not_equal_result <<endl;


    cout << "Enter an integer and a double seperated by a space: ";
    cin >> num1 >> double1;
    equal_result = (num1 == double1);
    not_equal_result = (num1 == double1);
    cout << "Comparison result (equals) : " << equal_result << endl;
    cout << "Comparison result (not equals) : " << not_equal_result << endl;


    return 0;
}