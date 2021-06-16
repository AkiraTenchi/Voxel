#include "states/Playing.h"

namespace State{
    Playing::Playing(Application& app) : GameState(app), m_model ({ 0.5,  0.5,
                                                                                   -0.5,  0.5,
                                                                                   -0.5, -0.5,
                                                                                   -0.5, -0.5,
                                                                                    0.5, -0.5,
                                                                                    0.5,  0.5}) {

    }

    void Playing::input() {

    }

    void Playing::update() {

    }

    void Playing::draw() {
        m_model.bind();

        //draw the model with triangles
        glDrawArrays(GL_TRIANGLES, 0, 6);

        m_model.unbind();
    }
}