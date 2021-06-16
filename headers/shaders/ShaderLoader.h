#ifndef VOXEL_SHADERLOADER_H
#define VOXEL_SHADERLOADER_H

#include <GL/glew.h>
#include <string>

namespace Shader{
    GLuint loadShader(const std::string& vertexShaderFile, const std::string& fragmentShaderFile);
}

#endif //VOXEL_SHADERLOADER_H
