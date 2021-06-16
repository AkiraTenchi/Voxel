#ifndef VOXEL_PLAYING_H
#define VOXEL_PLAYING_H

#include "GameState.h"
#include "Model.h"
#include "shaders/SimpleShader.h"

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

            Shader::SimpleShader m_shader;
    };
}



#endif //VOXEL_PLAYING_H
