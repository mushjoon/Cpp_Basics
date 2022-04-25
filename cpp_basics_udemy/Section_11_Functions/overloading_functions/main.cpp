#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

int main(int argc, char const *argv[])
{
    //print(100);
    //print('A');
    print(35.62);
    print(35.62F);
    print("C-style string");

    string myStr{"C++ string"};
    print(myStr);

    print("C-style", myStr);

    vector<string> stooges{"Larry", "Moe", "Curly"};
    print(stooges);
    return 0;
}

void print(int num)
{
    cout << "Printing int: " << num << endl;
}

void print(double num)
{
    cout << "Printing double: " << num << endl;
}

void print(string s)
{
    cout << "Printing string: " << s << endl;
}

void print(string str1, string str2)
{
    cout << "Printing string1: " << str1 << " and string2: " << str2 << endl;
}

void print(vector<string> vec)
{
    cout << "Printing vector of strings: ";
    for (auto str : vec)
    {
        cout << str << " ";
    }
    cout << endl;
}