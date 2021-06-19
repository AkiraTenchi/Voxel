#include "textures/Texture.h"

#include <GL/glew.h>
#include <SFML/Graphics/Image.hpp>

#include <string>

namespace Texture{
    void BasicTexture::load(const std::string &fileName) {
        std::string filePath = "../data/textures/" + fileName + ".png";

        sf::Image image;
        image.loadFromFile(filePath);

        glGenTextures(1, &m_textureID);
        bind();

        glTexImage2D(GL_TEXTURE_2D,
                     0,
                     GL_RGBA,
                     image.getSize().x,
                     image.getSize().y,
                     0,
                     GL_RGBA,
                     GL_UNSIGNED_BYTE,
                     image.getPixelsPtr());

        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_MIRRORED_REPEAT); //GL_CLAMP_TO_EDGE
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_MIRRORED_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

        unbind();

    }

    void BasicTexture::bind() {
        glBindTexture(GL_TEXTURE_2D, m_textureID);
    }

    void BasicTexture::unbind() {
        glBindTexture(GL_TEXTURE_2D, 0);
    }
}

