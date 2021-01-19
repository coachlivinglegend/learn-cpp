#include <iostream>
using namespace std;
int main() {
    int number, a = 0;
    cout << "Enter a Number: ";
    cin >> number;
    for (number!= 0; {
        a = a * 10;
        a = a + number % 10;
    }
    cout <<"The solution is:" << a << endl;
    return 0;
}