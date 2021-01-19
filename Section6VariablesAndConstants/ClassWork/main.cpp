#include <iostream>
using namespace std;

/************************************
 * Frank's Carpet Cleaning Service
 * Charges $25 per room for a small room
 * Charges $35 for big room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 * 
 * Prompt the user for the number of small rooms and or big rooms they would like cleaned
 * and provide an estimate such as:
 * 
 * Estimate for carpet cleaning service:
 * Number of big rooms: 2,
 * number of small rooms: 3,
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
    cout << "How many small rooms would you like cleaned ?" << endl;
    
    int numberOfSmallRooms {0};
    cin >> numberOfSmallRooms;

    cout << "How many large rooms would you like cleaned ?" << endl;
    
    int numberOfLargeRooms {0};
    cin >> numberOfLargeRooms;

    cout <<"\nYou want to clean " << numberOfSmallRooms << " rooms and " << numberOfLargeRooms << " large rooms." << endl;
    
    const int priceSmallRoom = 25;
    const int priceLargeRoom = 35;
    
    int costWOTax = (numberOfSmallRooms * priceSmallRoom) + (numberOfLargeRooms * priceLargeRoom);
    cout << "At the rate of $" << priceSmallRoom << " for a small room, and " << priceLargeRoom << "for a big room, \nThis is going to cost you $" << costWOTax << " in total." << endl;
    
    const double taxRate = 0.06;
    double taxAmountedTo = taxRate * costWOTax;
    cout << "Then, in addition, at a tax rate of " << taxRate << " on the dollar, \nYour tax amounts to $" << taxAmountedTo << "." << endl;
    
    cout << "=========================================================================" << endl;
    cout << "This brings your total cost to: $" << costWOTax + taxAmountedTo << endl;
    cout << "This is only valid for the next 30 days xx" <<endl;
    
    return 0;
}