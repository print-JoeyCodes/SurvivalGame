#include "/opt/homebrew/opt/raylib/include/raylib.h"
#include "gameWorld.hpp"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 600;

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(screenWidth, screenHeight, "Survival Game");
    SetTargetFPS(60);

    GameWorld world;

    world.CreateTree({200, 300});
    world.CreatePlayer({400, 300});

    while (!WindowShouldClose()) {

       
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();

    }

    CloseWindow();
    return 0;
}