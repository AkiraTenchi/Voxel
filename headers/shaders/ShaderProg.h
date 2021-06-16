#ifndef VOXEL_SHADERPROG_H
#define VOXEL_SHADERPROG_H

#include <GL/glew.h>
#include <string>

namespace Shader{
    class ShaderProg{
        public:
            ShaderProg(const std::string& vertexShaderFile, const std::string& fragmentShaderFile);

            void bind();
            void unbind();

        private:
            GLuint m_programID;

            GLuint m_vertexShaderID;
            GLuint m_fragmentShaderID;
    };
}

#endif //VOXEL_SHADERPROG_H
