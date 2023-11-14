#include "Timer.hpp"    

Timer* Timer::instance = nullptr;

void Timer::Tick() {
    dt = (SDL_GetTicks64() - prevTime) * (TARGET_FPS * 1000.0f);

    // cap it at 60 fps
    if (dt > TARGET_DT) {
        dt = TARGET_DT;
    }
    
    prevTime = SDL_GetTicks64();
}   