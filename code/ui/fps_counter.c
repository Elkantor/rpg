void fps_counter_show(int in_window_width, int in_font_size){
    int x = (in_window_width) - (3 * in_font_size) - 10;
    int y = 10 + (in_font_size / 2);
    DrawFPS(x, y);
}