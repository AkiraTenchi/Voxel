#include "shaders/ShaderProg.h"
#include "shaders/ShaderLoader.h"

namespace Shader{
    ShaderProg::ShaderProg(const std::string &vertexShaderFile, const std::string &fragmentShaderFile) :
    m_programID (loadShader(vertexShaderFile, fragmentShaderFile)){

    }

    ShaderProg::~ShaderProg() {
        glDeleteProgram(m_programID);
    }

    void ShaderProg::bind() {
        glUseProgram(m_programID);
    }

    void ShaderProg::unbind() {
        glUseProgram(0);
    }
}
