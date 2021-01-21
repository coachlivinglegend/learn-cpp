#include <iostream>
using namespace std;
// #include <string>
 
 
int main () {
    
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};
    string s6 {s1, 0, 3};
    string s7 (10, 'X');
 
    string full_name;
    cout << "Enter your full name: ";
    getline(cin, full_name);

    cout << "Your full name is: " << full_name << endl;


    // cout << s0 << s1 << s2 << s3 << s4 << s5 << s6 << s7 << endl;
return 0; 
}