#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int num_items{};

    cout << "How many data items do you have?: ";
    cin >> num_items;

    vector<int> dataVec{};

    for (int i = 0; i < num_items; i++)
    {
        int data_item{};
        cout << "Enter data item " << (i + 1) << ": ";
        cin >> data_item;
        dataVec.push_back(data_item);
    }

    cout << "\n======= Displaying Histogram =======\n";

    for (auto val : dataVec)
    {
        for (int i = 1; i <= val; i++)
        {
            if (i % 5 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}
