#include <iostream>
#include <SDL.h>
#include "Game.hpp"

using namespace std;

Game* game = NULL;
int main() {

    game = new Game();
    game->init("A piece of shit", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
    while (game->running()){
        game->handleEvents();
        game->update();
        game->render();
    }

    game->clean();
    

    return EXIT_SUCCESS;
}
