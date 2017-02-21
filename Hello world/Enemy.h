#pragma once

#include <String>
#include <iostream>
#include "NameGenerator.h"


using namespace std;
class Player;

class Enemy
{
public:

	Enemy();
	Enemy(int level);
	~Enemy();

	string name = GenerateEnemyName();
	int health;
	int level;
	int defence;
	int damage;

	void levelUp(int level);

	void PrintInfo();

	void Attack(int damage, Player player);

	void TakeDamage(int damage);


};
