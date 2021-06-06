#include "mycanvas.h"

MyCanvas::MyCanvas(QWidget *parent) : QOpenGLWidget(parent){ }

void MyCanvas::initializeGL()
{
    glClearColor(1,1,1,1);

}

void MyCanvas::paintGL()
{
    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
        glVertex2f(-0.5, -0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(0.0, 0.5);
    glEnd();
}
