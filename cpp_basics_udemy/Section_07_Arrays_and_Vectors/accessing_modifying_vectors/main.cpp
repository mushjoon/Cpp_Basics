#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> testScores{100, 95, 99, 87, 88};

    cout << "\nTest Scores using array syntax\n";

    for (int i = 0; i < testScores.size(); i++)
    {
        cout << "Test Score at index " << i << " => " << testScores.at(i) << endl;
    }

    // vector <char> vowels;
    // vector <char> vowels(5); // 5 vectors initialized to zero

    cout << "\nTest Scores using array syntax\n";

    // cout << endl;
    // cout << testScores.size();
    // cout << endl;

    for (int i = 0; i < testScores.size(); i++)
    {
        cout << "Test Score at index " << i << " => " << testScores[i] << endl;
    }

    cout << "\n=========== ADDING NEW NUMBER INTO THE VECTOR =============\n";
    int newNumber = 0;
    cout << "Enter an integer: ";
    cin >> newNumber;

    testScores.push_back(newNumber);

    for (int i = 0; i < testScores.size(); i++)
    {
        cout << "Test Score at index " << i << " => " << testScores[i] << endl;
    }    

    return 0;
}