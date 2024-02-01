#include <raylib.h>
#include "ball.hpp"
#include "player.hpp"
#include "computer.hpp"
#include "global.hpp"

int main()
{
    InitWindow(screenWidth, screenHeight, "My Pong Game!");
    SetTargetFPS(60);

    player->setPos(screenWidth - player->getWidth() - 15, screenHeight / 2 - player->getHeight() / 2);
    computer->setPos(15, screenHeight / 2 - computer->getHeight() / 2);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        // Updating
        ball->Update();
        player->Update();
        computer->Update(*ball);

        // checking for collisions
        if (CheckCollisionCircleRec(Vector2{ball->getX(), ball->getY()}, ball->getRadius(), Rectangle{player->getXPos(), player->getYPos(), player->getWidth(), player->getHeight()}))
        {
            ball->setSpeedX(ball->getSpeedX() * -1);
        }
        else if (CheckCollisionCircleRec(Vector2{ball->getX(), ball->getY()}, ball->getRadius(), Rectangle{computer->getXPos(), computer->getYPos(), computer->getWidth(), computer->getHeight()}))
        {
            ball->setSpeedX(ball->getSpeedX() * -1);
        }

        // drawing
        ClearBackground(black);
        DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, WHITE);
        ball->Draw();
        player->Draw();
        computer->Draw();
        DrawText(TextFormat("%i", computerScore), screenWidth / 4 - 20, 20, 80, red);
        DrawText(TextFormat("%i", playerScore), 3 * screenWidth / 4 - 20, 20, 80, green);

        if (playerScore == 10 || computerScore == 10)
        {
            CloseWindow();
        }
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
