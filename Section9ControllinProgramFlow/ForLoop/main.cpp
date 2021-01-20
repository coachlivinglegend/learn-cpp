#include <iostream>
#include <vector>
using namespace std;
 
 
int main () {
    
    for (int i = 1; i < 11; i++ ) {
        cout << i << " ";
    }
    
    cout <<endl;

    for (int i(1); i < 11; i+=2 ) {
        cout << i << " ";
    }
    
    cout <<endl;

    for (int i = 10; i > 0; i-- ) {
        cout << i << " ";
    }
    
    cout <<endl;
 
    for (int i = 10; i <= 100; i+=10) {
        cout << i << " ";
    }
    
    cout <<endl;

    for (int i = 1, j = 10; i <= 10; i++, --j)
    {
        cout << i << " + " << j << " = " << i + j << endl;
    }
    
    for (int i = 1; i <= 100; i++) {
        if (i % 10 == 0) {
            cout << i << endl;
        } else {
            cout << i << " ";
        }
    }

    for (int i = 1; i <= 100; i++) {
        !(i % 10 == 0) ? cout << i << " " : cout << i << endl;
    }

    vector <int> nums {10, 20, 30, 40, 50};
    for (unsigned int i = 0; i < nums.size(); i++) {
        cout << nums.at(i) << endl;
        cout << nums[i] << endl;
    }
 
return 0;
}