#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec)
{
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count{0};
    size_t index{0};

    while (index < vec.size() && vec.at(index) != -99)
    {
        count++;
        index++;
    }

    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}

int main(int argc, char const *argv[])
{
    vector<int> myVec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Count is: " << count_numbers(myVec) << endl;

    return 0;
}
