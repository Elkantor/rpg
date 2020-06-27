int screen_widths[] = { 1280,   1920,    2560 };
int screen_heights[] = { 720,    1080,    1440 };
int screen_resolution = 0;
float screen_ratio = 1280/720;
#define screen_width (screen_widths[screen_resolution])
#define screen_height (screen_heights[screen_resolution])
