#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<double> temps{87.2, 77.1, 80.0, 72.5, 77.9};

    double avg{};
    double sum{};

    for (auto temp : temps)
    {
        sum += temp;
    }

    avg = sum / temps.size();

    cout << fixed << setprecision(1);
    cout << "Avg temp: " << avg << endl;

    cout << "=======================================\n";

    for (auto c : "This is a test")
    {
        if (c != '\0')
        {
            cout << c;
        }
    }

    return 0;
}
