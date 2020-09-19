#include<gl/glut.h>
#include<math.h>


void init(){
    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0,100,0,100,0,10);
}


void display(){
     glClear(GL_COLOR_BUFFER_BIT);
     //glColor3f(0.0,0.0,1.0);

     //glPointSize(2);
     glBegin(GL_LINES);
     glColor3f(1.0,1.0,1.0);

     glVertex2f(20,20);
     glVertex2f(80,20);

     glVertex2f(80,20);
     glVertex2f(80,50);

     glVertex2f(80,50);
     glVertex2f(20,50);

     glVertex2f(20,50);
     glVertex2f(20,20);

     glVertex2f(20,50);
     glVertex2f(50,80);

     glVertex2f(50,80);
     glVertex2f(80,50);

     glVertex2f(45,20);
     glVertex2f(45,35);

     glVertex2f(45,35);
     glVertex2f(55,35);

     glVertex2f(55,35);
     glVertex2f(55,20);
     glEnd();
     glFlush();
}





int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("My Window");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
}
