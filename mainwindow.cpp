#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QOpenGLWidget(parent)
{
}

MainWindow::~MainWindow()
{
}

void MainWindow::initializeGL()
{
    glClearColor(1.0, 0.5, 0.0, 1);
}

void MainWindow::resizeGL(int w, int h)
{
    glViewport(0, 0, w, h);
}

void MainWindow::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);
}
