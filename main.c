#include "raylib.h"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "My First Raylib Game");

    Vector2 ballPosition = {(float)screenWidth / 2, (float)screenHeight / 2};

    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose())
    {
        //Step
        if (IsKeyDown(KEY_RIGHT))
            ballPosition.x += 2.0f;
        if (IsKeyDown(KEY_LEFT))
            ballPosition.x -= 2.0f;
        if (IsKeyDown(KEY_UP))
            ballPosition.y -= 2.0f;
        if (IsKeyDown(KEY_DOWN))
            ballPosition.y += 2.0f;

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircleV(ballPosition, 50, MAROON);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}