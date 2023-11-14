#pragma once
#ifndef GameObject_hpp
#define GameObject_hpp
#include "Game.hpp"

class GameObject{

public:

    GameObject(const char* textureSheet, SDL_Renderer* ren);
    ~GameObject();

    void Update();
    void Render();

private:
    int xpos;
    int ypos;
    SDL_Texture* objTex;
    SDL_Rect srcRect, destRect;
    SDL_Renderer* rend;

};


#endif /* GameObject()  */