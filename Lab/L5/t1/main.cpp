#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int xc,yc,radius;
void plot_point(int x, int y)

{
glBegin(GL_POINTS);
glVertex2i(xc+x, yc+y);
glVertex2i(xc+x, yc-y);
glVertex2i(xc+y, yc+x);
glVertex2i(xc+y, yc-x);
glVertex2i(xc-x, yc-y);
glVertex2i(xc-y, yc-x);
glVertex2i(xc-x, yc+y);
glVertex2i(xc-y, yc+x);
glEnd();

}
void display (void)
{
int x=0,y=radius;
 float pk=1-radius;

 glClear (GL_COLOR_BUFFER_BIT);

 glColor3f (1.0, 0.0, 0.0);

 glPointSize(5.0);

 glBegin(GL_POINTS);

while(x<y)
 {
 x=x+1;
 if(pk<0)
 pk=pk+2*x+1;
 else
 {
 y=y-1;
 pk=pk+2*(x-y)+1;

 }
 plot_point(x,y);
 }
 glFlush();

}

void init(void)

{

 glClearColor (1.0, 1.0, 1.0, 0.0);

 glMatrixMode(GL_PROJECTION);

 glLoadIdentity();

 glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);

}

int main(int argc, char** argv)

{
 cout<<("Enter the Co ordinates:\n");
 cout<<("X Cordinate:\n");
 cin>>xc;
 cout<<("Y Cordinate:\n");
 cin>>yc;
 cout<<("Enter the Radius:");
 cin>>radius;

 glutInit(&argc, argv);

 glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

 glutInitWindowSize (500, 500);

 glutInitWindowPosition (100, 100);

 glutCreateWindow ("Midpoint Circle Algorithm");

 init ();

 glutDisplayFunc(display);

 glutMainLoop();

 return 0;


}
