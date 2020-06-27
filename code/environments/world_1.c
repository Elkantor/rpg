int world_1_current_block = 0;
Texture2D world_1_background_0_texture;
Texture2D world_1_foreground_0_texture;
Texture2D world_1_wall_left_0_texture;



void world_1_load(){
    world_1_background_0_texture = LoadTexture("../data/environments/world_1/background_0.png");
    world_1_foreground_0_texture = LoadTexture("../data/environments/world_1/foreground_0.png");
    world_1_wall_left_0_texture = LoadTexture("../data/environments/world_1/wall_left_0.png");
}

void world_1_unload(){
    UnloadTexture(world_1_background_0_texture);
    UnloadTexture(world_1_foreground_0_texture);
    UnloadTexture(world_1_wall_left_0_texture);
}

void world_1_show(float screen_ratio){
    int scale = 2;

    DrawTextureEx(world_1_background_0_texture, (Vector2){0, 0}, 0.f, 2.f * screen_ratio, WHITE);
    DrawTextureEx(world_1_background_0_texture, (Vector2){world_1_background_0_texture.width*scale, 0}, 0.f, scale * screen_ratio, WHITE);
    DrawTextureEx(world_1_background_0_texture, (Vector2){world_1_background_0_texture.width*scale*2, 0}, 0.f, scale * screen_ratio, WHITE);
    DrawTextureEx(world_1_background_0_texture, (Vector2){world_1_background_0_texture.width*scale*3, 0}, 0.f, scale * screen_ratio, WHITE);

    DrawTextureEx(world_1_background_0_texture, (Vector2){0, world_1_background_0_texture.height*scale}, 0.f, scale * screen_ratio, WHITE);
    DrawTextureEx(world_1_background_0_texture, (Vector2){world_1_background_0_texture.width*scale, world_1_background_0_texture.height*scale}, 0.f, scale * screen_ratio, WHITE);
    DrawTextureEx(world_1_background_0_texture, (Vector2){world_1_background_0_texture.width*scale*2, world_1_background_0_texture.height*scale}, 0.f, scale * screen_ratio, WHITE);
    DrawTextureEx(world_1_background_0_texture, (Vector2){world_1_background_0_texture.width*scale*3, world_1_background_0_texture.height*scale}, 0.f, scale * screen_ratio, WHITE);

    DrawTextureEx(world_1_background_0_texture, (Vector2){0, world_1_background_0_texture.height*scale*2}, 0.f, scale * screen_ratio, WHITE);
    DrawTextureEx(world_1_background_0_texture, (Vector2){world_1_background_0_texture.width*scale, world_1_background_0_texture.height*scale*2}, 0.f, scale * screen_ratio, WHITE);
    DrawTextureEx(world_1_background_0_texture, (Vector2){world_1_background_0_texture.width*scale*2, world_1_background_0_texture.height*scale*2}, 0.f, scale * screen_ratio, WHITE);
    DrawTextureEx(world_1_background_0_texture, (Vector2){world_1_background_0_texture.width*scale*3, world_1_background_0_texture.height*scale*2}, 0.f, scale * screen_ratio, WHITE);

    DrawTextureEx(world_1_foreground_0_texture, (Vector2){50, 50}, 0.f, 2.f * screen_ratio, WHITE);
    DrawTextureEx(world_1_wall_left_0_texture, (Vector2){50, 50}, 0.f, 2.f * screen_ratio, WHITE);
}
