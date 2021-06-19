#include "shaders/ShaderProg.h"
#include "shaders/ShaderLoader.h"

namespace Shader{
    /*
     * Public
     */
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
    /*
     * Protected
     */
    GLuint ShaderProg::getID() const{
        return m_programID;
    }

    void ShaderProg::loadFloat(GLuint location, float value) {
        glUniform1f(location, value);
    }
}
