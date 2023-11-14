#include "Game.hpp"
#include "Timer.hpp"
#include "TextureManager.hpp"

SDL_Texture* shitTex;
SDL_Rect srcR, destR;

Game::Game() {
}

Game::~Game() {  
}

void Game::init(const char* title, int x, int y, int w, int h, bool fullwindow) {
    //int flags = 0;
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        cout << "Initializing the window...\n";
        window = SDL_CreateWindow(title, x, y, w, h, SDL_WINDOW_FULLSCREEN ? fullwindow : SDL_WINDOW_SHOWN);
        if (window) {
            cout << "window created successfully\n";

        }

        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer) {
            SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
            cout << "renderer good\n";
        }

        isRunning = true;
    }

    shitTex = TextureManager::loadTexture("assets/shitTex.png", renderer);

}


void Game::handleEvents() {

    SDL_Event event;
    SDL_PollEvent(&event);

    switch (event.type)
    {
    case SDL_QUIT:
        isRunning = false;
        break;
    
    default:
        break;
    }

}

void Game::update() {

    destR.h = 64;
    destR.w = 64;

}

void Game::render() {

    SDL_RenderClear(renderer); //clears buffer in the renderer
    SDL_RenderCopy(renderer, shitTex, NULL, &destR);
    SDL_RenderPresent(renderer);




}

void Game::clean() {

    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    cout << "game cleaned\n";


}
