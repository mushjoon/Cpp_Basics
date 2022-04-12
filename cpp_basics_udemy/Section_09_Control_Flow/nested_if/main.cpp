#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int length{}, width{}, height{};
    const double BASECOST{2.50};
    const double charge10 = BASECOST * 1.1;
    const double charge25 = BASECOST * 1.25;

    cout << "Please enter package dimensions (l, w, h) separated by space: ";
    cin >> length >> width >> height;

    cout << fixed << setprecision(2);
    
    if (length <= 10 && width <= 10 && height <= 10)
    {
        double volume = length * width * height;

        if (volume >= 100 && volume < 500)
        {
            cout << "Your shipping price is: $" << charge10 << endl;
        }
        else if (volume >= 500)
        {
            cout << "Your shipping price is: $" << charge25 << endl;
        }
        else
        {
            cout << "Your shipping price is: $" << BASECOST << endl;
        }
    }
    else
    {
        cout << "Cannot ship it. Your package dimension is out of range\n";
    }

    return 0;
}
