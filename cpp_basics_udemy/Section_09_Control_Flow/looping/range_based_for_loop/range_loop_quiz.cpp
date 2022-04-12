#include <iostream>
#include <vector>

using namespace std;

// determine how many elements in the vector are evenly divisible by either 3 or 5

int count_divisible()
{

    vector<int> vec{1, 3, 5, 15, 16, 17, 18, 19, 20, 21, 25, 26, 27, 30, 50, 55, 56, 58, 100, 200, 300, 400, 500, 600, 700};
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count{};

    for (auto num : vec)
    {
        if (num % 3 == 0 || num % 5 == 0)
        {
            count++;
        }
    }

    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT CHANGE THE CODE BELOW THIS LINE----
    return count;
}

int main(int argc, char const *argv[])
{
    cout << "Count: " << count_divisible() << endl;
    return 0;
}
