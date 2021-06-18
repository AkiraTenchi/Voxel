#ifndef VOXEL_TEXTURE_H
#define VOXEL_TEXTURE_H

#include <GL/glew.h>
#include <string>

namespace Texture{
    class BasicTexture{
    public:
        void load(const std::string &fileName);
        void bind();
        void unbind();
    private:
        GLuint m_textureID;
    };
}

#endif //VOXEL_TEXTURE_H
