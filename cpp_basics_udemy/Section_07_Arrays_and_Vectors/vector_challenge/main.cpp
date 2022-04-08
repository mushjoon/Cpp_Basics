#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector1, vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    for (int i = 0; i < vector1.size(); i++)
    {
        cout << "Vector 1 element at index " << i << " is: " << vector1.at(i) << endl;
    }

    cout << "Vector 1's size: " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    for (int i = 0; i < vector2.size(); i++)
    {
        cout << "Vector 2 element at index " << i << " is: " << vector2.at(i) << endl;
    }

    cout << "Vector 2's size: " << vector2.size() << endl;

    vector<vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Vector_2d's element at row " << i << " column " << j << " : " << vector_2d.at(i).at(j) << endl;
        }
    }

    cout << "================== Changing vector1[0] to 1000 ==================\n";
    vector1.at(0) = 1000;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Vector_2d's element at row " << i << " column " << j << " : " << vector_2d[i][j] << endl;
        }
    }

    for (int i = 0; i < vector1.size(); i++)
    {
        cout << "Vector 1 element at index " << i << " is: " << vector1.at(i) << endl;
    }

    return 0;
}