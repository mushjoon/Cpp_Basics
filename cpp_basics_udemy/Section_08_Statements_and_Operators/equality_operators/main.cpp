#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    bool equalResult{false};
    bool notEqualResult{false};

    int num1{}, num2{};

    cout << boolalpha;

    cout << "Enter 2 numbers separated by space: ";
    cin >> num1 >> num2;
    equalResult = (num1 == num2);
    notEqualResult = (num1 != num2);
    cout << "Comparison result (equals): " << equalResult << endl;
    cout << "Comparison result (not equals): " << notEqualResult << endl;

    return 0;
}
