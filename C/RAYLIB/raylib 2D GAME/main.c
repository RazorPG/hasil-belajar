#include "raylib.h"
#include "raymath.h"

const int screenWidth = 800;
const int screenHeight = 450;

const int scarfySpeed = 5;
const int gravity = 1;
const int groundYPos = 3 * screenHeight / 4;

const int jumpUpFrame = 3;
const int jumpDownFrame = 4;

bool isScarfyOnGround(Texture2D *scarfy, Vector2 *scarfyPosition);
//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------

    InitWindow(screenWidth, screenHeight, "player texture");
    InitAudioDevice();
    Texture2D scarfy = LoadTexture("scarfy.png");
    unsigned numFrame = 6;
    float frameWidth = scarfy.width / 6;
    Rectangle frameRec = {0.0f, 0.0f, (float)frameWidth, (float)scarfy.height};
    Vector2 scarfyPosition = {0.0f, screenHeight - scarfy.height};
    Vector2 scarfyVelocity = {0.0f, 0.0f};

    Sound footStepSound = LoadSound("Single-footstep-in-grass-A-www.fesliyanstudios.com.mp3");
    Sound landingSound = LoadSound("Single-footstep-in-grass-B-www.fesliyanstudios.com.mp3");

    unsigned frameDelay = 5;
    unsigned frameDelayConter = 0;
    unsigned frameIndex = 0;

    SetTargetFPS(60); // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {

        // Update
        //
        // logika move karakter
        if (isScarfyOnGround(&scarfy, &scarfyPosition))
        {

            if (IsKeyDown(KEY_SPACE))
            {
                scarfyVelocity.y = -3 * scarfySpeed;
            }
            if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D))
            {
                scarfyVelocity.x = scarfySpeed;
                if (frameRec.width < 0)
                {
                    frameRec.width = -frameRec.width;
                }
            }
            else if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A))
            {
                scarfyVelocity.x = -scarfySpeed;
                if (frameRec.width > 0)
                {
                    frameRec.width = -frameRec.width;
                }
            }
            else
            {
                scarfyVelocity.x = 0;
            }
        }
        // ngecek apakah karakter bergerak atau tidaknya
        bool scarfyMoving = scarfyVelocity.x != 0.0f || scarfyVelocity.y != 0.0f;

        // jika bergerak maka nilai posisi x karakter berubah

        scarfyPosition = Vector2Add(scarfyPosition, scarfyVelocity);
        bool scarfyIsOnGround = isScarfyOnGround(&scarfy, &scarfyPosition);

        if (scarfyIsOnGround)
        {
            scarfyVelocity.y = 0;
            scarfyPosition.y = groundYPos - scarfy.height;
        }
        else
        {
            PlaySound(landingSound);
            scarfyVelocity.y += gravity;
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
                    if (scarfyVelocity.y < 0)
                    {
                        frameIndex = jumpUpFrame;
                    }
                    else
                    {
                        frameIndex = jumpDownFrame;
                    }
                }
                frameRec.x = (float)frameWidth * frameIndex;
            }
        }

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTextureRec(scarfy, frameRec, scarfyPosition, WHITE);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseAudioDevice();
    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

bool isScarfyOnGround(Texture2D *scarfy, Vector2 *scarfyPosition)
{
    if (scarfyPosition->y + scarfy->height >= groundYPos)
    {
        return true;
    }
    else
    {
        return false;
    }
}