#pragma once
#include <iostream>
using namespace std;

int up(int& vertical, int difficulty)
{
	//move up
	if (vertical > 0)
	{
		vertical--;

	}
	else
	{
		cout << "You are already at the top of the map\n\n";
	}
	return vertical;
}
int left(int& horizontal, int difficulty)
{
	//move left
	if (horizontal > 0)
	{
		horizontal--;

	}
	else
	{
		cout << "You are already at the left edge of the map\n\n";
	}
	return horizontal;
}
int right(int& horizontal, int difficulty)
{
	//move right
	if (difficulty == 1)
	{
		if (horizontal < 2)
		{
			horizontal++;
			cout << horizontal << "\n";
		}
		else
		{
			cout << "You are already at the right edge of the map\n\n";
		}
	}
	if (difficulty == 2)
	{
		if (horizontal < 4)
		{
			horizontal++;
		}
		else
		{
			cout << "You are already at the right edge of the map\n\n";
		}
	}
	if (difficulty == 3)
	{
		if (horizontal < 6)
		{
			horizontal++;
		}
		else
		{
			cout << "You are already at the right edge of the map\n\n";
		}
	}
	return horizontal;
}
int down(int& vertical, int difficulty)
{
	//move down
	if (difficulty == 1)
	{
		if (vertical <= 2)
		{
			vertical++;

		}
		else
		{
			cout << "You are already at the bottom of the map\n\n";
		}
	}
	if (difficulty == 2)
	{
		if (vertical <= 4)
		{
			vertical++;
		}
		else
		{
			cout << "You are already at the bottom of the map\n\n";
		}
	}
	if (difficulty == 3)
	{
		if (vertical <= 6)
		{
			vertical++;
		}
		else
		{
			cout << "You are already at the bottom of the map\n\n";
		}
	}
	return vertical;
}
int monster(int& health, int& damage, int& difficulty, string& weapon, int& x, int& y, bool& boss, int& boss_x, int& boss_y, string& race)
{
	if (difficulty == 1)
	{
		string answer;
		if (x != boss_x && y != boss_y)
		{
			int chance = rand() % 4;
			int monster_health = rand() % 5000 + 2000;
			if (chance == 1)
			{
				cout << "A monster has come into your path.";

				while (monster_health > 0)
				{
					cout << "Do you attack?\n yes/no\n";
					cin >> answer;
					if (answer == "yes")
					{
						cout << "You attacked with your " << weapon << " and did " << damage << " damage to the monster.\n";
						monster_health -= damage;
						if (monster_health <= 0)
						{
							cout << "You killed the monster, way to go\n";

						}
						else
						{
							cout << "The monster counter attacked and dealt 10 points of damage.\n";
							health = health - 10;
							cout << "Your teams health: " << health << "\nThe monsters health: " << monster_health << "\n";
						}
					}
					else if (answer == "no")
					{
						cout << "You did not attack.\n";
						cout << "However the monster still attacked you dealing 10 points of damage.\n";
						health = health - 10;
						cout << "Your teams health: " << health << "\nThe monsters health: " << monster_health << "\n";
					}
				}
			}
			else
			{
				cout << "No monster appeared before you.\n";
			}
		}
		else if (x == 2 && y == 2)
		{
			int monster_health = 10000;
			cout << "!!You have found the Great Serpent Gregory!!\n";
			while (monster_health > 0)
			{
				cout << "Will you attack? \nyes/no\n";
				cin >> answer;

				if (answer == "yes")
				{
					cout << "You attacked with your " << weapon << " and did " << damage << " damage to the monster.\n";
					monster_health -= damage;
					if (monster_health <= 0)
					{
						cout << "You killed the monster, way to go\n";
						cout << "You cut out his heart so you can take it back to the king.\n";
						boss = true;
					}
					else
					{

						cout << "The monster counter attacked and dealt 10 points of damage.\n";
						health = health - 20;
						cout << "Your teams health: " << health << "\nThe monsters health: " << monster_health << "\n";
					}
				}
				else if (answer == "no")
				{
					cout << "You did not attack.\n";
					cout << "However the monster still attacked you dealing 20 points of damage.\n";
					health = health - 20;
					cout << "Your teams health: " << health << "\nThe monsters health: " << monster_health << "\n";
				}
			}
		}
	}
	if (difficulty == 2)
	{
		int chance = rand() % 2;
		int monster_health = rand() % 10000 + 5000;
		string answer;
		if (x != boss_x && y != boss_y)
		{
			if (chance == 1)
			{
				cout << "A monster has come into your path.";
				while (monster_health > 0)
				{
					cout << "Do you attack?\n yes/no\n";
					cin >> answer;
					if (answer == "yes")
					{
						cout << "You attacked with your " << weapon << " and did " << damage << " damage to the monster.\n";
						monster_health -= damage;
						if (monster_health == 0)
						{
							cout << "You killed the monster, way to go\n";
						}
						else
						{
							cout << "The monster counter attacked and dealt 50 points of damage.\n";
							health = health - 50;
							cout << "Your teams health: " << health << "\nThe monsters health: " << monster_health << "\n";
						}
					}
					else if (answer == "no")
					{
						cout << "You did not attack.\n";
						cout << "However the monster still attacked you dealing 50 points of damage.\n";
						health = health - 50;

					}
				}
			}
			else
			{
				cout << "No monster appeared before you.\n";
			}
		}
		if (x == boss_x && y == boss_y)
		{
			//create Karen
			monster_health = 30000;
			cout << "!!You have found Karen, The Kraken!!\n";
			while (monster_health > 0)
			{
				cout << "Will you attack? \nyes/no\n";
				cin >> answer;

				if (answer == "yes")
				{
					cout << "You attacked with your " << weapon << " and did " << damage << " damage to the monster.\n";
					monster_health -= damage;
					if (monster_health <= 0)
					{
						cout << "You killed the monster, way to go\n";
						cout << "You cut out his heart so you can take it back to the king.\n";
						boss = true;
					}
					else
					{

						cout << "The monster counter attacked and dealt 10 points of damage.\n";
						health = health - 75;
						cout << "Your teams health: " << health << "\nThe monsters health: " << monster_health << "\n";
					}
				}
				else if (answer == "no")
				{
					cout << "You did not attack.\n";
					cout << "However the monster still attacked you dealing 20 points of damage.\n";
					health = health - 75;
					cout << "Your teams health: " << health << "\nThe monsters health: " << monster_health << "\n";
				}
			}
		}
	}
	if (difficulty == 3)
	{
		int chance = 1;
		int monster_health = rand() % 20000 + 10000;
		string answer;
		if (chance == 1)
		{
			cout << "A monster has come into your path.";
			cout << "Do you attack?\n yes/no\n";
			cin >> answer;
			if (answer == "yes")
			{
				cout << "You attacked with your " << weapon << " and did " << damage << " damage to the monster.\n";
				monster_health -= damage;
				if (monster_health <= 0)
				{
					cout << "You killed the monster, way to go";
				}
				else
				{
					cout << "The monster counter attacked and dealt 100 points of damage.\n";
					health = health - 100;
				}
			}
			else if (answer == "no")
			{
				cout << "You did not attack.\n";
				cout << "However the monster still attacked you dealing 75 points of damage.\n";
				health = health - 75;
			}
		}
		else
		{
			cout << "No monster appeared before you.\n";
		}
	}
	return health;
}