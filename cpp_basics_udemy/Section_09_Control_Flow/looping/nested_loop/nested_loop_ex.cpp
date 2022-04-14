#include <iostream>
#include <vector>
using namespace std;

int calculate_pairs(vector<int> vec)
{
    //----WRITE YOUR CODE BELOW THIS LINE----
    int result{};
    int vectorSize = vec.size();

    if (vectorSize < 2)
    {
        result = 0;
    }
    else
    {
        for (int i = 0; i < vectorSize - 1; i++)
        {
            for (int j = i + 1; j < vectorSize; j++)
            {
                result += vec[i] * vec[j];
            }
        }
    }

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
}

int main(int argc, char const *argv[])
{
    vector<int> myVec1{1, 2, 3};
    vector<int> myVec2{2, 4, 6, 8};
    vector<int> myVec3{1};

    cout << "The result: " << calculate_pairs(myVec3) << endl;

    return 0;
}
