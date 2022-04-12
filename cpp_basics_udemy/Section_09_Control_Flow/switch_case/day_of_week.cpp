#include <iostream>

using namespace std;

void display_day(int day_code)
{
    switch (day_code)
    {
    case 0:
        cout << "Sunday";
        break;
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    default:
        cout << "Error - illegal day code";
        break;
    }
}

int main(int argc, char const *argv[])
{
    int day_code = 0;
    cout << "Enter the day code from 0-6 (Sun = 0): ";
    cin >> day_code;
    display_day(day_code);

    return 0;
}
