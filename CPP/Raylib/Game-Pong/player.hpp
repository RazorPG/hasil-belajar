#ifndef __PLAYER
#define __PLAYER

#include <raylib.h>
#include "global.hpp"

Color red;
Color green;
Color black;
Color gray;

class Paddle
{
protected:
    float x, y;
    float width, height;
    int speed;

    void limitMovement()
    {
        if (y <= 0)
        {
            this->y = 0;
        }

        else if (y + this->height >= screenHeight)
        {
            this->y = screenHeight - this->height;
        }
    }

public:
    Paddle(float width, float height, int speed)
    {
        this->width = width;
        this->height = height;
        this->speed = speed;
    }

    void setPos(float x, float y)
    {
        this->x = x;
        this->y = y;
    }

    float getXPos()
    {
        return this->x;
    }

    float getYPos()
    {
        return this->y;
    }

    float getWidth()
    {
        return this->width;
    }

    float getHeight()
    {
        return this->height;
    }

    void Draw()
    {
        DrawRectangleRounded(Rectangle{x, y, width, height}, 0.8, 0, green);
    }

    void Update()
    {
        if (IsKeyDown(KEY_W) || IsKeyDown(KEY_UP))
        {
            this->y -= this->speed;
        }
        else if (IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN))
        {
            this->y += this->speed;
        }
        limitMovement();
    }
};
Paddle *player = new Paddle(25, 120, 10);
#endif