#ifndef Timer_hpp
#define Timer_hpp

#include <SDL.h>

const int TARGET_FPS = 60;
const float TARGET_DT = 1.6f;


class Timer{

public:

    void Tick(); //SDL tick
    inline float getDeltaTime(){return dt;}
    inline static Timer* getInstance() {return instance = (instance != nullptr) ? instance : new Timer();}

private:
    Timer();
    static Timer* instance;
    float dt;
    float prevTime;
};



#endif /* Timer_hpp */