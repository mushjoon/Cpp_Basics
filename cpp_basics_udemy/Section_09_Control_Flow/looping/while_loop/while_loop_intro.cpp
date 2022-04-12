#include <iostream>
#include <windows.h>
#include <unistd.h>

using namespace std;

void blastoff(int num)
{
    while (num > 0)
    {
        cout << num << endl;
        num--;
        sleep(1);
    }

    cout << "Blastoff!!!" << endl;
}

void sayThx()
{
    bool done{false};
    int myNum{0};

    while (!done)
    {
        cout << "Enter an integer between 1 and 5: ";
        cin >> myNum;
        if (myNum < 1 || myNum > 5)
        {
            cout << "Out of range, try again\n";
        }
        else
        {
            cout << "Thanks!\n";
            done = true;
        }
    }
}

int main(int argc, char const *argv[])
{
    int num{};
    cout << "Enter a positive integer - start the countdown: ";
    cin >> num;

    cout << "======================================================\n";
    blastoff(num);
    
    cout << "======================================================\n";
    sayThx();

    return 0;
}
