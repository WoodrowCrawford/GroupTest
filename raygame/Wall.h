#pragma once
#include "Actor.h"
#include "raylib.h"


//The wall class will be used to create the "boundary" in the game

class Wall: Actor
{
public:
   Wall() {}
    
    Wall(float x, float y, float collisionRadius, char icon, float maxSpeed);

    Wall(float x, float y, float collisionRadius, Sprite* sprite, float maxSpeed);

    Wall(float x, float y, float collisionRadius, const char* spriteFilePath, float maxSpeed);


    bool getStarted() { return m_started; }

 
    Actor* getParent() { return m_parent; }

   
    MathLibrary::Vector2 getForward();

    void CreateWall1(float x, float y, float collisonRadius);

    void setForward(MathLibrary::Vector2 value);


    MathLibrary::Vector2 getWorldPosition();

    void setWorldPostion(MathLibrary::Vector2 value);

    MathLibrary::Vector2 getLocalPosition();

  
    void setLocalPosition(MathLibrary::Vector2 value);

    
    MathLibrary::Vector2 getVelocity();

    void setVelocity(MathLibrary::Vector2 value);

    
    MathLibrary::Vector2 getAcceleration();

    
    void setAcceleration(MathLibrary::Vector2 value);

    
    virtual void start();

    
    void addChild(Actor* child);

    
    bool removeChild(int index);

    
    bool removeChild(Actor* child);

    
    int getChildCount() { return m_childCount; }

    Actor** getChildren() { return m_children; }

    
    void setScale(MathLibrary::Vector2 scale);

    
    void scale(MathLibrary::Vector2 scale);

    
    void setRotation(float radians);

    
    void rotate(float radians);

    
    void lookAt(MathLibrary::Vector2 position);

   
    bool checkCollision(Actor* other);

   
    virtual void onCollision(Actor* other);

    virtual void update(float deltaTime);
    virtual void draw();
    virtual void debug();
    virtual void end();

protected:
    
    void updateFacing();

private:
    
    void updateGlobalTransform();

protected:
    MathLibrary::Matrix3* m_globalTransform;
    MathLibrary::Matrix3* m_localTransform;
    MathLibrary::Matrix3* m_rotation;
    MathLibrary::Matrix3* m_translation;
    MathLibrary::Matrix3* m_scale;
    Actor** m_children;
    MathLibrary::Vector2 m_velocity;
    MathLibrary::Vector2 m_acceleration;
    float m_maxSpeed;
    char m_icon;

private:
    bool m_started;
    float m_collisionRadius;
    Actor* m_parent;
    int m_childCount;
    Sprite* m_sprite;

	
};
