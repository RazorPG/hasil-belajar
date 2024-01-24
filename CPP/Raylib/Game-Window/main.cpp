#include "raylib.h"
#include <unistd.h>

using namespace std;

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "birjon adventure");

    // Inisialisasi karakter pemain
    Rectangle player = {0, screenHeight - 50.0f, 50.0f, 50.0f};
    Rectangle obstacle = {300, 500, 100, 100};

    // const char *textToDisplay = "GAME OVER!!";
    const char *textTest = "GameDev razor";
    Color playerColor = BLUE;
    Color obstacleColor = RED;
    Color borderColor = DARKGRAY;
    float gravity = 10.0f;
    // float gameOverTimer = 5.0f;
    // bool gameover = false;
    bool spaceTurn = false;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        // Logika permainan

        if (player.x < 0)
        {
            player.x = 0;
        }
        else if (player.x > 750)
        {
            player.x = 750;
        }

        // if (player.x + 50 >= obstacle.x)
        // {
        //     gameover = true;
        // }

        if (player.y >= screenHeight - player.height)
        {
            player.y = screenHeight - player.height;
        }

        if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT))
        {
            player.x -= 10.0f;
        }
        else if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT))
        {
            player.x += 10.0f;
        }
        if (player.y == screenHeight - 50.0f)
        {
            if ((IsKeyDown(KEY_SPACE)))
            {
                spaceTurn = true;
            }
        }

        // cek collision obstacle
        if (CheckCollisionRecs(player, obstacle))
        {
            if (player.x + player.width > obstacle.x && player.x < obstacle.x)
            {
                // Collision from the left side
                player.x = obstacle.x - player.width;
            }
            else if (player.x < obstacle.x + obstacle.width && player.x + player.width > obstacle.x + obstacle.width)
            {
                // Collision from the right side
                player.x = obstacle.x + obstacle.width;
            }

            if (player.y + player.height > obstacle.y && player.y < obstacle.y)
            {
                // Collision from the top side
                player.y = obstacle.y - player.height;
            }
            else if (player.y < obstacle.y + obstacle.height && player.y + player.height > obstacle.y + obstacle.height)
            {
                // Collision from the bottom side
                player.y = obstacle.y + obstacle.height;
            }
        }

        if (player.y > screenHeight - 200 && spaceTurn == true)
        {
            player.y -= gravity;
        }
        else
        {
            spaceTurn = false;
            player.y += gravity;
        }
        // Menggambar
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Menggambar karakter pemain
        DrawRectangleRec(player, playerColor);
        DrawRectangleRec(obstacle, obstacleColor);
        DrawRectangleLinesEx(obstacle, 2, borderColor);

        // if (gameover)
        // {
        //     // Hitung lebar teks
        //     float textWidth = MeasureText(textToDisplay, 50);

        //     // Gambar teks "GAME OVER!!" di tengah layar
        //     DrawText(textToDisplay, screenWidth / 2 - textWidth / 2, screenHeight / 2, 50, BLACK);
        //     gameOverTimer -= GetFrameTime();
        //     if (gameOverTimer <= 0)
        //     {
        //         CloseWindow();
        //     }
        // }
        DrawText(textTest, 0, 0, 20, GREEN);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
