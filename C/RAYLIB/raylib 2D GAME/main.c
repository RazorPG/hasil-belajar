#include "raylib.h"
#include "raymath.h"

#define screenWidth 1280
#define screenHeight 720
#define scarfySpeed 5
#define gravity 1
#define jumpUpFrame 3
#define jumpDownFrame 4

typedef struct
{
    Texture2D skin;
    Rectangle frameRec;
    Vector2 playerPosition;
    Vector2 playerVelocity;
} Player;
Player scarfy;

typedef struct
{
    Texture2D skin;
    Rectangle frame;
    Vector2 ObstaclePosision;
} Obstacle;
Obstacle platform1, ground;

bool isScarfyOnGround(Player *scarfy, Obstacle *ground);
bool isScarfyOnObstacle(Player *scarfy, Obstacle *platform1);

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------

    InitWindow(screenWidth, screenHeight, "Birjon Adventure");
    InitAudioDevice();

    Texture2D aset = LoadTexture("aset-game.png");

    scarfy.skin = LoadTexture("scarfy.png");
    scarfy.frameRec = (Rectangle){0.0f, 0.0f, (float)scarfy.skin.width / 6, (float)scarfy.skin.height};
    scarfy.playerPosition = (Vector2){0.7 * screenWidth / 2, screenHeight - scarfy.skin.height};
    scarfy.playerVelocity = (Vector2){0.0f, 0.0f};

    platform1.skin = aset;
    platform1.frame = (Rectangle){0.0f, 700.0f, (float)platform1.skin.width * 0.3, (float)platform1.skin.height / 6};
    platform1.ObstaclePosision = (Vector2){0, screenHeight * 0.7f};

    ground.skin = aset;
    ground.frame = (Rectangle){0.0f, 655.0f, (float)platform1.skin.width * 0.9, (float)platform1.skin.height / 4};
    ground.ObstaclePosision = (Vector2){-35.0f, 3.6 * screenHeight / 4};

    Sound footStepSound = LoadSound("Single-footstep-in-grass-A-www.fesliyanstudios.com.mp3");
    Sound landingSound = LoadSound("Single-footstep-in-grass-B-www.fesliyanstudios.com.mp3");

    unsigned numFrame = 6;
    unsigned frameDelay = 5;
    unsigned frameDelayConter = 0;
    unsigned frameIndex = 0;

    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose())
    {

        // logika move karakter
        if (isScarfyOnGround(&scarfy, &ground))
        {
            if (IsKeyPressed(KEY_SPACE))
            {
                scarfy.playerVelocity.y = -3.5 * scarfySpeed;
            }
            if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D))
            {
                scarfy.playerVelocity.x = scarfySpeed;
                if (scarfy.frameRec.width < 0)
                {
                    scarfy.frameRec.width = -scarfy.frameRec.width;
                }
            }
            else if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A))
            {
                scarfy.playerVelocity.x = -scarfySpeed;
                if (scarfy.frameRec.width > 0)
                {
                    scarfy.frameRec.width = -scarfy.frameRec.width;
                }
            }
            else
            {
                scarfy.playerVelocity.x = 0;
            }
        }
        // ngecek apakah karakter bergerak atau tidaknya
        bool scarfyMoving = scarfy.playerVelocity.x != 0.0f || scarfy.playerVelocity.y != 0.0f;

        // jika bergerak maka nilai posisi x karakter berubah
        scarfy.playerPosition = Vector2Add(scarfy.playerPosition, scarfy.playerVelocity);
        bool scarfyIsOnGround = isScarfyOnGround(&scarfy, &ground);

        if (scarfyIsOnGround)
        {
            scarfy.playerVelocity.y = 0;
            scarfy.playerPosition.y = ground.ObstaclePosision.y - scarfy.skin.height;
        }
        else
        {
            PlaySound(landingSound);
            scarfy.playerVelocity.y += gravity;
        }

        // membuat delay karakter
        ++frameDelayConter;
        if (frameDelayConter > frameDelay)
        {
            frameDelayConter = 0;
            if (scarfyMoving == true)
            {
                if (scarfyIsOnGround)
                {
                    frameIndex++;
                    frameIndex %= numFrame;

                    if (frameIndex == 1 || frameIndex == 4)
                    {
                        PlaySound(footStepSound);
                    }
                }
                else
                {
                    if (scarfy.playerVelocity.y < 0)
                    {
                        frameIndex = jumpUpFrame;
                    }
                    else
                    {
                        frameIndex = jumpDownFrame;
                    }
                }
                scarfy.frameRec.x = (float)scarfy.skin.width / 6 * frameIndex;
            }
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawTextureRec(ground.skin, ground.frame, ground.ObstaclePosision, WHITE);
        DrawTextureRec(platform1.skin, platform1.frame, platform1.ObstaclePosision, WHITE);
        DrawTextureRec(scarfy.skin, scarfy.frameRec, scarfy.playerPosition, WHITE);

        EndDrawing();
    }
    CloseAudioDevice();
    CloseWindow();

    return 0;
}

bool isScarfyOnGround(Player *scarfy, Obstacle *ground)
{
    if (scarfy->playerPosition.y + scarfy->skin.height >= ground->ObstaclePosision.y)
    {
        if (scarfy->playerPosition.x <= ground->ObstaclePosision.x + ground->frame.width)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return 0;
}

bool isScarfyOnObstacle(Player *scarfy, Obstacle *platform1)
{
    if (scarfy->playerPosition.y + scarfy->skin.height >= platform1->ObstaclePosision.y)
    {
        return true;
    }
    else
    {
        return false;
    }
}