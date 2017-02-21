#pragma once

#include <String>
#include <iostream>
#include "Utility.h"


using namespace std;

class Enemy;

class Player
{
public:

	Player();
	~Player();

	string name;
	int health;
	int kills;
	int level;
	int damage;
	int defence;

	

	void PrintInfo()
	{
		cout << name << "\nHealth: " << health << "\nKills: " << kills << endl << endl;
	}
	int TakeDamage(int damage);

	void Attack(Enemy& enemy);
};