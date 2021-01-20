// Section 9
// Shipping

// Shipping cost calculator

// Ask the user for package dimension in inches
// lenght, width, height - these should be integers
// All dimensions must be 10 inches or less or we cannot ship it

// Base cost $2.50
// If package volume is greater than 100 cubic inches there is a 10% surcharge
// if package volume is greater than 500 cubic inches there is a 25% surchage

#include <iostream>
using namespace std;
 
 
int main () {
    int length, width, height, volume;
    double cost;
    const double base_cost = 2.50;
    const double small_surcharge = 0.1;
    const double big_surcharge = 0.25;


//we can set fixed decimal places by ading #include <iomanip> at the top then before you use it add cout << fixed << setprecision(2);
    cout << "Enter the dimension for the package in inches, seperated by commas: ";
    cin >> length >> width >> height;

    if (length < 0 || length > 10 || width < 0 || width > 10 || height < 0 || height > 10 ) {
        cout << "Obviously, you're not ready for shipment.";
    } else {
        volume = length * width * height;

        if (volume >= 200) {
            cout << "doin1";
            cost = base_cost * (1 + big_surcharge);
        } else if (volume >= 100) {
            cout << "doin1";
            cost = base_cost * (1 + small_surcharge);
        } else {
            cost = base_cost;
        }

        cout << volume;
        cout << "Your cost is " << cost << endl;

    }
 
return 0;
}