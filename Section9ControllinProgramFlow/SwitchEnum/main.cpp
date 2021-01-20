#include <iostream>
using namespace std;
 
 
int main () {
    enum Direction {
        left, right, top, down
    };

    Direction heading {left};

    //once your're creating a switch statement using enums, you must handle all enum cases or set a  defaul for the enum cases you didn't handle.

    switch (heading)
    {
        case left:
            cout << "You chose left." << endl;
            break;
        case right:
            cout << "You chose right." << endl;
            break;
        case top:
            cout << "You chose right." << endl;
            break;
        case down:
            cout << "You chose right." << endl;
            break;
    // default:
    //     break;
    }
 
return 0;
}