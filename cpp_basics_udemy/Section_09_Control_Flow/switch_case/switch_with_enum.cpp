#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    enum Direction
    {
        left,
        right,
        up,
        down
    };

    Direction heading{left};

    switch (heading)
    {
    case left:
        cout << "Going left\n";
        break;
    case right:
        cout << "Going right\n";
        break;
    case up:
        cout << "Going up\n";
        break;
    case down:
        cout << "Going down\n";
        break;
    default:
        break;
    }

    return 0;
}
