#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    string name{"Player"};
    int health;
    int xp;

public:
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    }

    bool is_dead();
};

int main(int argc, char const *argv[])
{
    Player frank;
    // frank.name = "Frank";
    // cout << frank.health << endl;

    frank.talk("Hello there");
    return 0;
}
