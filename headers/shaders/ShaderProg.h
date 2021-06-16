#ifndef VOXEL_SHADERPROG_H
#define VOXEL_SHADERPROG_H

#include <GL/glew.h>
#include <string>

namespace Shader{
    class ShaderProg{
        public:
            ShaderProg(const std::string& vertexShaderFile, const std::string& fragmentShaderFile);
            ~ShaderProg();

            void bind();
            void unbind();

        private:
            GLuint m_programID;
    };
}

#endif //VOXEL_SHADERPROG_H
