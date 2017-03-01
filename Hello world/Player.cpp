
#include "Player.h"

#include "Enemy.h"


void Player::TakeDamage(int Edamage)
{
	int finalDamage = Edamage - defence;

		if (finalDamage < 0)
		{
			finalDamage = 0;
		}
	health -= finalDamage;

}

void Player::PrintAttack(Enemy* enemy)
{
	cout << name << " attacked " << (*enemy).name << " for " << (damage - (*enemy).defence) << endl;
}

Player::Player()
{
	health = 50;
	maxHealth = 50;
	kills = 0;
	level = 0;
	damage = 5;
	defence = 2;
	xp = 0;
	maxXp = 0;
}

void Player::PrintInfo()
{
	cout << name << "\nHealth: " << health << "\nLevel : " << level << endl << "damage: " << damage << endl << "armor: " << defence << endl << "XP: " << xp << "\\" << maxXp << endl << endl;
}

void Player::Attack(Enemy* enemy)
{
	(*enemy).TakeDamage(damage);
}

void Player::gainXp(Enemy* a_enemy)
{
	xp += a_enemy->level ^ 2;
	while (xp >= maxXp)
	{
		xp = xp - maxXp;
		cout << "\nLevel Up\n\n";
		levelUp();

	}

}

void Player::levelUp()
{	
	int plusHealth = rand() % 2 + 1;
	int	plusDefence = rand() % 2 + 1;
	int	plusDamage = rand() % 2 + 1;

	maxHealth += plusHealth;
	cout << "Health +" << plusHealth << endl;
	defence += plusDefence;
	cout << "Defence +" << plusDefence << endl;
	damage += plusDamage;
	cout << "Damage +" << plusDamage << endl << endl;
	level++;
	maxXp = level ^ 3;
	health = maxHealth;
}