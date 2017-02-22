
#include "Player.h"

#include "Enemy.h"


void Player::TakeDamage(int Edamage)
{
	health = health - (Edamage - defence);

}

void Player::PrintAttack(Enemy* enemy)
{
	cout << name << " attacked " << (*enemy).name << " for " << (damage - (*enemy).defence) << endl;
}

Player::Player()
{
	health = 50;
	kills = 0;
	level = 0;
	damage = 10;
	defence = 2;
}

void Player::PrintInfo()
{
	cout << name << "\n\nHealth: " << health << "\nLevel : " << level << endl << "damage: " << damage << endl << "armor: " << defence << endl << endl << endl;
}

void Player::Attack(Enemy* enemy)
{
	(*enemy).TakeDamage(damage);
}