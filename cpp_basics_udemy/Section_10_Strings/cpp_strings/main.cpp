#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};
    string s6{s1, 0, 3};
    string s7(10, 'X');

    // cout << s0 << endl;     // no garbage output unlike c-style string
    // cout << s0.length() << endl;

    cout << "\nInitialization" << "\n----------------------------------------\n";
    cout <<"s1 initialized to: " << s1 << endl;
    cout <<"s2 initialized to: " << s2 << endl;
    cout <<"s3 initialized to: " << s3 << endl;
    cout <<"s4 initialized to: " << s4 << endl;
    cout <<"s5 initialized to: " << s5 << endl;
    cout <<"s6 initialized to: " << s6 << endl;
    cout <<"s7 initialized to: " << s7 << endl;


    cout << "\nAssignment" << "\n----------------------------------------\n";
    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;

    s3 = "Frank";
    cout << "s3 is now: " << s3 << endl;

    s3[0] = 'C';
    cout << "s3 change first letter to C: " << s3 << endl;
    s3.at(0) = 'P';
    cout << "s3 change first letter to P: " << s3 << endl;


    cout << "\nConcatenation" << "\n----------------------------------------\n";
    s3 = "Watermelon";
    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now changed into: " << s3 << endl;


    cout << "\nLooping" << "\n----------------------------------------\n";
    s2 = "Banana";
    
    for (size_t i = 0; i < s2.length(); i++)
    {
        cout << s2.at(i) << " ";
    }
    cout << endl;

    return 0;
}
