#include "model.h"

Model::Model(QOpenGLShaderProgram *program, int VertexAtr, int ColorAtr) :
shraders_prog( program ),
m_vertexAtr( vertexAtr ),
m_colorAtr( colorAtr )
{
//Todo
}

void Model::init_atr(std::vector *vert, std::vector *norm)
{
    vertices = vert;
    normals = norm;
}


void Model::drav()
{
//ToDo drav void
}
