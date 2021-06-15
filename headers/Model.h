// Created by akira on 15-06-21.

#ifndef VOXEL_MODEL_H
#define VOXEL_MODEL_H

#include <GL/glew.h>
#include <vector>

class Model{
    public:
        Model(const std::vector<GLfloat>& vertexPositions);
        ~Model();
        void bind();
        void unbind();

    private:
        GLuint m_vertexID;
};

#endif //VOXEL_MODEL_H
