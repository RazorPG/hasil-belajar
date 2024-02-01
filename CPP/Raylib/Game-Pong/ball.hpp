#ifndef __BALL
#define __BALL

#include <raylib.h>
#include "global.hpp"

Color red = Color{244, 49, 91, 255};
Color green = Color{122, 244, 221, 255};
Color black = Color{45, 45, 45, 255};
Color gray = Color{137, 137, 137, 255};

class Ball
{
    friend class ComPaddle;

private:
    float x, y;
    int speed_x, speed_y;
    int radius;

public:
    Ball(float x, float y, int radius, int speed_x, int speed_y)
    {
        this->radius = radius;
        this->x = x;
        this->y = y;
        this->speed_x = speed_x;
        this->speed_y = speed_y;
    }

    float getX()
    {
        return this->x;
    }

    float getY()
    {
        return this->y;
    }

    float getRadius()
    {
        return this->radius;
    }

    float getSpeedX()
    {
        return this->speed_x;
    }

    void setSpeedX(float speed_x)
    {
        this->speed_x = speed_x;
    }

    void Draw()
    {
        DrawCircle(x, y, radius, gray);
    }

    void Update()
    {
        this->x += this->speed_x;
        this->y += this->speed_y;

        if (y + radius >= GetScreenHeight() || y - radius <= 0)
        {
            speed_y *= -1;
        }

        if (x + radius >= GetScreenWidth())
        {
            computerScore++;
            resetBall();
        }
        else if (x - radius <= 0)
        {
            playerScore++;
            resetBall();
        }
    }

    void resetBall()
    {
        this->x = GetScreenWidth() / 2;
        this->y = GetScreenHeight() / 2;

        int speedChoices[2] = {-1, 1};
        speed_x *= speedChoices[GetRandomValue(0, 1)];
        speed_y *= speedChoices[GetRandomValue(0, 1)];
    }
};
Ball *ball = new Ball(screenWidth / 2, screenHeight / 2, 20, 11, 11);

#endif