#include "Player.h"
#include "raylib.h"


Player::Player()
{
	m_health = 100;
}

Player::Player(float health)
{
	m_health = health;
}

//Need to add sprite
Player::Player(float health, float x, float y, float collisionRadius, float maxSpeed)
{
	m_health = 100;
	x = 10;
	y = 20;
	collisionRadius = 2;
	m_maxSpeed = 3;
	
}

float Player::takeDamage(float damageAmount)
{
	m_health -= damageAmount;
	return damageAmount;
}