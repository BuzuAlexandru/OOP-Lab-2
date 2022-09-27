#include<iostream>
#include<string>
using namespace std;

class Map
{
    private:

    int width, height, map[50][50];

    public:

    void setWidth(int w)
    {
         width = w;
    }

    void setHeight(int h)
    {
         height = h;
    }

    int getWidth()
    {
         return width;
    }

    int getHeight()
    {
         return height;
    }
};

class Tile
{
    public:

    int x, y;

    string type; //terrain, road, building_spot, mining_spot, portal, finish;

    Tile(int x1, int y1, string style)
    {
        x = x1;
        y = y1;
        type = style;
    }

};

class Soldier
{
    public:

    int health, strength, armor, dexterity;

    Soldier(int h, int s, int a, int d)
    {
        
        health = h;
        strength = s;
        armor = a;
        dexterity = d;
    }

    void takeDmg(int dmg)
    {
        health -= (dmg - armor);
    }
    void getHeal(int heal)
    {
        health += heal;
    }
};

class Enemy
{
    public:

    int mvSpeed, goldValue, dmgValue, health, strength, armor, dexterity;

    Enemy(int m, int g, int d, int he, int st, int ar, int dm)
    {
        mvSpeed = m;
        goldValue = g;
        dmgValue = d;
        health = he;
        strength = st;
        armor = ar;
        dexterity = dm;
    }
};

class Weapon
{
    public:

    int power, range, AOE, accuracy;

    Weapon(int p, int r, int A, int a)
    {
        power = p;
        range = r;
        AOE = A;
        accuracy = a;
    }
};

class Ammo
{
    public:

    int power, range, AOE, accuracy;

    Ammo(int p, int r, int A, int a)
    {
        power = p;
        range = r;
        AOE = A;
        accuracy = a;
    }
};

class Trap
{
    public:

    int damage, AOE;

    Trap(int dmg, int A)
    {
        damage = dmg;
        AOE = A;
    }
};

class Tower
{
    public:

    int x, y, cost, range;

    Tower(int x1, int y1, int c, int r)
    {
        x = x1;
        y = y1;
        cost = c;
        range = r;
    }
};

class Barracks
{
    public:

    int x, y, cost, range;

    Barracks(int x1, int y1, int c, int r)
    {
        x = x1;
        y = y1;
        cost = c;
        range = r;
    }
};

class Player
{
    public:

    int health, coins;

    void takeDmg(int enemy_value)
    {
        health -= enemy_value;
    }

    void coinSpend(int cost)
    {
        coins -= cost;
    }

    void coinGet(int gold)
    {
        coins += gold;
    }
};

int main()
{
    Soldier knight(100, 2, 3, 4);
    
    cout << "Knight's health is: " << knight.health;
    return 0;
}