#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char selection{};

    do
    {
        cout << "\n-------------------------------------\n";
        cout << "1. Do this\n";
        cout << "2. Do that\n";
        cout << "3. Do something else\n";
        cout << "Q. Quit\n";
        cout << "Enter your selection: ";
        cin >> selection;

        if (selection == '1')
        {
            cout << "\nYou chose 1 - doing this\n";
        }
        else if (selection == '2')
        {
            cout << "\nYou chose 2 - doing that\n";
        }
        else if (selection == '3')
        {
            cout << "\nYou chose 3 - doing something else\n";
        }
        else if (selection == 'q' || selection == 'Q')
        {
            cout << "\nGood Bye!\n";
        }
        else
        {
            cout << "\nUnknown option -- try again\n";
        }

    } while (selection != 'q' && selection != 'Q');

    cout << endl;
    return 0;
}
