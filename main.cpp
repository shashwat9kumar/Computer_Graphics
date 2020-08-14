#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display();

void init()
{
    glClearColor(1.0,1.0,0.0,1.0);
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(800,100);
    glutInitWindowSize(500,500);

    glutCreateWindow("Window 1");

    glutDisplayFunc(display);
    init();

    glutMainLoop();

}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //Draw

    glFlush();
}
