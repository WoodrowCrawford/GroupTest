#include "Player.h"
#include "raylib.h"


Player::Player()
{
	m_health = 100;
}



//Need to add sprite
Player::Player(float health, float x, float y, float collisionRadius, Sprite* sprite, float maxSpeed)
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