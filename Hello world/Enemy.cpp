
#include "Enemy.h"

#include "Player.h"

	void Enemy::Attack(int damage, Player player)
	{
		player.TakeDamage(damage);
	}
	
	int Enemy::TakeDamage(int damage)
	{
		health = health - damage;
		return health;
	}
	
	void Enemy::PrintInfo()
	{
		cout << name << "\nHealth: " << health << "\nKills: " << endl << endl;
	}


