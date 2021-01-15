#include "Enemy.h"

Enemy::Enemy()
{
	m_health = 100;
	m_damage = 1;
}

Enemy::Enemy(float health, float damage)
{
	m_health = health;
	m_damage = damage;
}

void Enemy::attack(Enemy* other)
{
	other->takeDamage(getDamage());
}

float Enemy::takeDamage(float damageAmount)
{
	m_health -= damageAmount;
	return damageAmount;
}

