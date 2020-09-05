#include<gl/glut.h>
#include<math.h>


void init(){
    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(-100,100,-100,100,0,10);
}


void display(){
     glClear(GL_COLOR_BUFFER_BIT);
     //glColor3f(0.0,0.0,1.0);

     float x1 = 2.0,y1=4.0,x2=50.0,y2=30.0;
     float dy = (float)(y2-y1);
     float dx = (float)(x2-x1);

     float m = dy/dx;
     float p = 2*dy - dx;


     glBegin(GL_POINTS);

     glColor3f(1.0,1.0,1.0);b
     glVertex2f(x1,y1);

     while(x1<=x2 && y1<=y2)
     {
         if(m<1)
         {
             if(p<=0)
             {
                 x1=x1+0.1;
                 p=p+2*dy;
             }
             else{
                x1=x1+0.1;
                y1=y1+0.1;
                p=p+2*dy-2*dx;
             }
         }
         else
         {
             if(p<0)
             {
                 y1=y1+0.1;
                 p=p+2*dx;
             }
             else{
                x1=x1+0.1;
                y1=y1+0.1;
                p=p+2*dx-2*dy;
             }
         }


        glVertex2f(x1,y1);



     }

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
