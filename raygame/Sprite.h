#pragma once

class Texture2D;

class Sprite
{
public:
    Sprite() {}

    /// <summary>
    /// Loads the given texture
    /// </summary>
    /// <param name="texture">Sets the sprites image to be the given texture</param>
    Sprite(Texture2D* texture);

    /// <summary>
    /// Loads the texture at the given path
    /// </summary>
    /// <param name="path">The file path of the texture</param>
    Sprite(const char* path);

    /// <summary>
    /// Returns the width of the Sprite
    /// </summary>
    int getWidth();

    /// <summary>
    /// Returns the width of the Sprite
    /// </summary>
    void setWidth(int value);

    /// <summary>
    /// Returns the height of the Sprite
    /// </summary>
    int getHeight();

    /// <summary>
    /// Returns the height of the Sprite
    /// </summary>
    void setHeight(int value);

    /// <summary>
    /// Draws the sprite using the rotation, translation, and scale
    /// of the given transform
    /// </summary>
    /// <param name="transform"></param>
    void draw(MathLibrary::Matrix3 transform);

private:
    Texture2D* m_texture;
};

