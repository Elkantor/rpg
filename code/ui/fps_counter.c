int fps_counter_x_get(int in_width, int in_font_size){
    return (in_width) - (3 * in_font_size) - 10; // 3 here is because we can have 3 numbers (144 fps for example)
}

int fps_counter_y_get(int in_font_size){
    return 5 + (in_font_size / 2); // 5 here is arbitrary
}
