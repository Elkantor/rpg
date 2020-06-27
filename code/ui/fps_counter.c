int fps_counter_x_get(int width, int font_size){
    return (width) - (3 * font_size) - 10; // 3 here is because we can have 3 numbers (144 fps for example)
}

int fps_counter_y_get(int font_size){
    return 5 + (font_size / 2); // 5 here is arbitrary
}
