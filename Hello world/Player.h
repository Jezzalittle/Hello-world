#pragma once

#include <String>
#include <iostream>
#include "Utility.h"


using namespace std;

class Enemy;

class Player
{
public:

	string name;

	int health = 100;

	int kills;

	V2 pos;

	V2 velocity;
	
	void PrintInfo()
	{
		cout << name << "\nHealth: " << health << "\nKills: " << kills << endl << endl;
	}
	int TakeDamage(int damage);

	void Attack(int damage, Enemy& enemy);
};