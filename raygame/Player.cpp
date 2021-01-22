#include "Player.h"
#include "raylib.h"


Player::Player()
{
	m_health = 100;
}



//Need to add sprite
Player::Player(float health, float x, float y, float collisionRadius,  float maxSpeed)
{
	m_health = 100;
	x;
	y;
	collisionRadius = 2;
	m_maxSpeed = 3;
	m_globalTransform = new MathLibrary::Matrix3();
	m_localTransform = new MathLibrary::Matrix3();
	m_rotation = new MathLibrary::Matrix3();
	m_translation = new MathLibrary::Matrix3();
	m_scale = new MathLibrary::Matrix3();
	setLocalPosition(MathLibrary::Vector2(x, y));
	m_velocity = MathLibrary::Vector2();
	m_maxSpeed = maxSpeed;

	m_sprite = Sprite("Images/Player.png");
}

float Player::takeDamage(float damageAmount)
{
	m_health -= damageAmount;
	return damageAmount;
}





void Player::setLocalPosition(MathLibrary::Vector2 value)
{
}



void Player::onCollision(Actor* other)
{
	
}

void Player::update(float deltaTime)
{
}



void Player::draw()
{
	BeginDrawing();
	
	DrawRectangle(5, 30, 1, 800, ORANGE);
	
	
}

void Player::debug()
{
}


