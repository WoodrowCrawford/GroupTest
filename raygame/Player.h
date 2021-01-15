#pragma once
class Player
{
public:
	Player();
	Player(float health);

	float takeDamage(float damageAmount);

	float getHealth() { return m_health; }

private:
	float m_health;
};
