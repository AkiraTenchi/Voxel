#ifndef VOXEL_SIMPLESHADER_H
#define VOXEL_SIMPLESHADER_H

#include "shaders/ShaderProg.h"

namespace Shader{
    class SimpleShader : public ShaderProg{
    public:
        SimpleShader();

        void setTime(float time);
    private:
        void getUniformLocations() override;

        GLuint m_locationTime = 0;
    };
}

#endif //VOXEL_SIMPLESHADER_H
