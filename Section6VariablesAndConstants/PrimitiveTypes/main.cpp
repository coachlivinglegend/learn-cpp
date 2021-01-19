#include <iostream>
using namespace std;

int main() {
    /*************************************
     * Character Data Type
     * ***********************************/
    char middle_initial {'%'}; //we use single quotes to initiate characters
    cout << "My middle initial is " << middle_initial << endl; 

    /*************************************
     * Integer types
     * ***********************************/
    unsigned short int exam_score {55555}; //could have also said unsigned short 
    cout << "You scored " << exam_score <<endl;
     
    int countries_represented {1654562560};
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;
    
    long people_in_florida {1000000001}; //same as long int
    cout << "There are about " << people_in_florida << " people in Florida" << endl;
    //OVERFLOW IS WHEN YOU USE A DATA TYPE BUT THE VARIABLE HAS A HOLD SOMETHING BIGGER THAN IT CAN HOLD
    long long people_on_earth {7'600'600'005};
    cout << "There are about " << people_on_earth << " people on Earth" << endl;

    /****************************************
     * Floating point types.
     * **************************************/
    float car_payment {40165.4372};
    cout << "Your car payment is " << car_payment << endl;
    
    double pi {3.14159};
    cout << "You go like chop " << pi << " ?" << endl;
    
    long double large_amount {2.7e40};
    cout << large_amount << " is a very big number" << endl;
    
    /****************************************
     * BOOLEAN
     * **************************************/
     bool gameOver {false};
     cout << "The value of gameOver is " << gameOver << endl;
     
     f
    return 0;
}