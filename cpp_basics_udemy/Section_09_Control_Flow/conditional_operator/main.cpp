#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int myNum{};

    cout << "Enter an integer: ";
    cin >> myNum;

    cout << myNum << " is " << ((myNum % 2 == 0) ? "even" : "odd") << endl;

    return 0;
}
