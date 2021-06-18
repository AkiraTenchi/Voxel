#ifndef VOXEL_PLAYING_H
#define VOXEL_PLAYING_H

#include "GameState.h"
#include "Model.h"
#include "shaders/SimpleShader.h"
#include "textures/Texture.h"

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
        Texture::BasicTexture m_texture;
    };
}



#endif //VOXEL_PLAYING_H
