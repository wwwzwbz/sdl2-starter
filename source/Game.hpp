#ifndef Game_hpp
#define Game_hpp

#include <SDL.h>
#include <iostream>
#include <SDL_image.h>

using namespace std;

class Game {
public:
    Game();
    ~Game();

    void init(const char* title, int x, int y, int w, int h, bool fullwindow);
    void handleEvents();
    void update();
    void render();
    void clean();

    bool running() {return isRunning;}


private:
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;

};


#endif /* Game.hpp */