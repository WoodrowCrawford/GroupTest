#include <cmath>
#include "Wall.h"
#include "raylib.h"



void Wall::addWall(float collisionRadius)
{
	BeginDrawing;
	DrawRectangle(20, 20, 150, 150, BLUE);
	collisionRadius = 2;
	EndDrawing;
}

bool Actor::checkCollision(Actor* other)
{
	float distance = (other->getWorldPosition() - getWorldPosition()).getMagnitude();
	return distance <= m_collisionRadius + other->m_collisionRadius;
}

void Actor::onCollision(Actor* other)
{
	
}


