#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num)
{
    num = 1000;
}

void pass_by_value2(string s)
{
    s = "Changed";
}

void pass_by_value3(vector<string> v)
{
    v.clear();
}

void print_vector(vector<string> v)
{
    for (auto s : v)
        cout << s << " ";
    cout << endl;
}

int main()
{
    int num = 10;
    int another_num = 20;

    cout << "\nnum before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;

    cout << "\nnum before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "num after calling pass_by_value1: " << another_num << endl;

    string name = "Frank";
    cout << "\nname beofre calling passbyvale2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling passbyvale2: " << name << endl;

    vector<string> stooges = {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling passbyna3";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "Stooges after calling pasdddddddnfnfffffffffffd";
    print_vector(stooges);

        return 0;
}