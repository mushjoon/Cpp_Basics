#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(int argc, char const *argv[])
{
    cout << fibonacci(5) << endl;
    cout << fibonacci(30) << endl;
    cout << fibonacci(40) << endl;
    
    return 0;
}
