#pragma once
#ifndef TextureManager_hpp
#define TextureManager_hpp

#include "Game.hpp"

class TextureManager {

public:

    static SDL_Texture* loadTexture(const char* fileName, SDL_Renderer* rend);

};

#endif /* TextureManager */