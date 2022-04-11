#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int cents = 0;
    const int dollar = 100;
    const int quarter = 25;
    const int dime = 10;
    const int nickel = 5;
    const int penny = 1;

    cout << "Enter an amount in cents: ";
    cin >> cents;

    int divDol = 0;
    int divQuar = 0;
    int divDime = 0;
    int divNick = 0;
    int divPen = 0;

    while (divPen == 0)
    {
        divDol = cents / dollar;
        divQuar = (cents % dollar) / quarter;
        divDime = ((cents % dollar) % quarter) / dime;
        divNick = (((cents % dollar) % quarter) % dime) / nickel;
        divPen = ((((cents % dollar) % quarter) % dime) % nickel) / penny;
    }

    cout << "dollars: " << divDol << endl;
    cout << "quarters: " << divQuar << endl;
    cout << "dimes: " << divDime << endl;
    cout << "nickels: " << divNick << endl;
    cout << "pennies: " << divPen << endl;

    return 0;
}
