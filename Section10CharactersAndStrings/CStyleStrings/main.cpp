#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char first_name[20]{};
    char last_name[20]{};
    char full_name[20]{};
    char temp[20]{};

    // cout << first_name;
    // cout << "Please enter your first name: ";
    // cin >> first_name;

    // cout << "Please enter your last name: ";
    // cin >> last_name;
    // cout << "=========================================" << endl;

    // cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    // cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

    // strcpy(full_name, first_name);
    // strcat(full_name, " ");
    // strcat(full_name, last_name);
    // cout << "Your full name is " << full_name << endl;

    // cout << "Enter your full name: ";
    // cin >> full_name;
    // cout << "Your name is " << full_name << endl;

    cout << "Enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your name is " << full_name << endl;

    cout << "----------------------------------" << endl;
    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0)
    {
        cout << temp << " and " << full_name << " are the same." << endl;
    }
    else
    {
        cout << temp << " and " << full_name << " are different." << endl;
    }
    cout << "==============================================================" << endl;

    for (size_t i = 0; i < strlen(full_name); i++)
    {
        if (isalpha(full_name[i]))
        {
            full_name[i] = toupper(full_name[i]);
        }
    }
    cout << "Your full name is " << full_name << endl;

    if (strcmp(temp, full_name) == 0)
    {
        cout << temp << " and " << full_name << " are the same." << endl;
    }
    else
    {
        cout << temp << " and " << full_name << " are different." << endl;
    }
    cout << "==============================================================" << endl;

    cout << "Result of comparing " << temp << " and " << full_name << ":" << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << ":" << strcmp(full_name, temp) << endl;


//this function returns 0 if the two strings are the same
//returns <0 if the first string lexically comes before the second srring.
//returns >0 if the first string lexically comes after the second srring.
    return 0;
}