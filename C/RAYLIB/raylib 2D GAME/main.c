#include "raylib.h"
#include "raymath.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    const int scarfySpeed = 5;

    InitWindow(screenWidth, screenHeight, "player texture");

    Texture2D scarfy = LoadTexture("scarfy.png");
    unsigned numFrame = 6;
    float frameWidth = scarfy.width / 6;
    Rectangle frameRec = {0.0f, 0.0f, (float)frameWidth, (float)scarfy.height};
    Vector2 scarfyPosition = {0.0f, screenHeight - scarfy.height};
    Vector2 scarfyVelocity = {0.0f, 0.0f};

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
        bool scarfyMoving = scarfyVelocity.x != 0.0f || scarfyVelocity.y != 0.0f;

        scarfyPosition = Vector2Add(scarfyPosition, scarfyVelocity);

        ++frameDelayConter;
        if (frameDelayConter > frameDelay)
        {
            frameDelayConter = 0;
            if (scarfyMoving == true)
            {
                frameIndex++;
                frameIndex %= numFrame;
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
    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}