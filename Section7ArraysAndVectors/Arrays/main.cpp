#include <iostream>
using namespace std;

int main() {
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout <<"\nThe first vowel is: " << vowels[0] <<endl;
    cout << "The last is: " << vowels[4];
    
    //cin >> vowels[5] //out of bounds
    
    double hi_temps [] {98.1, 89.8, 77.5, 81.6};
    cout <<"\nThe first high temperature is: " << hi_temps[0] << endl;
    hi_temps[0] = 100.7;
    cout << "I didn't like that number so I changed it to " << hi_temps[0] << endl;

    int test_scores [5] ;
    
    cout << "\nFirst score at index 0: "<< test_scores[0] << endl;
    cout << "\nSecond score at index 1: "<< test_scores[1] << endl;
    cout << "\nThird score at index 2: "<< test_scores[2] << endl;
    cout << "\nFourth score at index 3: "<< test_scores[3] << endl;
    cout << "\nFifth score at index 4: "<< test_scores[4] << endl;
    cout << "=====================================================" <<endl;
    cout << "ooops, forgot to initialize" << endl;
    cout << "Why don't you help me?" << endl;
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    cout << "====================================================" <<endl;
    cout << "now see" <<endl; 
        cout << "\nFirst score at index 0: "<< test_scores[0] << endl;
    cout << "\nSecond score at index 1: "<< test_scores[1] << endl;
    cout << "\nThird score at index 2: "<< test_scores[2] << endl;
    cout << "\nFourth score at index 3: "<< test_scores[3] << endl;
    cout << "\nFifth score at index 4: "<< test_scores[4] << endl;
    
    cout << "\nNotice the name of my array" << test_scores << endl;
    cout << endl;


    return 0;
}