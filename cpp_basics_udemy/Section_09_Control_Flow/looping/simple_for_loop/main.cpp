#include <iostream>

using namespace std;

// get the sum of odd int from 1 to 15 inclusive

int calculate_sum()
{
    int sum = 0;

    for (int i = 1; i < 16; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    cout << "The sum is: " << calculate_sum();
    return 0;
}
