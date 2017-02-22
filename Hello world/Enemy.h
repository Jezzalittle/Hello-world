#pragma once

#include <String>
#include <iostream>
#include "NameGenerator.h"


using namespace std;
class Player;

class Enemy
{
public:

	
	Enemy(int level);


	string name = GenerateEnemyName();
	int health;
	int level;
	int defence;
	int damage;

	void levelUp();

	void PrintInfo();

	void Attack(Player* player);

	void PrintAttack(Player* player);

	void TakeDamage(int damage);


};
