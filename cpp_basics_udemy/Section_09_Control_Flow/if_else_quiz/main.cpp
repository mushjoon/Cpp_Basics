/*
if the person is 16 or older, then he/she can drive
print out "Yes - you can drive!" if true
else => print out "Sorry, come back in n years"
n = 16 - age
*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int age = 0;
    cin >> age;

    if (age >= 16)
    {
        cout << "Yes - you can drive!";
    }
    else
    {
        int n = 16 - age;
        cout << "Sorry, come back in " << n << " years";
    }

    return 0;
}
