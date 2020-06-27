#include <stdio.h>
void grid_show(int in_screen_width, int in_screen_height, int in_cell_size){
    // raws
    for(int i = 1; i < (in_screen_height/in_cell_size)+1; ++i){
        DrawLineEx((Vector2){0, in_cell_size*i}, (Vector2) {in_screen_width, in_cell_size*i}, 1.f, (Color){ 0, 228, 48, 56 });
    }

    // columns
    for(int i = 1; i < (in_screen_width/in_cell_size)+1; ++i){
        DrawLineEx((Vector2){in_cell_size*i, 0}, (Vector2) {in_cell_size*i, in_screen_height}, 1.f, (Color){ 0, 228, 48, 56 });
    }
}
