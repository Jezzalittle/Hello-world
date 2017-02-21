
#include "Player.h"

#include "Enemy.h"


int Player::TakeDamage(int damage)
{
	health = health - (damage - defence);
	return health;
}

Player::Player()
{
	health = 50;
	kills = 0;
	level = 0;
	damage = 10;
	defence = 2;
}


void Player::Attack(Enemy& enemy)
{
	enemy.TakeDamage(damage);
}