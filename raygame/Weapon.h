#pragma once

class Weapon
{
public:
	Weapon();
	Weapon(float damage, float health);

	void attack(Weapon* other);
	float takeDamage(float damageAmount);

	float getDamage() { return m_damage; }
	float getHealth() { return m_health; }



private:
	float m_damage;
	float m_health;
};