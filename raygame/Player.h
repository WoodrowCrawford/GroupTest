#pragma once
#include "Actor.h"
#include "Sprite.h"
class Player :public Actor
{
public:
	Player();
	Player(float health, float x, float y, float collisionRadius,  float maxSpeed);

	float takeDamage(float damageAmount);

	float getHealth() { return m_health; }

	void setLocalPosition(MathLibrary::Vector2 value);



	virtual void onCollision(Actor* other);
	virtual void update(float deltaTime);
	virtual void draw();
	virtual void debug();

	
private:
	float m_health;
	Sprite m_sprite;
};
