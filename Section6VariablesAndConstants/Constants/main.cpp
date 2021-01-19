#include <iostream>
using namespace std;

/************************************
 * Frank's Carpet Cleaning Service
 * Charges $30 per room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 * 
 * Prompt the user for the number of rooms they would like cleaned
 * and provide an estimate such as:
 * 
 * Estimate for carpet cleaning service:
 * Number of rooms: 2
 * Price per room: $30
 * Cost: $63
 * Tax: $3.60
 * *********************************
 * Total estimate: $63.6
 * The estimate is valid for 30 days
 * 
 * Pseudocode:
 * Prompt the user to enter the number of rooms
 * Display the number of rooms
 * Display price per room
 * 
 * Display cost:(number of rooms * price per room)
 * Display tax: number of rooms * price per room * tax rate
 * Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
 * Display estimate evaporation time.
 * 
 * ************************************/
int main() {

    cout <<"Hello, welcome to Daniel's Carpet Cleaning Service" << endl;
    cout << "How many rooms would you like cleaned ?" << endl;
    
    int numberOfRooms {0};
    cin >> numberOfRooms;
    
    cout <<"\nYou want to clean " << numberOfRooms << " rooms." << endl;
    
    const int pricePerRoom = 30;
    int costWOTax = numberOfRooms * pricePerRoom;
    cout << "At the rate of $" << pricePerRoom << " per room, \nThis is going to cost you $" << costWOTax << "." << endl;
    
    const double taxRate = 0.06;
    double taxAmountedTo = taxRate * costWOTax;
    cout << "Then, in addition, at a tax rate of " << taxRate << " on the dollar, \nYour tax amounts to $" << taxAmountedTo << "." << endl;
    
    cout << "This brings your total cost to: $" << costWOTax + taxAmountedTo << endl;
    cout << "This is only valid for the next 30 days xx" <<endl;
    
    return 0;
}