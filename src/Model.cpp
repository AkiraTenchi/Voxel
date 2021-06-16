// Created by akira on 15-06-21.

#include "Model.h"

Model::Model(const std::vector<GLfloat>& vertexPositions) {
    glGenVertexArrays(1, &m_vao);
    glBindVertexArray(m_vao);

    addVBO(2, vertexPositions);

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
