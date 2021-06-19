#include "shaders/SimpleShader.h"

namespace Shader{
    /*
     * Public
     */
    SimpleShader::SimpleShader() :
    ShaderProg("SimpleVertex", "SimpleFragment"){
        getUniformLocations();
    }

    void SimpleShader::setTime(float time) {
        loadFloat(m_locationTime, time);
    }

    /*
     * Private
     */
    void SimpleShader::getUniformLocations() {
        m_locationTime = glGetUniformLocation(getID(), "time");
    }
}