//
// Created by omen on 23/05/2026.
//

#ifndef GAMEAI_RESEARCH_PROJECT_RAYAN_RUSTY_MAINSCENE_H
#define GAMEAI_RESEARCH_PROJECT_RAYAN_RUSTY_MAINSCENE_H
#include "raylib.h"


class MainScene
{
public:
    MainScene();
    ~MainScene();

    void Run(float deltaTime);
private:

    //functions
    void Update(float deltaTime);
    void Draw() const;

    Camera3D worldCamera{ 0 };

};


#endif //GAMEAI_RESEARCH_PROJECT_RAYAN_RUSTY_MAINSCENE_H