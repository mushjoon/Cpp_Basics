#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "\n================= Multiplication Table =================\n";

    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            cout << i << " x " << j << " = " << (i * j) << endl;
        }
        cout << "=====================================================\n";
    }

    cout << endl;

    return 0;
}
