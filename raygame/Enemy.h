#pragma once
class Enemy
{
public:
	Enemy();
	Enemy(float health, float damage);

	void attack(Enemy* other);
	float takeDamage(float damageAmount);

	float getDamage() { return m_damage; }
	float getHealth() { return m_health; }

private:
	float m_health;
	float m_damage;
};
