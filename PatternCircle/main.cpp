<<<<<<< HEAD
#include<gl/glut.h>
#include <cmath>

void init()
{
 glClearColor(0,0,0,0);
 glMatrixMode(GL_PROJECTION);
 glOrtho(-10,10,-10,10,20,-20);
}


void display()
{
  glClear(GL_COLOR_BUFFER_BIT);




 glPointSize(1);


    glColor3f(1.0,0.0,1.0);
 glBegin(GL_LINES);

    float rad = 9;
    float x=0.0f,y=0.0f;
    while(x<=rad)
    {
        y= sqrt((rad*rad - x*x));
/*
        glVertex2f(x,y);
        glVertex2f(-x,-y);

        glVertex2f(-x,y);
        glVertex2f(x,-y);

        glVertex2f(y,x);
        glVertex2f(-y,-x);

        glVertex2f(-y,x);
        glVertex2f(y,-x);


*/
        glVertex2f(x,y);
        glVertex2f(x,-y);
        glVertex2f(-x,y);
        glVertex2f(-x,-y);
        glVertex2f(y,x);
        glVertex2f(-y,x);
        glVertex2f(y,-x);
        glVertex2f(-y,-x);

        x=x+0.2;
    }


    glEnd();


    /*
    glColor3f(0.1,0.3,0.8);
 glBegin(GL_LINES);

    rad = 8;
    x=0.0f;y=0.0f;
    while(x<=rad/1.2)
    {
        y= sqrt((rad*rad - x*x));
        glVertex2f(x,y);
        glVertex2f(x,-y);
        glVertex2f(-x,y);
        glVertex2f(-x,-y);
        glVertex2f(y,x);
        glVertex2f(-y,x);
        glVertex2f(y,-x);
        glVertex2f(-y,-x);
        x=x+0.2;
    }
*/

    glBegin(GL_POLYGON);
     glColor3f(0.0,0.0,0.0);
     for(int i=0;i<360;i++)
     {
         float theta1= (i+0.5)*3.142/180;
         glVertex2f(8*cos(theta1),8*sin(theta1));
     }
     glEnd();



     glColor3f(1.0,1.0,0.0);
 glBegin(GL_LINES);

    rad = 7;
    x=0.0f;y=0.0f;
    while(x<=rad)
    {
        y= sqrt((rad*rad - x*x));
        glVertex2f(x,y);
        glVertex2f(x,-y);
        glVertex2f(-x,y);
        glVertex2f(-x,-y);
        glVertex2f(y,x);
        glVertex2f(-y,x);
        glVertex2f(y,-x);
        glVertex2f(-y,-x);
        x=x+0.2;
    }


    glEnd();


    glBegin(GL_POLYGON);
     glColor3f(0.0,0.0,0.0);
     for(int i=0;i<360;i++)
     {
         float theta1= (i+0.5)*3.142/180;
         glVertex2f(6*cos(theta1),6*sin(theta1));
     }
     glEnd();


 glColor3f(0.0,0.6,0.9);
 glBegin(GL_LINES);

    rad = 5;
    x=0.0f;y=0.0f;
    while(x<=rad)
    {
        y= sqrt((rad*rad - x*x));
        glVertex2f(x,y);
        glVertex2f(x,-y);
        glVertex2f(-x,y);
        glVertex2f(-x,-y);
        glVertex2f(y,x);
        glVertex2f(-y,x);
        glVertex2f(y,-x);
        glVertex2f(-y,-x);
        x=x+0.2;
    }


    glEnd();


    glBegin(GL_POLYGON);
     glColor3f(0.0,0.0,0.0);
     for(int i=0;i<360;i++)
     {
         float theta1= (i+0.5)*3.142/180;
         glVertex2f(4*cos(theta1),4*sin(theta1));
     }
     glEnd();



     glBegin(GL_LINES);
    glColor3f(0.7,0.8,0.3);
    rad = 3;
    x=0.0f;y=0.0f;
    while(x<=rad)
    {
        y= sqrt((rad*rad - x*x));
        glVertex2f(x,y);
        glVertex2f(x,-y);
        glVertex2f(-x,y);
        glVertex2f(-x,-y);
        glVertex2f(y,x);
        glVertex2f(-y,x);
        glVertex2f(y,-x);
        glVertex2f(-y,-x);
        x=x+0.2;
    }
    glEnd();


    glBegin(GL_POLYGON);
     glColor3f(0.0,0.0,0.0);
     for(int i=0;i<360;i++)
     {
         float theta1= (i+0.5)*3.142/180;
         glVertex2f(2*cos(theta1),2*sin(theta1));
     }
     glEnd();


     glBegin(GL_LINES);
    glColor3f(0.5,0.1,0.7);
    rad = 1;
    x=0.0f;y=0.0f;
    while(x<=rad)
    {
        y= sqrt((rad*rad - x*x));
        glVertex2f(x,y);
        glVertex2f(x,-y);
        glVertex2f(-x,y);
        glVertex2f(-x,-y);
        glVertex2f(y,x);
        glVertex2f(-y,x);
        glVertex2f(y,-x);
        glVertex2f(-y,-x);
        x=x+0.2;
    }
    glEnd();

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
=======
#include<gl/glut.h>
#include <cmath>

void init()
{
 glClearColor(0,0,0,0);
 glMatrixMode(GL_PROJECTION);
 glOrtho(-10,10,-10,10,20,-20);
}


void display()
{
  glClear(GL_COLOR_BUFFER_BIT);




 glPointSize(1);


    glColor3f(1.0,0.0,1.0);
 glBegin(GL_LINES);

    float rad = 9;
    float x=0.0f,y=0.0f;
    while(x<=rad)
    {
        y= sqrt((rad*rad - x*x));
/*
        glVertex2f(x,y);
        glVertex2f(-x,-y);

        glVertex2f(-x,y);
        glVertex2f(x,-y);

        glVertex2f(y,x);
        glVertex2f(-y,-x);

        glVertex2f(-y,x);
        glVertex2f(y,-x);


*/
        glVertex2f(x,y);
        glVertex2f(x,-y);
        glVertex2f(-x,y);
        glVertex2f(-x,-y);
        glVertex2f(y,x);
        glVertex2f(-y,x);
        glVertex2f(y,-x);
        glVertex2f(-y,-x);

        x=x+0.2;
    }


    glEnd();


    /*
    glColor3f(0.1,0.3,0.8);
 glBegin(GL_LINES);

    rad = 8;
    x=0.0f;y=0.0f;
    while(x<=rad/1.2)
    {
        y= sqrt((rad*rad - x*x));
        glVertex2f(x,y);
        glVertex2f(x,-y);
        glVertex2f(-x,y);
        glVertex2f(-x,-y);
        glVertex2f(y,x);
        glVertex2f(-y,x);
        glVertex2f(y,-x);
        glVertex2f(-y,-x);
        x=x+0.2;
    }
*/

    glBegin(GL_POLYGON);
     glColor3f(0.0,0.0,0.0);
     for(int i=0;i<360;i++)
     {
         float theta1= (i+0.5)*3.142/180;
         glVertex2f(8*cos(theta1),8*sin(theta1));
     }
     glEnd();



     glColor3f(1.0,1.0,0.0);
 glBegin(GL_LINES);

    rad = 7;
    x=0.0f;y=0.0f;
    while(x<=rad)
    {
        y= sqrt((rad*rad - x*x));
        glVertex2f(x,y);
        glVertex2f(x,-y);
        glVertex2f(-x,y);
        glVertex2f(-x,-y);
        glVertex2f(y,x);
        glVertex2f(-y,x);
        glVertex2f(y,-x);
        glVertex2f(-y,-x);
        x=x+0.2;
    }


    glEnd();


    glBegin(GL_POLYGON);
     glColor3f(0.0,0.0,0.0);
     for(int i=0;i<360;i++)
     {
         float theta1= (i+0.5)*3.142/180;
         glVertex2f(6*cos(theta1),6*sin(theta1));
     }
     glEnd();


 glColor3f(0.0,0.6,0.9);
 glBegin(GL_LINES);

    rad = 5;
    x=0.0f;y=0.0f;
    while(x<=rad)
    {
        y= sqrt((rad*rad - x*x));
        glVertex2f(x,y);
        glVertex2f(x,-y);
        glVertex2f(-x,y);
        glVertex2f(-x,-y);
        glVertex2f(y,x);
        glVertex2f(-y,x);
        glVertex2f(y,-x);
        glVertex2f(-y,-x);
        x=x+0.2;
    }


    glEnd();


    glBegin(GL_POLYGON);
     glColor3f(0.0,0.0,0.0);
     for(int i=0;i<360;i++)
     {
         float theta1= (i+0.5)*3.142/180;
         glVertex2f(4*cos(theta1),4*sin(theta1));
     }
     glEnd();



     glBegin(GL_LINES);
    glColor3f(0.7,0.8,0.3);
    rad = 3;
    x=0.0f;y=0.0f;
    while(x<=rad)
    {
        y= sqrt((rad*rad - x*x));
        glVertex2f(x,y);
        glVertex2f(x,-y);
        glVertex2f(-x,y);
        glVertex2f(-x,-y);
        glVertex2f(y,x);
        glVertex2f(-y,x);
        glVertex2f(y,-x);
        glVertex2f(-y,-x);
        x=x+0.2;
    }
    glEnd();


    glBegin(GL_POLYGON);
     glColor3f(0.0,0.0,0.0);
     for(int i=0;i<360;i++)
     {
         float theta1= (i+0.5)*3.142/180;
         glVertex2f(2*cos(theta1),2*sin(theta1));
     }
     glEnd();


     glBegin(GL_LINES);
    glColor3f(0.5,0.1,0.7);
    rad = 1;
    x=0.0f;y=0.0f;
    while(x<=rad)
    {
        y= sqrt((rad*rad - x*x));
        glVertex2f(x,y);
        glVertex2f(x,-y);
        glVertex2f(-x,y);
        glVertex2f(-x,-y);
        glVertex2f(y,x);
        glVertex2f(-y,x);
        glVertex2f(y,-x);
        glVertex2f(-y,-x);
        x=x+0.2;
    }
    glEnd();

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
>>>>>>> 3fbfb3bed83f3689cc95ad020dd47cde2e09900c
