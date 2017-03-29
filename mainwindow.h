#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QOpenGLWidget>

class MainWindow : public QOpenGLWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
};

#endif // MAINWINDOW_H
