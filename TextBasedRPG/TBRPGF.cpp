
#include <string>
#include <iostream>
#include "TBRPGF.h"
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