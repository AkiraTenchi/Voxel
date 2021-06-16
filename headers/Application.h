#ifndef VOXEL_APPLICATION_H
#define VOXEL_APPLICATION_H

#include <memory>
#include <stack>

#include "states/GameState.h"

class Application{
    public:
        Application();

        void runMainGameLoop();

        void pushState(std::unique_ptr<State::GameState> state);
        void popState();

    private:
        std::stack<std::unique_ptr<State::GameState>> m_states;

};

#endif //VOXEL_APPLICATION_H
