#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(vector<string> *vec)
{
    for (auto str : *vec)
    {
        cout << str << " ";
    }
    cout << endl;
}

void display(int *array, int sentinel)
{
    while (*array != sentinel)
    {
        cout << *array++ << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    cout << "----------------------------" << endl;
    vector<string> stooges{"Larry", "Moe", "Curly"};
    display(&stooges);

    cout << "----------------------------" << endl;
    int scores[]{100, 98, 97, 29, 83, -1};
    display(scores, -1);

    cout << endl;
    return 0;
}
