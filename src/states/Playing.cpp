#include "states/Playing.h"
#include "Model.h"
#include "shaders/SimpleShader.h"

std::vector<GLfloat> vertexPositions = {  0.5,  0.5,
                                         -0.5,  0.5,
                                         -0.5, -0.5,
                                          0.5, -0.5};

std::vector<GLfloat> textureCoords = { 1.0, 1.0,
                                       0.0, 1.0,
                                       0.0, 0.0,
                                       1.0, 0.0};

std::vector<GLuint> indices = {0, 1, 2, 2, 3, 0};

namespace State{
    Playing::Playing(Application& app) :
    GameState(app), m_model (vertexPositions, textureCoords, indices) {
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
        glDrawElements(GL_TRIANGLES, m_model.getIndicesCount(), GL_UNSIGNED_INT, nullptr);

        m_shader.unbind();
        m_model.unbind();
        m_texture.unbind();
    }
}