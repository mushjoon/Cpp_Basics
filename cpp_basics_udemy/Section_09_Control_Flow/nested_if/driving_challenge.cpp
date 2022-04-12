#include <iostream>

using namespace std;

void can_you_drive(int age, bool hasCar)
{
    if (age < 16)
    {
        int n = 16 - age;
        cout << "Sorry, come back in " << n << " years and be sure you own a car when you come back.";
    }
    else
    {
        if (hasCar == false)
        {
            cout << "Sorry, you need to buy a car before you can drive!";
        }
        else
        {
            cout << "Yes - you can drive!";
        }
    }
}

int main(int argc, char const *argv[])
{
    int age{0};
    bool hasCar{false};
    char answer;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Do you own a car? (y,n): ";
    cin >> answer;

    if (answer == 'y')
    {
        hasCar = true;
    }
    else if (answer == 'n')
    {
        hasCar = false;
    }

    can_you_drive(age, hasCar);

    return 0;
}
