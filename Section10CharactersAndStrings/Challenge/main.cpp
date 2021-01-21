#include <iostream>
using namespace std;

int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secret_message;
    string coded_message;
    cout << "Enter your secret message: ";
    getline(cin, secret_message);
    cout << "Encrypting message..." << endl;
    cout << endl;
    size_t position;
    for (auto letter : secret_message)
    {
        // position = alphabet.find(letter);
        if (alphabet.find(letter) != string::npos)
        {
            letter = key[alphabet.find(letter)];
        }
        else
        {
            letter = letter;
        }

        coded_message += letter;
    }
    cout << "Encrypted message - " << coded_message << endl;
    cout << endl;
    cout << "Dcrypting message - " << endl;
    cout << endl;

    string decrypt_message;
    for (auto letter : coded_message)
    {
        position = key.find(letter);
        if (position != string::npos)
        {
            letter = alphabet[position];
        }
        else
        {
            letter = letter;
        }

        decrypt_message += letter;
    }
    cout << "Decrypted message: " << decrypt_message << endl;
    cout << endl;

    return 0;
}