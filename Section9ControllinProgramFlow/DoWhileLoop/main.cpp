#include <iostream>
using namespace std;

int main()
{
    char selection{};
    do
    {
        cout << "\n----------------------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        switch (selection)
        {
        case '1':
            cout << "Selected 1, doing this.";
            break;
        case '2':
            cout << "Selected 2, doing that.";
            break;
        case '3':
            cout << "Selected 3, doing something else.";
            break;
        case 'q':
        case 'Q':
            cout << "Selected Q, goodbye.";
            break;
        default:
            cout << "Wetin you dey talk abeg?";
            break;
        }
    } while (selection != 'q' && selection != 'Q');

    return 0;
}