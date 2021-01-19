#include <iostream>

using namespace std;

int main() {
    int num {};
    const int lower {10};
    const int upper {20};

    cout << boolalpha;

    //Determine if an entered integer is between two other integers
    //assume lower < upper

    cout << "Enter an integer - the bounds are " << lower  << " and  " << upper << " : ";
    cin >> num;

    bool within_bounds {false};

    within_bounds = (num > lower && num < upper);
    cout << num  << " is between " << lower << " and " << upper << " : " << within_bounds << endl;

    cout << "Enter an integer outside the bounds of " << lower  << " and  " << upper << " : ";
    cin >> num;

    bool out_of_bounds {false};

    out_of_bounds = (num < lower || num > upper);
    cout << num  << " is outside " << lower << " and " << upper << " : " << out_of_bounds << endl;


    cout << "Enter an integer on the bounds of " << lower  << " and  " << upper << " : ";
    cin >> num;

    bool on_bounds {false};

    on_bounds = (num == lower || num == upper);
    cout << num  << " is on " << lower << " and " << upper << " : " << on_bounds << endl;


    //Determine what to wear 
    bool wear_coat = false;
    double temperature;
    int wind_speed;

    const int wind_speed_for_coat { 25 };
    const double temmperature_for_coat = 45;

    cout << "\n Enter the current temperature in (F) : ";
    cin >> temperature;

    cout << "Enter windpseed in (mph): ";
    cin >> wind_speed;

    wear_coat = temperature < temmperature_for_coat || wind_speed > wind_speed_for_coat;
    cout << "Do you have to wear a coat using OR?" << wear_coat <<endl;

    wear_coat = temperature < temmperature_for_coat && wind_speed > wind_speed_for_coat;
    cout << "Do you have to wear a coat using AND?" << wear_coat <<endl;




    return 0;
}