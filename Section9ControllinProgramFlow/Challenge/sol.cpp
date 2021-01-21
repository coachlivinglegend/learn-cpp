#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char selection;
    vector<int> user_vector;

    do
    {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Dsiplay the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << endl;
        cout << "Make your choice: ";
        cin >> selection;

        switch (selection)
        {
        case 'p':
        case 'P':
            if (user_vector.size() == 0)
            {
                cout << "Your array is empty, [ ] nothing to print." << endl;
            }
            else
            {
                cout << "[ ";
                for (auto number : user_vector)
                {
                    cout << number << " ";
                }
                cout << "]" << endl;
            }
            break;
        case 'a':
        case 'A':
            char cont;
            do
            {
                int to_add;
                cout << "Add a number to the array :";
                cin >> to_add;
                user_vector.push_back(to_add);

                cout << "Do you want to add another number or you're done? ";
                cin >> cont;

            } while (cont != 'N' && cont != 'n');
            break;
        case 'm':
        case 'M':
            double average, total;
            if (user_vector.size() == 0)
            {
                cout << "Your array is empty, mean cannot be calculated." << endl;
            }
            else
            {
                for (auto number : user_vector)
                {
                    total += number;
                }
                average = total / user_vector.size();
                cout << "The average of your array is " << average << endl;
                total = 0;
            }
            break;
        case 's':
        case 'S':
            int hold_small;
            for (auto number : user_vector)
            {
                if (number < hold_small)
                {
                    hold_small = number;
                }
            }
            cout << "The smallest number in your array is " << hold_small << endl;
            break;
        case 'l':
        case 'L':
            int hold_big;
            for (auto number : user_vector)
            {
                if (number > hold_small)
                {
                    hold_big = number;
                }
            }
            cout << "The largest number in your array is " << hold_big << endl;
            break;
        case 'q':
        case 'Q':
            cout << "Thanks for coming" << endl;
            break;
        default:
            cout << "Go read the instructions boy!";
            break;
        }

    } while (selection != 'Q' && selection != 'q');

    return 0;
}