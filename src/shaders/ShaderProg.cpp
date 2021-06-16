#include "shaders/ShaderProg.h"

namespace Shader{
    ShaderProg::ShaderProg(const std::string &vertexShaderFile, const std::string &fragmentShaderFile) {

    }

    void ShaderProg::bind() {
        glUseProgram(m_programID);
    }

    void ShaderProg::unbind() {
        glUseProgram(0);
    }
}
