#include "dependencies/raylib.h"
#include "config.h"
#include "ui/fps_counter.c"
#include "ui/grid.c"
#include "environments/world_1.c"

int main(int argc, char** argv){
    InitWindow(screen_width, screen_height, "rpg");
    SetTargetFPS(60);

    world_1_load();

    while(!WindowShouldClose()){
        // Inputs

        // Logic by component

        // Logic global

        // Render
        BeginDrawing();
            ClearBackground(WHITE);
            world_1_show(screen_ratio);
            DrawFPS(fps_counter_x_get(screen_width, 24), fps_counter_y_get(24));
            grid_show(screen_width, screen_height, screen_cell_size);
        EndDrawing();
    }

    world_1_unload();

    CloseWindow();
    return 0;
}
