// Created by akira on 15-06-21.

#ifndef VOXEL_PLAYING_H
#define VOXEL_PLAYING_H

#include "GameState.h"

class Application;

namespace State{
    class Playing : public GameState{
        public:
            Playing(Application& app);

            void input() override;
            void update() override;
            void draw() override;
    };
}



#endif //VOXEL_PLAYING_H
