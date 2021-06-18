#ifndef VOXEL_MODEL_H
#define VOXEL_MODEL_H

#include <GL/glew.h>
#include <vector>

class Model{
public:
    explicit Model(const std::vector<GLfloat>& vertexPositions,
                   const std::vector<GLfloat>& textureCoords);
    ~Model();
    void bind();
    void unbind();
private:
    void addVBO(int dim, const std::vector<GLfloat>& data);
    std::vector<GLuint> m_buffers;
    GLuint m_vao = 0;
    GLuint m_vboCount = 0;
};

#endif //VOXEL_MODEL_H
