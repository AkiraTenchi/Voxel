// Created by akira on 15-06-21.

#ifndef VOXEL_GAMESTATE_H
#define VOXEL_GAMESTATE_H

class Application;

namespace State{
    class GameState{
        public:
            GameState(Application& app);

            virtual void input() = 0;
            virtual void update() = 0;
            virtual void draw() = 0;

        protected:
            Application* m_application;

    };
}

#endif //VOXEL_GAMESTATE_H
