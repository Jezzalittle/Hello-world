
#include "Enemy.h"

#include "Player.h"

	void Enemy::Attack(Player* player)
	{
		(*player).TakeDamage(damage);
	}
	


	void Enemy::TakeDamage(int Pdamage)
	{
		int finalDamage = Pdamage - defence;

		if (finalDamage < 0)
		{
			finalDamage = 0;
		}
		health = health - finalDamage;
	}

	void Enemy::PrintAttack(Player* player)
	{
		int finalInt = damage - (*player).defence;

		if (finalInt < 0)
		{
			finalInt = 0;
		}

		cout << name << " attacked " << (*player).name << " for " << (damage - (*player).defence) << endl;
	}

	
	Enemy::Enemy(int pLevel)
	{


		int finalRand = (rand() % 5) - (rand() % 5);

		level = pLevel + finalRand;

		if (level < 0)
		{
			level = 1;
		}

		name = GenerateEnemyName();
		health = 50;

		defence = 0;
		damage = 1;

		for (int i = 0; i < level; i++)
		{
			levelUp();
		}

	}

	void Enemy::levelUp()
	{
		health += rand() % 2 + 1;
		defence += rand() % 2 + 1;
		damage += rand() % 2 + 1;

	}



	void Enemy::PrintInfo()
	{
		cout << name << "\nHealth: " << health << "\nLevel : " << level << endl << "damage: " << damage  << "\narmor: " << defence << endl << endl << endl;

	}


