
#include "Enemy.h"

#include "Player.h"

	void Enemy::Attack(Player* player)
	{
		(*player).TakeDamage(damage);
	}
	


	void Enemy::TakeDamage(int Pdamgae)
	{
		health = health - (Pdamgae - defence);
	}

	void Enemy::PrintAttack(Player* player)
	{
		cout << name << " attacked " << (*player).name << " for " << (damage - (*player).defence) << endl;
	}

	
	Enemy::Enemy(int pLevel)
	{
		int tempRand = rand() % 3 + 1;
	

		level = pLevel - tempRand;

		if (level < 0)
		{
			level = 1;
		}

		name = GenerateEnemyName();
		health = 50;

		defence = 1;
		damage = 3;

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
		cout << name << "\n\nHealth: " << health << "\nLevel : " << level << endl << "damage: " << damage  << "\narmor: " << defence << endl << endl << endl;

	}


