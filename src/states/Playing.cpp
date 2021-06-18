#include "states/Playing.h"
#include "Model.h"
#include "shaders/SimpleShader.h"

std::vector<GLfloat> vertexPositions = {  0.5,  0.5,
                                         -0.5,  0.5,
                                         -0.5, -0.5,
                                         -0.5, -0.5,
                                          0.5, -0.5,
                                          0.5,  0.5};

std::vector<GLfloat> textureCoords = { 1.0, 1.0,
                                       0.0, 1.0,
                                       0.0, 0.0,
                                       0.0, 0.0,
                                       1.0, 0.0,
                                       1.0, 1.0};

namespace State{
    Playing::Playing(Application& app) :
    GameState(app), m_model (vertexPositions, textureCoords) {
        m_texture.load("grass");
    }

    void Playing::input() {

    }

    void Playing::update() {

    }

    void Playing::draw() {
        m_shader.bind();
        m_model.bind();
        m_texture.bind();

        //draw the model with triangles
        glDrawArrays(GL_TRIANGLES, 0, 6);

        m_shader.unbind();
        m_model.unbind();
        m_texture.unbind();
    }
}