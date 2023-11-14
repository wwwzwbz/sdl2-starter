#include "TextureManager.hpp"   


SDL_Texture* TextureManager::loadTexture(const char* fileName, SDL_Renderer* rend) {

    SDL_Surface* tempSuf = IMG_Load(fileName);
    SDL_Texture* tex = SDL_CreateTextureFromSurface(rend, tempSuf);
    SDL_FreeSurface(tempSuf);

    return tex;

}