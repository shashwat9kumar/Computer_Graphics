#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display();

void reshape(int,int);

void timer(int);



void init()
{
    glClearColor(0.0,0.0,0.0,1.0);
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

    glutInitWindowPosition(800,100);
    glutInitWindowSize(500,500);

    glutCreateWindow("Window 1");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(1000,timer,0);
    init();


    glutMainLoop();

}

double x_pos = -10;
int state = 1;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //Draw

    glPointSize(10.0);

    glBegin(GL_POLYGON);

    glVertex2d(x_pos,1.0);
    glVertex2d(x_pos,-1.0);
    glVertex2d(x_pos+2.0,-1.0);
    glVertex2d(x_pos+2.0,1.0);




    glEnd();

    glutSwapBuffers();
}

void reshape(int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);


}


void timer(int a)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);

    switch(state)
    {
        case 1:

            if(x_pos<8)
                x_pos += 0.15;
            else
                state = -1;

            break;

        case -1:

            if(x_pos > -10)
                x_pos -=0.15;
            else
                state = 1;

            break;
    }
}
