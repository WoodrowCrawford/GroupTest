#include "Weapon.h"


Weapon::Weapon()
{
	m_damage = 1;
}

Weapon::Weapon(float damage, float health)
{
	m_damage = damage;
}

void Weapon::attack(Weapon* other)
{
	other->takeDamage(getDamage());
}

float Weapon::takeDamage(float damageAmount)
{
	m_health -= damageAmount;
	return damageAmount;
}