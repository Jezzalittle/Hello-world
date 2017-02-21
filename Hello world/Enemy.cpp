
#include "Enemy.h"

#include "Player.h"

	void Enemy::Attack(int damage, Player player)
	{
		player.TakeDamage(damage);
	}
	
	void Enemy::TakeDamage(int damgae)
	{
		health = health - (damage - defence);
	}
	
	Enemy::Enemy(int pLevel)
	{
		int tempRand = rand() % 3 + 1;

		level = pLevel - tempRand;

		name = GenerateEnemyName();
		health = 

		defence;
		damage;
	}

	void Enemy::levelUp(int level)
	{
		health += rand() % 2 + 1;
		defence += rand() % 2 + 1;
		damage +=
	}

	Enemy::Enemy()
	{
	}

	void Enemy::PrintInfo()
	{
		cout << name << "\nHealth: " << health << endl << endl;
	}


