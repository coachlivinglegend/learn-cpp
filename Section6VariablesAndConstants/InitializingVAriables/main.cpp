#include <iostream>

using namespace std;

//Program to calculate the area of a room in square feet

int main() {
    
    cout << "Enter the width of the room :";
    
    int width {0};
    cin >> width;
    
    cout << "Enter the length of the room, in feet :";
    
    int length {0};
    cin >> length;
    
    cout << "The area of the room is: " << width * length << " square feet." << endl;
    
    return 0;
}