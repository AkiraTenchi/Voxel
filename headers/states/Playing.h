#ifndef VOXEL_PLAYING_H
#define VOXEL_PLAYING_H

#include "GameState.h"
#include "Model.h"

class Application;

namespace State{
    class Playing : public GameState{
        public:
            Playing(Application& app);

            void input() override;
            void update() override;
            void draw() override;

        private:
            Model m_model;
    };
}



#endif //VOXEL_PLAYING_H
