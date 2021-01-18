#pragma once
#include "Actor.h"
class Player : Actor
{
public:
	Player();
	Player(float health);
	Player(float health, float x, float y, float collisionRadius, float maxSpeed);

	float takeDamage(float damageAmount);

	float getHealth() { return m_health; }

private:
	float m_health;
};
