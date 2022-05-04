#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int scores[]{100, 95, 89, 68, -1};
    int *score_ptr{scores};

    while (*score_ptr != -1)
    {
        cout << *score_ptr << endl;
        score_ptr++;
    }

    cout << "\n--------------------------------------\n";
    score_ptr = scores;
    while (*score_ptr != -1)
    {
        cout << *score_ptr++ << endl;
    }

    cout << "\n--------------------------------------\n";
    string s1{"Frank"};
    string s2{"Frank"};
    string s3{"James"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout << boolalpha;
    cout << p1 << " == " << p2 << ": " << (p1 == p2) << endl;
    cout << p1 << " == " << p3 << ": " << (p1 == p3) << endl;

    cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << endl;
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;

    p3 = &s3;
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;

    return 0;
}
