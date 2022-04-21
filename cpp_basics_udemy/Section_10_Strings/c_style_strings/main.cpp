#include <iostream>
#include <cctype>  // for character-based functions
#include <cstring> // for c-style string functions

using namespace std;

int main(int argc, char const *argv[])
{
    char firstName[20]{};
    char lastName[20]{};
    char fullName[50]{};
    char temp[50]{};

    // cout << "Enter your first name: ";
    // cin >> firstName;

    // cout << "Enter your last name: ";
    // cin >> lastName;

    // cout << "Hello, " << firstName << " your first name has " << strlen(firstName) << " characters" << endl;
    // cout << "Your last name, " << lastName << " has " << strlen(lastName) << " characters" << endl;

    // strcpy(fullName, firstName);
    // strcat(fullName, " ");
    // strcat(fullName, lastName);

    // cout << "Your full name is: " << fullName << endl;

    // cout << "\n=========================== USING GETLINE FUNCTION ===============================\n";

    cout << "Enter your full name: ";
    cin.getline(fullName, 50);
    cout << "Full name is: " << fullName << endl;

    strcpy(temp, fullName);

    cout << "\n==================== CHANGING FULL NAME TO UPPERCASE ======================\n";

    for (int i = 0; i < strlen(fullName); i++)
    {
        if (isalpha(fullName[i]))
        {
            fullName[i] = toupper(fullName[i]);
        }
    }

    if (strcmp(temp, fullName) == 0)
    {
        cout << temp << " and " << fullName << " are the same!" << endl;
    }
    else
    {
        cout << temp << " and " << fullName << " are different!" << endl;
    }

    return 0;
}
