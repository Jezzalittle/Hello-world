
#include "Player.h"

#include "Enemy.h"


int Player::TakeDamage(int damage)
{
	health = health - damage;
	return health;
}

void Player::Attack(int damage, Enemy& enemy)
{
	int enemyHp = 0;
	enemyHp = enemy.TakeDamage(damage);
}