#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player
{
    public:
    // attributes
    string name{"Player"};
    int health{100};
    int xp{3};

    // methods
    void talk(string text_to_say);
    bool is_dead();
};

class Account
{
    public:
    // attributes
    string name{"Account"};
    double balance{0.0};

    // methods
    bool deposit(double bal);
    bool withdraw(double bal);
};

int main(int argc, char const *argv[])
{
    Account frank_account;
    Account jim_account;

    Player frank;
    Player hero;

    Player players[]{frank, hero};

    vector<Player> player_vec{frank};
    player_vec.push_back(hero);

    Player *enemy{nullptr};
    enemy = new Player;

    delete enemy;

    return 0;
}
