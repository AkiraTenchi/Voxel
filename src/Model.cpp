// Created by akira on 15-06-21.

#include "Model.h"

Model::Model(const std::vector<GLfloat>& vertexPositions) {
    glGenBuffers(1, &m_vertexID); //Creates ID
    glBindBuffer(GL_ARRAY_BUFFER, m_vertexID);

    //Write array to buffer
    glBufferData(GL_ARRAY_BUFFER,
                 vertexPositions.size() * sizeof(vertexPositions[0]),
                 vertexPositions.data(),
                 GL_STATIC_DRAW);

    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, (GLvoid*) 0); //gives OpenGL information about the Array in the Buffer
    glEnableVertexAttribArray(0);

    glBindBuffer(GL_ARRAY_BUFFER, 0);
}

//Destroy all buffers on life end of class
Model::~Model() {
    glDeleteBuffers(1, &m_vertexID);
}

//set current ID
void Model::bind() {
    glBindBuffer(GL_ARRAY_BUFFER, m_vertexID);
}

//reset ID ID -> 0
void Model::unbind() {
    glBindBuffer(GL_ARRAY_BUFFER, 0);
}
