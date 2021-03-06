#include "Model.h"

/*
 * Publics
 */
Model::Model(const std::vector<GLfloat>& vertexPositions,
             const std::vector<GLfloat>& textureCoords,
             const std::vector<GLuint>& indices):
             m_indicesCount (indices.size()){
    glGenVertexArrays(1, &m_vao);
    glBindVertexArray(m_vao);

    addVBO(2, vertexPositions);
    addVBO(2, textureCoords);
    addEBO(indices);

    unbind();
    glBindBuffer(GL_ARRAY_BUFFER, 0);
}

//Destroy all buffers on life end of class
Model::~Model() {
    glDeleteVertexArrays(1, &m_vao);
    glDeleteBuffers(m_buffers.size(), m_buffers.data());
}

//set current ID
void Model::bind() {
    glBindVertexArray(m_vao);
}

//reset ID ID -> 0
void Model::unbind() {
    glBindVertexArray(0);
}

GLuint Model::getIndicesCount() const{
    return m_indicesCount;
}

/*
 * Privates
 */
void Model::addVBO(int dim, const std::vector<GLfloat> &data) {
    GLuint vbo;
    glGenBuffers(1, &vbo);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER,
                 data.size() * sizeof(data[0]),
                 data.data(),
                 GL_STATIC_DRAW);
    glVertexAttribPointer(m_vboCount,
                          dim,
                          GL_FLOAT,
                          GL_FALSE,
                          0,
                          (GLvoid*) 0);
    glEnableVertexAttribArray(m_vboCount++);
    m_buffers.push_back(vbo);
}

void Model::addEBO(const std::vector<GLuint> &indices) {
    GLuint ebo;
    glGenBuffers(1, &ebo);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER,
                 indices.size() * sizeof (indices[0]),
                 indices.data(),
                 GL_STATIC_DRAW);
    m_buffers.push_back(ebo);

}
