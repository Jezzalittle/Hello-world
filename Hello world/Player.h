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


	string name;
	int health;
	int kills;
	int level;
	int damage;
	int defence;

	

	void PrintInfo();

	void TakeDamage(int damage);

	void Player::PrintAttack(Enemy* player);

	void Attack(Enemy* enemy);
};