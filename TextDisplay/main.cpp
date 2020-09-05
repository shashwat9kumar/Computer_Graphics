#include<gl/glut.h>

void init()
{
 glClearColor(0,0,0,0);
 glMatrixMode(GL_PROJECTION);
 glOrtho(-10,100,-10,100,20,-20);
}


void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.0,0.7,0.7);
 glBegin(GL_TRIANGLES);
    glVertex2f(5,2);
    glVertex2f(70,2);
    glVertex2f(33.5,70);
 glEnd();

 glColor3f(0.0,0.0,0.0);

 char name[] = {'S','H','A','S','H','W','A','T'};
 int x=20;
 for(int i=0;i<8;i++)
 {
     glRasterPos2i(x,10);
     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,name[i]);
     x+=5;
 }

  glFlush();
}
int main(int argc,char **argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_RGB);
 glutInitWindowSize(500,500);
 glutInitWindowPosition(800,100);
 glutCreateWindow("Shashwat Kumar");
 init();
 glutDisplayFunc(display);
 glutMainLoop();
}
