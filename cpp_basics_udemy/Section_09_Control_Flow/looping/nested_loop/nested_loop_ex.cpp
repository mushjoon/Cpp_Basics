#include <iostream>
#include <vector>
using namespace std;

int calculate_pairs(vector<int> vec)
{
    //----WRITE YOUR CODE BELOW THIS LINE----
    int result{};

    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = 1; j < vec.size(); j++)
        {
            result += vec[i] * vec[j];
        }
    }

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
}

int main(int argc, char const *argv[])
{

    vector<int> myVec1 {1,2,3};
    vector<int> myVec2 {2,4,6,8};

    cout << "The result: " << calculate_pairs(myVec1) << endl;

    return 0;
}
