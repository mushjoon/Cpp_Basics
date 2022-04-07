#include <iostream>

using namespace std;

int main()
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    double test_scores[] = {92.5, 30, 100, 88.2, 78.6};
    int myArray[5];

    for (int i = 0; i < sizeof(test_scores) / sizeof(test_scores[0]); i++)
    {
        cout << "The test score at position " << i << " is: " << test_scores[i] << endl;
    }

    cout << "Please enter 5 integers\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> myArray[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "myArray[" << i << "] => " << myArray[i] << endl;
    }

    return 0;
}