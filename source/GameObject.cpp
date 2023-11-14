#include "GameObject.hpp"
#include "TextureManager.hpp"

GameObject::GameObject(const char* textureSheet, SDL_Renderer* ren) {
    rend = ren;
    objTex = TextureManager::loadTexture(textureSheet, ren);
}

void GameObject::Update() {
    
}

void GameObject::Render() {

}
