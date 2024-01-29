#include "raylib.h"

#define gravity 10
#define speed 5
#define jump 5

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "birjon adventure");

    // Inisialisasi karakter pemain
    Rectangle player = {0, screenHeight - 50.0f, 50.0f, 50.0f};
    Rectangle obstacle = {300, 500, 200, 100};

    // const char *textToDisplay = "GAME OVER!!";
    const char *textTest = "GameDev razor";
    Color playerColor = BLUE;
    Color obstacleColor = RED;
    Color borderColor = DARKGRAY;
    float jumpHeight = 200.f;
    // float gameOverTimer = 5.0f;
    // bool gameover = false;
    bool spaceTurn = false;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        // border kiri kanan game
        if (player.x < 0)
        {
            player.x = 0;
        }
        else if (player.x > 750)
        {
            player.x = 750;
        }
        // border agar player tidak menembus ke bawah tanah
        if (player.y >= screenHeight - player.height)
        {
            player.y = screenHeight - player.height;
        }

        // tombol maju mundur dan melompat
        if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT))
        {
            player.x -= 5.0f;
        }
        else if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT))
        {
            player.x += 5.0f;
        }
        if (player.y <= screenHeight)
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
                // ada border di sebelam kiri obstacle
                player.x = obstacle.x - player.width;
            }
            else if (player.x < obstacle.x + obstacle.width && player.x + player.width > obstacle.x + obstacle.width)
            {
                // ada border di sebelah kanan obstacle
                player.x = obstacle.x + obstacle.width;
            }

            else if (player.y + player.height > obstacle.y && player.y < obstacle.y)
            {
                if ((IsKeyDown(KEY_SPACE)))
                {
                    spaceTurn = true;
                }
                // ada border di sebelah atas obstacle
                player.y = obstacle.y - player.width;
            }
        }

        if (player.y > screenHeight - jumpHeight && spaceTurn == true)
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
        DrawRectangleLinesEx(obstacle, 1, borderColor);
        DrawRectangleLinesEx(player, 1, BLACK);

        DrawText(textTest, 0, 0, 20, GREEN);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
