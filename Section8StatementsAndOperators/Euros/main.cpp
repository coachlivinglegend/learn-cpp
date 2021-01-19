//Convert EUR to USD
//1 Euro = 1.19 Dol
#include <iostream>
using namespace std;

int main () {

    const double usd_per_eur {1.19};

    cout << "Welcome to EUR to USD converter " << endl;
    cout << "Enter the value in EUR " <<endl;

    double euros {0.0};
    double dollars {0.0};

    cin >> euros;
    dollars = euros * usd_per_eur;

    cout << "Chicken change: " << dollars << endl;

    cout << endl;
    return 0;


}