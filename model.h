#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include <QOpenGLShaderProgram>
class Model
{
public:
    Model(QOpenGLShaderProgram *program, int VertexAtr, int ColorAtr);

    void drav();
    void init_atr(std::vector *vert, std::vector *norm);
private:
    std::vector<float> *vertices;
    std::vector<float> *normals;

    QOpenGLShaderProgram *shraders_prog;
    int m_vertexAtr;
    int m_colorAtr;

};

#endif // MODEL_H
