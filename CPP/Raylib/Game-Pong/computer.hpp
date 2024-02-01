#ifndef __COMPUTER
#define __COMPUTER

#include "player.hpp"
#include "ball.hpp"
#include "global.hpp"

Color red = Color{244, 49, 91, 255};
Color green = Color{122, 244, 221, 255};
Color black = Color{45, 45, 45, 255};
Color gray = Color{137, 137, 137, 255};

class ComPaddle : public Paddle
{
public:
    ComPaddle(float width, float height, int speed) : Paddle(width, height, speed) {}
    void Update(const Ball &obj)
    {
        if (this->y + this->height / 2 > obj.y)
        {
            delay += 0.5;
            if (delay >= 1)
            {
                delay = 0;
                this->y -= this->speed;
            }
        }
        else if (this->y + this->height / 2 < obj.y)
        {
            delay += 0.5;
            if (delay >= 1)
            {
                delay = 0;
                this->y += this->speed;
            }
        }

        this->limitMovement();
    }
    void Draw()
    {
        DrawRectangleRounded(Rectangle{x, y, width, height}, 0.8, 0, red);
    }
};

ComPaddle *computer = new ComPaddle(25, 120, 10);

#endif // COMPUTER_HPP
