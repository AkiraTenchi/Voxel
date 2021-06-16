#include "shaders/SimpleShader.h"

namespace Shader{
    SimpleShader::SimpleShader() :
    ShaderProg("SimpleVertex", "SimpleFragment"){
        bindAttributes();
    }

    void SimpleShader::bindAttributes() {
        bindAttribute(0, "inVertexPosition");
    }
}