#include <iostream>
#include <string>
using namespace std;
//creating a object class for the Human Race
class human
{
public:
	string Race = "human";
	string Name = "Jax";
	int Strength = 100;
	int HP = 100;
	int Range = 15;
	string Weapon = "sword";
	int Damage = 34 * Range;
};
//creating a object class for the Dragoon Race
class dragoon
{
public:
	string Race = "Dragoon";
	string Name = "Draconis";
	int Strength = 150;
	int HP = 50;
	int Range = 10;
	string Weapon = "claws";
	int Damage = 50 * Range;
};
//creating a object class for the Elf Race
class elf
{
public:
	string Race = "Elf";
	string Name = "Cleland";
	int Strength = 50;
	int HP = 150;
	int Range = 50;
	string Weapon = "bow";
	int Damage = 10 * Range;
};
//creating a object class for the Pixie Race
class pixie
{
public:
	string Race = "Pixie";
	string Name = "Kitto";
	int Strength = 50;
	int HP = 50;
	int Range = 25;
	string Weapon = "stave";
	int Damage = 20 * Range;
};
//creating a object class for the player
class mainPlayer
{
public:
	string Race;
	string Name;
	int Strength = 0;
	int HP = 0;
	int Range = 0;
	string Weapon;
	int Damage = 0;
};
//creating a object class for the companion
class companion
{
public:
	string Race;
	string Name;
	int Strength = 0;
	int HP = 0;
	int Range = 0;
	string Weapon;
	int Damage = 0;
};
int main()
{
	//declaring the objects of player and companion to be accessed within the main class
	mainPlayer player;
	companion companion;
	//a string used to get the race the player wishes to play as
	string race;
	cout << " Please pick your race: Human, Dragoon, Elf, or Pixie:\n";
	cin >> race;
	//if else if statements are being used to set up the values for the player object
	if (race == "human" || race == "Human")
	{
		human human;
		player.Name = human.Name;
		player.Race = human.Race;
		player.Strength = human.Strength;
		player.HP = human.HP;
		player.Range = human.Range;
		player.Weapon = human.Weapon;
		player.Damage = human.Damage;
	}
	else if (race == "dragoon" || race == "Dragoon")
	{
		dragoon dragoon;
		player.Name = dragoon.Name;
		player.Race = dragoon.Race;
		player.Strength = dragoon.Strength;
		player.HP = dragoon.HP;
		player.Range = dragoon.Range;
		player.Weapon = dragoon.Weapon;
		player.Damage = dragoon.Damage;
	}
	else if (race == "elf" || race == "Elf")
	{
		elf elf;
		player.Name = elf.Name;
		player.Race = elf.Race;
		player.Strength = elf.Strength;
		player.HP = elf.HP;
		player.Range = elf.Range;
		player.Weapon = elf.Weapon;
		player.Damage = elf.Damage;
	}
	else if (race == "pixie" || race == "Pixie")
	{
		pixie pixie;
		player.Name = pixie.Name;
		player.Race = pixie.Race;
		player.Strength = pixie.Strength;
		player.HP = pixie.HP;
		player.Range = pixie.Range;
		player.Weapon = pixie.Weapon;
		player.Damage = pixie.Damage;
	}
	//an else statement in case they choose anything other than the 4 options
	else
	{
		cout << "You can blame KAT for this problem\n";
	}
	//string used to get the desired race of the companion
	string partner;
	cout << "\nPlease choose one other race to be your partner for this adventure.\n";
	cin >> partner; 
	if (partner == "human" || partner == "Human" && race != "human" && race != "Human")
	{
		human human;
		companion.Name = human.Name;
		companion.Race = human.Race;
		companion.Strength = human.Strength;
		companion.HP = human.HP;
		companion.Range = human.Range;
		companion.Weapon = human.Weapon;
		companion.Damage = human.Damage;
	}
	else if (partner == "dragoon" || partner == "Dragoon" && race != "dragoon" && race != "Dragoon")
	{
		dragoon dragoon;
		companion.Name = dragoon.Name;
		companion.Race = dragoon.Race;
		companion.Strength = dragoon.Strength;
		companion.HP = dragoon.HP;
		companion.Range = dragoon.Range;
		companion.Weapon = dragoon.Weapon;
		companion.Damage = dragoon.Damage;
	}
	else if (partner == "elf" || partner == "Elf" && race != "elf" && race != "Elf")
	{
		elf elf;
		companion.Name = elf.Name;
		companion.Race = elf.Race;
		companion.Strength = elf.Strength;
		companion.HP = elf.HP;
		companion.Range = elf.Range;
		companion.Weapon = elf.Weapon;
		companion.Damage = elf.Damage;
	}
	else if (partner == "pixie" || partner == "Pixie" && race != "pixie" && race != "Pixie")
	{
		pixie pixie;
		companion.Name = pixie.Name;
		companion.Race = pixie.Race;
		companion.Strength = pixie.Strength;
		companion.HP = pixie.HP;
		companion.Range = pixie.Range;
		companion.Weapon = pixie.Weapon;
		companion.Damage = pixie.Damage;
	}
	//an else statement in case they choose something other than the other three races
	else
	{
		cout << "You can blame Michael for this problem\n";
	}
	cout << "\n\n-------------------------------------------------------------------------------------\n\n";
	cout << "The journey of " << player.Name << " and " << companion.Name << " begins!!!\n\n";
	return 0;
}