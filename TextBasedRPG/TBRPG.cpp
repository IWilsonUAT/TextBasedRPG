#include <iostream>
#include <string>
#include "TBRPGf.cpp"
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
	int Damage = Strength * Range;
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
	int Damage = Strength * Range;
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
	int Damage = Strength * Range;
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
	int Damage = Strength * Range;
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
	bool playAgain = false;
	//declaring the objects of player and companion to be accessed within the main class
	mainPlayer player;
	int x, y;
	do {
		 
		companion companion;
		int difficulty = 1;
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
		//if else if statements are being used to set up the values for the companion object AND making sure that the player and companion are not the same race to prevent being overpowered
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
		int damage = companion.Damage + player.Damage;
		int health = companion.HP + player.HP;
		string answer;
		cout << "Please choose a difficulty: 1, 2, or 3\n";
		cin >> difficulty;
		cout << "\n\n-------------------------------------------------------------------------------------\n\n";
		cout << "The journey of " << player.Name << " and " << companion.Name << " begins!!!\n\n";
		cout << "\n\n-------------------------------------------------------------------------------------\n\n";
		cout << "You and your companion, " << companion.Name << ", are in the throne room of the " << player.Race << " king.";
		bool quest = false;
		do {
			cout << " King \"I have a quest for you, should you accept there will be danger, pain, anger, and possibly even death. Do you accept?\" \nyes/no\n";
			cin >> answer;
			if (answer == "yes")
			{
				quest = true;
			}
			else if (answer == "no")
			{
				quest = false;
			}
			else if (answer == "BUTTER_FINGER")
			{
				player.Weapon = "Blade of the Gods";
				damage = INT_MAX;
			}
		} while (answer != "yes" && answer != "no");
		if (quest == true)
		{
			string library;
			if (difficulty == 1)
			{
				cout << "King \"You're quest will be as such: for the past 10 years a monster has been terrorizing a nearby village. You are to go, kill it, and bring me it's heart. ";
				cout << "This monster's name is Gregory\"\n";
				cout << "King \"The great librarian shall give you more information, if you desire\"\n";
				cout << "Great Librarian \"Would you like more information?\" \nyes/no\n";
				cin >> library;
				if (library == "yes")
				{
					cout << "Great Librarian \"Gregory is a great serpent. There is nothing terribly special about this serpent other than it is of massive size and is hard to kill.";
					cout << " The village is two spaces away from here. \"\n";
					//a great serpent 
				}
				else if (library == "no")
				{
					cout << "Great Librarian \"Very well then, carry on.\"\n";
				}
				else
				{
					cout << "Carry out on your way";
				}
				bool alive = true;
				bool boss = false;
				x = 1;
				y = 1;
				int gregory_x = 2;
				int gregory_y = 2;
				while (alive == true && boss == false)
				{
					string movement;
					cout << "Will you move up, down, left, or right?\n";
					cin >> movement;
					if (movement == "up")
					{
						up(y,difficulty);
						monster(health, damage, difficulty, player.Weapon,x,y,boss,gregory_x,gregory_y,player.Race);
						if (race == "human")
						{
							human human;
							human.HP += 50;
						}
						if (race == "dragoon")
						{
							dragoon dragoon;
							dragoon.HP += 50;
						}
						if (race == "elf")
						{
							elf elf;
							elf.HP += 50;
						}
						if (race == "pixie")
						{
							pixie pixie;
							pixie.HP += 50;
						}
					}
					if (movement == "down")
					{
						down(y, difficulty);
						monster(health, damage, difficulty, player.Weapon,x,y,boss, gregory_x, gregory_y,player.Race);
						if (race == "human")
						{
							human human;
							human.HP += 50;
						}
						if (race == "dragoon")
						{
							dragoon dragoon;
							dragoon.HP += 50;
						}
						if (race == "elf")
						{
							elf elf;
							elf.HP += 50;
						}
						if (race == "pixie")
						{
							pixie pixie;
							pixie.HP += 50;
						}
					}
					if (movement == "left")
					{
						left(x, difficulty);
						monster(health, damage, difficulty, player.Weapon,x,y,boss, gregory_x, gregory_y,player.Race);
						if (race == "human")
						{
							human human;
							human.HP += 50;
						}
						if (race == "dragoon")
						{
							dragoon dragoon;
							dragoon.HP += 50;
						}
						if (race == "elf")
						{
							elf elf;
							elf.HP += 50;
						}
						if (race == "pixie")
						{
							pixie pixie;
							pixie.HP += 50;
						}
					}
					if (movement == "right")
					{
						right(x, difficulty);
						monster(health, damage, difficulty, player.Weapon, x ,y,boss, gregory_x, gregory_y,player.Race);
						if (race == "human")
						{
							human human;
							human.HP += 50;
						}
						if (race == "dragoon")
						{
							dragoon dragoon;
							dragoon.HP += 50;
						}
						if (race == "elf")
						{
							elf elf;
							elf.HP += 50;
						}
						if (race == "pixie")
						{
							pixie pixie;
							pixie.HP += 50;
						}
					}
				}
				if (boss == true)
				{
					cout << "Congratulations you have slain the monster and retrieved its heart.\n Would you like to teleport back to the king?\nyes/no\n";
					cin >> answer;
					if (answer == "yes")
					{
						x = 1;
						y = 1;
					}
					else
					{
						cout << "Please make your way back to the king.\n";
					}
					while (x != 1 && y!= 1)
					{
						string movement;
						cout << "Will you move up, down, left, or right?\n";
						cin >> movement;
						if (movement == "up")
						{
							up(y, difficulty);
						}
						if (movement == "down")
						{
							down(y, difficulty);
						}
						if (movement == "left")
						{
							left(x, difficulty);
						}
						if (movement == "right")
						{
							right(x, difficulty);
						}
					}
					if (x == 1 && y ==1)
					{
						cout << "King \" Congrats, " << player.Name << ", you have slain the monster known as Gregory and brought me his heart. You have done well my noble knight and you shall be rewarded.\"";
						cout << "Would you like to increase your Health, Strength, or Range?(Strength and range increase your damage)\n";
						cin >> answer;
						if (answer == "Health")
						{
							if (player.Race == "human")
							{
								human human;
								human.HP += 50;
							}
							if (player.Race == "dragoon")
							{
								dragoon dragoon;
								dragoon.HP += 50;
							}
							if (player.Race == "elf")
							{
								elf elf;
								elf.HP += 50;
							}
							if (player.Race == "pixie")
							{
								pixie pixie;
								pixie.HP += 50;
							}
						}
						else if (answer == "Strength")
						{
							if (player.Race == "human")
							{
								human human;
								human.Strength += 50;
							}
							if (player.Race == "dragoon")
							{
								dragoon dragoon;
								dragoon.Strength += 50;
							}
							if (player.Race == "elf")
							{
								elf elf;
								elf.Strength += 50;
							}
							if (player.Race == "pixie")
							{
								pixie pixie;
								pixie.Strength += 50;
							}
						}
						else if (answer == "Range")
						{
							if (player.Race == "human")
							{
								human human;
								human.Range += 50;
							}
							if (player.Race == "dragoon")
							{
								dragoon dragoon;
								dragoon.Range += 50;
							}
							if (player.Race == "elf")
							{
								elf elf;
								elf.Range += 50;
							}
							if (player.Race == "pixie")
							{
								pixie pixie;
								pixie.Range += 50;
							}
						}
						cout << "Would you like to play again?\nyes/no\n";
						string temp;
						cin >> temp;
						if (temp == "yes")
						{
							playAgain = true;
						}
						else if (temp == "no")
						{
							playAgain = false;
						}
					}
				}
			}
			if (difficulty == 2)
			{
				cout << "King \"You're quest will be as such: for the past 50 years a monster has been terrorizing a nearby settlement in the great lake. You are to go, kill it, and bring me it's heart. ";
				cout << "This monster's name is Karen\"\n";
				cout << "King \"The great librarian shall give you more information, if you desire\"\n";
				cout << "Great Librarian \"Would you like more information?\" \nyes/no\n";
				cin >> library;
				if (library == "yes")
				{
					cout << "Great Librarian \"Karen is a kraken, or a giant cephalopod-like sea creature. It is covered in a slime like substance making sharp object bounce off and do very little damage. ";
					cout << "Karen is located in one the towns on south west side surrounding the great lake";
					//kraken
				}
				else if (library == "no")
				{
					cout << "Great Librarian \"Very well then, carry on.\"\n";
				}
				else
				{
					cout << "Carry out on your way";
				}
				bool alive = true;
				bool boss = false;
				x = 2;
				y = 2;
				int boss_x = 0;
				int boss_y = 0;
				while (alive == true && boss == false)
				{
					string movement;
					cout << "Will you move up, down, left, or right?\n";
					cin >> movement;
					if (movement == "up")
					{
						up(y, difficulty);
						monster(health, damage, difficulty, player.Weapon, x, y, boss, boss_x, boss_y,player.Race);
						if (race == "human")
						{
							human human;
							human.HP += 50;
						}
						if (race == "dragoon")
						{
							dragoon dragoon;
							dragoon.HP += 50;
						}
						if (race == "elf")
						{
							elf elf;
							elf.HP += 50;
						}
						if (race == "pixie")
						{
							pixie pixie;
							pixie.HP += 50;
						}
					}
					if (movement == "down")
					{
						down(y, difficulty);
						monster(health, damage, difficulty, player.Weapon, x, y, boss, boss_x, boss_y,player.Race);
						if (race == "human")
						{
							human human;
							human.HP += 50;
						}
						if (race == "dragoon")
						{
							dragoon dragoon;
							dragoon.HP += 50;
						}
						if (race == "elf")
						{
							elf elf;
							elf.HP += 50;
						}
						if (race == "pixie")
						{
							pixie pixie;
							pixie.HP += 50;
						}
					}
					if (movement == "left")
					{
						left(x, difficulty);
						monster(health, damage, difficulty, player.Weapon, x, y, boss, boss_x, boss_y,player.Race);
						if (race == "human")
						{
							human human;
							human.HP += 50;
						}
						if (race == "dragoon")
						{
							dragoon dragoon;
							dragoon.HP += 50;
						}
						if (race == "elf")
						{
							elf elf;
							elf.HP += 50;
						}
						if (race == "pixie")
						{
							pixie pixie;
							pixie.HP += 50;
						}
					}
					if (movement == "right")
					{
						right(x, difficulty);
						monster(health, damage, difficulty, player.Weapon, x, y, boss, boss_x, boss_y,player.Race);
						if (race == "human")
						{
							human human;
							human.HP += 50;
						}
						if (race == "dragoon")
						{
							dragoon dragoon;
							dragoon.HP += 50;
						}
						if (race == "elf")
						{
							elf elf;
							elf.HP += 50;
						}
						if (race == "pixie")
						{
							pixie pixie;
							pixie.HP += 50;
						}
					}
				}
				if (boss == true)
				{
					cout << "Congratulations you have slain the monster and retrieved its heart.\n Would you like to teleport back to the king?\nyes/no\n";
					cin >> answer;
					if (answer == "yes")
					{
						x = 2;
						y = 2;
					}
					else
					{
						cout << "Please make your way back to the king.\n";
					}
					while (x != 2 && y != 2)
					{
						string movement;
						cout << "Will you move up, down, left, or right?\n";
						cin >> movement;
						if (movement == "up")
						{
							up(y, difficulty);
						}
						if (movement == "down")
						{
							down(y, difficulty);
						}
						if (movement == "left")
						{
							left(x, difficulty);
						}
						if (movement == "right")
						{
							right(x, difficulty);
						}
					}
					if (x == 1 && y == 1)
					{
						cout << "King \" Congrats, " << player.Name << ", you have slain the monster known as Karen and brought me her heart. You have done well my noble knight and you shall be rewarded.\"";
						cout << "Would you like to increase your Health, Strength, or Range?(Strength and range increase your damage)\n";
						cin >> answer;
						if (answer == "Health")
						{
							if (player.Race == "human")
							{
								human human;
								human.HP += 50;
							}
							if (player.Race == "dragoon")
							{
								dragoon dragoon;
								dragoon.HP += 50;
							}
							if (player.Race == "elf")
							{
								elf elf;
								elf.HP += 50;
							}
							if (player.Race == "pixie")
							{
								pixie pixie;
								pixie.HP += 50;
							}
						}
						else if (answer == "Strength")
						{
							if (player.Race == "human")
							{
								human human;
								human.Strength += 50;
							}
							if (player.Race == "dragoon")
							{
								dragoon dragoon;
								dragoon.Strength += 50;
							}
							if (player.Race == "elf")
							{
								elf elf;
								elf.Strength += 50;
							}
							if (player.Race == "pixie")
							{
								pixie pixie;
								pixie.Strength += 50;
							}
						}
						else if (answer == "Range")
						{
							if (player.Race == "human")
							{
								human human;
								human.Range += 50;
							}
							if (player.Race == "dragoon")
							{
								dragoon dragoon;
								dragoon.Range += 50;
							}
							if (player.Race == "elf")
							{
								elf elf;
								elf.Range += 50;
							}
							if (player.Race == "pixie")
							{
								pixie pixie;
								pixie.Range += 50;
							}
						}
					}
				}
			}
			if (difficulty == 3)
			{
				cout << "King \"You're quest will be as such: for the past 100 years a monster has been roaming freely across our lands, bringing terror wherever there go. You are to go, kill it, and bring me it's heart. ";
				cout << "This monster's name is Erik\"\n";
				cout << "King \"The great librarian shall give you more information, if you desire\"\n";
				cout << "Great Librarian \"Would you like more information?\" \nyes/no\n";
				int scrollX = 4;
				int scrollY = 5;
				cin >> library;
				if (library == "yes")
				{
					cout << "Great Librarian \" Not much is confirmed about Erik, he is believed to a Manticore. He can occasionally been seen flying around the kingdom, however it is extremely hard to lure him into combat. ";
					cout << "There are a few scrolls scattered around the kingdom that have some more information on how to beat a manticore, should you decide to seek them out.\"\n";
					//manitcore
				}
				else if (library == "no")
				{
					cout << "Great Librarian \"Very well then, carry on.\"\n";
				}
				else
				{
					cout << "Carry out on your way";
				}
				bool alive = true;
				bool boss = false;
				x = 3;
				y = 3;
				int erik_x = rand()*6;
				int erik_y = rand()*6;
				while (alive == true && boss == false)
				{
					string movement;
					cout << "Will you move up, down, left, or right?\n";
					cin >> movement;
					if (movement == "up")
					{
						up(y, difficulty);
						monster(health, damage, difficulty, player.Weapon, x, y, boss, erik_x, erik_y, player.Race);
						if (race == "human")
						{
							human human;
							human.HP += 50;
						}
						if (race == "dragoon")
						{
							dragoon dragoon;
							dragoon.HP += 50;
						}
						if (race == "elf")
						{
							elf elf;
							elf.HP += 50;
						}
						if (race == "pixie")
						{
							pixie pixie;
							pixie.HP += 50;
						}
					}
					if (movement == "down")
					{
						down(y, difficulty);
						monster(health, damage, difficulty, player.Weapon, x, y, boss, erik_x, erik_y, player.Race);
						if (race == "human")
						{
							human human;
							human.HP += 50;
						}
						if (race == "dragoon")
						{
							dragoon dragoon;
							dragoon.HP += 50;
						}
						if (race == "elf")
						{
							elf elf;
							elf.HP += 50;
						}
						if (race == "pixie")
						{
							pixie pixie;
							pixie.HP += 50;
						}
					}
					if (movement == "left")
					{
						left(x, difficulty);
						monster(health, damage, difficulty, player.Weapon, x, y, boss, erik_x, erik_y, player.Race);
						if (race == "human")
						{
							human human;
							human.HP += 50;
						}
						if (race == "dragoon")
						{
							dragoon dragoon;
							dragoon.HP += 50;
						}
						if (race == "elf")
						{
							elf elf;
							elf.HP += 50;
						}
						if (race == "pixie")
						{
							pixie pixie;
							pixie.HP += 50;
						}
					}
					if (movement == "right")
					{
						right(x, difficulty);
						monster(health, damage, difficulty, player.Weapon, x, y, boss, erik_x, erik_y, player.Race);
						if (race == "human")
						{
							human human;
							human.HP += 50;
						}
						if (race == "dragoon")
						{
							dragoon dragoon;
							dragoon.HP += 50;
						}
						if (race == "elf")
						{
							elf elf;
							elf.HP += 50;
						}
						if (race == "pixie")
						{
							pixie pixie;
							pixie.HP += 50;
						}
					}
				}
				if (boss == true)
				{
					cout << "Congratulations you have slain the monster and retrieved its heart.\n Would you like to teleport back to the king?\nyes/no\n";
					cin >> answer;
					if (answer == "yes")
					{
						x = 3;
						y = 3;
					}
					else
					{
						cout << "Please make your way back to the king.\n";
					}
					while (x != 3 && y != 3)
					{
						string movement;
						cout << "Will you move up, down, left, or right?\n";
						cin >> movement;
						if (movement == "up")
						{
							up(y, difficulty);
						}
						if (movement == "down")
						{
							down(y, difficulty);
						}
						if (movement == "left")
						{
							left(x, difficulty);
						}
						if (movement == "right")
						{
							right(x, difficulty);
						}
					}
					if (x == 3 && y == 3)
					{
						cout << "King \" Congrats, " << player.Name << ", you have slain the monster known as Gregory and brought me his heart. You have done well my noble knight and you shall be rewarded.\"";
						cout << "Would you like to increase your Health, Strength, or Range?(Strength and range increase your damage)\n";
						cin >> answer;
						if (answer == "Health")
						{
							if (player.Race == "human")
							{
								human human;
								human.HP += 50;
							}
							if (player.Race == "dragoon")
							{
								dragoon dragoon;
								dragoon.HP += 50;
							}
							if (player.Race == "elf")
							{
								elf elf;
								elf.HP += 50;
							}
							if (player.Race == "pixie")
							{
								pixie pixie;
								pixie.HP += 50;
							}
						}
						else if (answer == "Strength")
						{
							if (player.Race == "human")
							{
								human human;
								human.Strength += 50;
							}
							if (player.Race == "dragoon")
							{
								dragoon dragoon;
								dragoon.Strength += 50;
							}
							if (player.Race == "elf")
							{
								elf elf;
								elf.Strength += 50;
							}
							if (player.Race == "pixie")
							{
								pixie pixie;
								pixie.Strength += 50;
							}
						}
						else if (answer == "Range")
						{
							if (player.Race == "human")
							{
								human human;
								human.Range += 50;
							}
							if (player.Race == "dragoon")
							{
								dragoon dragoon;
								dragoon.Range += 50;
							}
							if (player.Race == "elf")
							{
								elf elf;
								elf.Range += 50;
							}
							if (player.Race == "pixie")
							{
								pixie pixie;
								pixie.Range += 50;
							}
						}
						cout << "Would you like to play again?\nyes/no\n";
						string temp;
						cin >> temp;
						if (temp == "yes")
						{
							playAgain = true;
						}
						else if (temp == "no")
						{
							playAgain = false;
						}
					}
				}
			}
		}
		else if (quest == false)
		{
			string again;
			cout << "Game Over! \n";
			do {
				cout << "Would you like to play again? \ny/n\n";
				cin >> again;
				if (again == "y")
				{
					playAgain = true;
				}
				else if (again == "n")
				{
					playAgain = false;
				}
			} while (again != "y" && again != "n");
		}
		else
		{
			cout << "Blame Kat for this error";
		}
	}
	while (playAgain == true);
	return 0;
}
