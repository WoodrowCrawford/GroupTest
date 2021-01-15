#include "Player.h"


Player::Player()
{
	m_health = 100;
}

Player::Player(float health)
{
	m_health = health;
}

float Player::takeDamage(float damageAmount)
{
	m_health -= damageAmount;
	return damageAmount;
}