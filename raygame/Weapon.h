#pragma once
class Weapon
{
public:
	Weapon();
	Weapon(float damage);

	float getDamage() { return m_damage; }

private:
	float m_damage;
};