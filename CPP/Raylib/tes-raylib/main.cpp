#include "raylib.h"

int main()
{
    InitAudioDevice();

    // float posX = 0;
    Texture2D sprite;
    Music music;
    Sound sound;

    InitWindow(800, 450, "Basic window");
    sprite = LoadTexture("pngwing.com (1).png");
    sound = LoadSound("TARANTULA DAN KENTANG, LETS GOO (AI Voice Zeta).mp3");
    music = LoadMusicStream("sound wadadadang.mp3");

    float posX = -sprite.width;
    while (!WindowShouldClose())
    {
        UpdateMusicStream(music);
        posX += GetFrameTime() * 300;
        if (posX > 800)
        {
            posX = -sprite.width;
        }
        if (IsKeyPressed(KEY_P))
        {
            StopMusicStream(music);
            PlayMusicStream(music);
        }

        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            Rectangle spriteRect = {
                posX,
                10,
                sprite.width,
                sprite.height};
            if (CheckCollisionPointRec(GetMousePosition(), spriteRect))
                ;
            PlaySound(sound);
        }

        // posX += GetFrameTime() * 100;
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawTexture(sprite, posX, 50, WHITE);
        DrawCircle(posX, 10, 5, GREEN);
        // DrawRectangle(posX, 100, 100, 100, BLUE);
        EndDrawing();
    }
    StopMusicStream(music);
    CloseAudioDevice();
    CloseWindow();
    return 0;
}