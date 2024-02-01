
class Paddle
{
protected:
    float x, y;
    float width, height;
    int speed;

    void limitMovement();

public:
    Paddle(float width, float height, int speed);

    void setPos(float x, float y);

    float getXPos();

    float getYPos();

    float getWidth();

    float getHeight();

    void Draw();

    void Update();
};
Paddle *player;
