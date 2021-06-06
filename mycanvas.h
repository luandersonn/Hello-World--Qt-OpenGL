#ifndef MYCANVAS_H
#define MYCANVAS_H

#include <QOpenGLWidget>

class MyCanvas : public QOpenGLWidget
{

public:
    MyCanvas(QWidget *parent);

    void initializeGL();
    void paintGL();
};
#endif // MYCANVAS_H
