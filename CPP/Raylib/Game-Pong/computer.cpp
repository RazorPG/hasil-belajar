
#include "player.hpp"
#include "ball.hpp"
#include "global.hpp"

class ComPaddle : public Paddle
{
public:
    ComPaddle(float, float, int) : Paddle(width, height, speed) {}
    void Update(const Ball &);
    void Draw();
};

ComPaddle *computer;