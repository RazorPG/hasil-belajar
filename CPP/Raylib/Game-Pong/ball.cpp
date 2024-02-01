class Ball
{
    friend class ComPaddle;

private:
    float x, y;
    int speed_x, speed_y;
    int radius;

public:
    Ball(float, float, int, int, int);
    float getX();
    float getY();
    float getRadius();
    float getSpeedX();
    void setSpeedX(float);
    void Draw();
    void Update();
    void resetBall();
};
Ball *ball;