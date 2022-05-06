#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int num{100};
    int &ref{num};

    cout << "\n----------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    num = 200;
    cout << "\n----------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    ref = 300;
    cout << "\n----------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    cout << "\n----------------------------" << endl;
    vector<string> stooges{"Larry", "Moe", "Curly"};

    for (auto str : stooges)
    {
        str = "Funny";
    }

    for (auto str : stooges)
    {
        cout << str << " "; // no change
    }

    cout << "\n----------------------------" << endl;

    for (auto &str : stooges)
    {
        str = "Funny"; // str is a reference to each vector element
    }

    for (auto const &str : stooges)
    {
        cout << str << " "; // now we are actually changing the elements in vector
    }

    return 0;
}
