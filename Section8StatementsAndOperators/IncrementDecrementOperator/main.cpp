#include <iostream>
using namespace std;

/*
Increment operator ++
Decrement operator --

Increments or decrements its operands by 1
Can be used with integers, floating point types and pointers

prefix ++num
postfix num++

dont overuse this operator!
Never use it twice for the same variable in the same statement!!

*/

int main()
{

    int counter{10};
    int result{0};

    //Example 1 - simple increment
    cout << "Counter :" << counter << endl;

    counter = counter + 1;
    cout << "Counter : " << counter << endl;

    counter++;
    cout << "Counter : " << counter << endl;

    ++counter;
    cout << "Counter : " << counter << endl;

    cout << "============================================" << endl;

    //Example 2 - preincrement
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter; //note the pre icrement
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    cout << "============================================" << endl;

    //Example 3 - postincrement
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++; //note the post increment
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    cout << "============================================" << endl;

    //Example 4
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter + 10; //note the pre increment

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    cout << "============================================" << endl;

    //Example 5
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++ + 10; //note the pre increment

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    cout << "============================================" << endl;

// ++counter means increment before you use it while counter++ means increment after you're done with what i asked 

    return 0;
}