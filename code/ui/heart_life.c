Texture2D heart_life_texture;

void heart_life_load(int in_resolution_index){
    float scale = 1.5 + (in_resolution_index*0.5);
    Image heart_life_image = LoadImage("../data/ui/heart_life.png");
    ImageResize(&heart_life_image, heart_life_image.width*scale, heart_life_image.height*scale);
    heart_life_texture = LoadTextureFromImage(heart_life_image);
}

void heart_life_unload(){
    UnloadTexture(heart_life_texture);
}

void heart_life_show(float in_percent){
    int y = 20;
    int x = 20;
    int current_heart = 0;
    float remain_points = in_percent;
    
    int hearts_full = remain_points / 20;
    remain_points = remain_points - (hearts_full * 20);

    // Draw full hearts
    for(int i = 0; i < hearts_full; ++i){
        DrawTextureRec(heart_life_texture, (Rectangle) {0, 0, heart_life_texture.height, heart_life_texture.height}, (Vector2) {x + (current_heart * heart_life_texture.height), y}, WHITE);
        current_heart++;
    }
    // Draw 3/4 hearts
    int hearts_three_quarters = remain_points / 15;
    remain_points = remain_points - (hearts_three_quarters * 15);

    for(int i = 0; i < hearts_three_quarters; ++i){
        DrawTextureRec(heart_life_texture, (Rectangle) {heart_life_texture.height, 0, heart_life_texture.height, heart_life_texture.height}, (Vector2) {x + (current_heart * heart_life_texture.height), y}, WHITE);
        current_heart++;
    }

    // Draw 1/2 hearts
    int hearts_half = (int)(remain_points / 10);
    remain_points = remain_points - (hearts_half * 10);
    
    for(int i = 0; i < hearts_half; ++i){
        DrawTextureRec(heart_life_texture, (Rectangle) {heart_life_texture.height*2, 0, heart_life_texture.height, heart_life_texture.height}, (Vector2) {x + (current_heart * heart_life_texture.height), y}, WHITE);
        current_heart++;
    }

    // Draw 1/4 hearts
    int hearts_one_quarter = remain_points / 5;
    remain_points = remain_points - (hearts_one_quarter * 5);
    
    for(int i = 0; i < hearts_one_quarter; ++i){
        DrawTextureRec(heart_life_texture, (Rectangle) {heart_life_texture.height*3, 0, heart_life_texture.height, heart_life_texture.height}, (Vector2) {x + (current_heart * heart_life_texture.height), y}, WHITE);
        current_heart++;
    }

    // Draw empty hearts
    for(int i = current_heart; i < 5; ++i){
        DrawTextureRec(heart_life_texture, (Rectangle) {heart_life_texture.height*4, 0, heart_life_texture.height, heart_life_texture.height}, (Vector2) {x + (current_heart * heart_life_texture.height), y}, WHITE);
        current_heart++;
    }
}