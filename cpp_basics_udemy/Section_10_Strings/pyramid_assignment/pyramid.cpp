#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    size_t steps{};
    string userText{};

    cout << "\n=================== PYRAMID PRINTER ===================\n";
    cout << "Enter your string: ";
    getline(cin, userText);

    steps = userText.length();

    // cout << "Your string: " << userText << " and the length: " << steps << endl;

    for (size_t i = 0; i < steps; i++)
    {
        int count{0};
        for (int j = 0; j < i; j++)
        {
            cout << userText.at(j);
            ++count;
        }
        for (int k = count; k >= 0; k--)
        {
            cout << userText.at(k);
        }
        
        cout << endl;
    }

    return 0;
}
