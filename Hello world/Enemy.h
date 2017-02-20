#pragma once

#include <String>
#include <iostream>

#include "NameGenerator.h"


using namespace std;
class Player;

class Enemy
{
public:
	string name = GenerateEnemyName();

	int health;
	
	void PrintInfo();

	void Attack(int damage, Player player);

	int TakeDamage(int damage);


};
