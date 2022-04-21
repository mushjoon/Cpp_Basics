#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{

    string alphabets = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";
    string keys = "eFhpEHfIrlZkuwKMPycDqCtnLUboTWiARSmjvzdVGOxQYsaJgBNX ";

    string original{};
    string encrypted{};
    string decrypted{};

    cout << "\n====================== CYPHER MACHINE ======================\n";
    cout << "Enter your secret message: ";
    getline(cin, original);

    // cout << "Original: " << original << endl;
    for (size_t i = 0; i < original.length(); i++)
    {
        if (alphabets.find(original.at(i)) != string::npos)
        {
            size_t idx = alphabets.find(original.at(i));
            encrypted += keys[idx];
        }
    }

    cout << "\nEncrypting message..." << endl;
    cout << "\nEncrypted message: " << encrypted << endl;

    cout << "\nDecrypting message..." << endl;
    for (size_t i = 0; i < encrypted.length(); i++)
    {
        if (keys.find(encrypted.at(i)) != string::npos)
        {
            size_t idx = keys.find(encrypted.at(i));
            decrypted += alphabets[idx];
        }
    }

    cout << "\nDecrypted message: " << decrypted << endl;
    cout << endl;

    return 0;
}
