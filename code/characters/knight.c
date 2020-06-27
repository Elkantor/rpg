Texture2D knight_torso_texture;

void knight_load(){
    knight_torso_texture = LoadTexture("../data/characters/torso.png");
}

void knight_unload(){
    UnloadTexture(knight_torso_texture);
}

void knight_show(float screen_ratio){
    int scale = 2;
    // DrawTextureEx(world_1_background_0_texture, (Vector2){0, 0}, 0.f, 2.f * screen_ratio, WHITE);
    DrawTextureEx(knight_torso_texture, (Vector2){20.0f, 20.0f}, 0.f, scale * screen_ratio, WHITE);

}