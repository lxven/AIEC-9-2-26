#include <iostream>
#include <string>
using namespace std;

// Enum for weapons
enum WeaponType
{
    SWORD,
    AXE,
    BOW
};

// Enum for enemies
enum EnemyType
{
    GOBLIN,
    ORC,
    DRAGON
};

// Struct for an item
struct Item
{
    string name;
    int healAmount;
};

// Character class
class Character
{
private:
    string name;
    int health;
    int attackDamage;

public:
    Character(string n, int h, int a)
    {
        name = n;
        health = h;
        attackDamage = a;
    }

    void attack(Character& enemy)
    {
        cout << name << " attacks " << enemy.name << "!" << endl;

        enemy.health -= attackDamage;

        if (enemy.health < 0)
        {
            enemy.health = 0;
        }

        cout << enemy.name << " has "
            << enemy.health << " health remaining." << endl;
    }

    void usePotion(Item potion)
    {
        health += potion.healAmount;

        if (health > 100)
        {
            health = 100;
        }

        cout << name << " used a " << potion.name << "!" << endl;
        cout << name << " now has " << health << " health." << endl;
    }

    void enemyAttack(Character& player)
    {
        cout << name << " attacks " << player.name << "!" << endl;

        player.health -= attackDamage;

        if (player.health < 0)
        {
            player.health = 0;
        }

        cout << player.name << " has "
            << player.health << " health remaining." << endl;
    }

    bool isAlive()
    {
        return health > 0;
    }

    int getHealth()
    {
        return health;
    }

    string getName()
    {
        return name;
    }
};
int getPlayerChoice()
{
    int choice;
    int wrongAttempts = 0;

    while (true)
    {
        cout << "1. Attack" << endl;
        cout << "2. Use Potion" << endl;
        cout << "Enter choice: ";

        cin >> choice;

        // If player enters a letter
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');

            wrongAttempts++;

            if (wrongAttempts == 1)
            {
                cout << "Press 1 or 2 Bro!" << endl;
            }
            else
            {
                cout << "Dont test me ima gangster, you just a player!" << endl;
            }
        }

        // Correct choice
        else if (choice == 1 || choice == 2)
        {
            return choice;
        }

        // Wrong number
        else
        {
            wrongAttempts++;

            if (wrongAttempts == 1)
            {
                cout << "Press 1 or 2 Bro!" << endl;
            }
            else
            {
                cout << "Dont test me ima gangster, you just a player!" << endl;
            }
        }
    }
}


// Function for fighting an enemy
void fightEnemy(Character& player, Character& enemy, Item potion, int& potions)
{
    cout << "============================" << endl;
    cout << "A wild " << enemy.getName() << " appears!" << endl;
    cout << "============================" << endl;

    while (player.isAlive() && enemy.isAlive())
    {
        cout << "Your Health: " << player.getHealth() << endl;
        cout << "Potions: " << potions << endl;

        cout << "What do you want to do?" << endl;

        int choice = getPlayerChoice();

        if (choice == 1)
        {
            player.attack(enemy);
        }
        else if (choice == 2)
        {
            if (potions > 0)
            {
                player.usePotion(potion);
                potions--;
            }
            else
            {
                cout << "You don't have any potions left!" << endl;
            }
        }

        if (enemy.isAlive())
        {
            enemy.enemyAttack(player);
        }
    }

    if (player.isAlive())
    {
        cout << "\nYou defeated " << enemy.getName() << "!" << endl;
    }
}

int main()
{
    Item healthPotion;
    healthPotion.name = "Health Potion";
    healthPotion.healAmount = 50;

    Character player("Hero", 100, 25);

    Character goblin("Goblin", 50, 10);
    Character orc("Orc", 75, 15);
    Character dragon("Dragon", 150, 25);

    int potions = 3;

    cout << "============================" << endl;
    cout << "     DUNGEON CRAWLER" << endl;
    cout << "============================" << endl;

    cout << "You enter a dark dungeon..." << endl;

    fightEnemy(player, goblin, healthPotion, potions);

    if (!player.isAlive())
    {
        cout << "You died in the dungeon!" << endl;
        return 0;
    }

    fightEnemy(player, orc, healthPotion, potions);

    if (!player.isAlive())
    {
        cout << "You died in the dungeon!" << endl;
        return 0;
    }

    fightEnemy(player, dragon, healthPotion, potions);

    if (!player.isAlive())
    {
        cout << "You died in the dungeon!" << endl;
        return 0;
    }

    cout << "============================" << endl;
    cout << "YOU ESCAPED THE DUNGEON!" << endl;
    cout << "============================" << endl;

    return 0;
}