#include <windows.h>
#include <GL\glut.h>

void myInit (void)

{

glClearColor(0.0,0.0,255.0,0.0);

glMatrixMode(GL_PROJECTION);

glLoadIdentity();

gluOrtho2D(0.0, 500.0, 0.0, 400.0);

}
void myDisplay(void)

{

glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0f,1.0f,0.0f) ;


glBegin(GL_POLYGON);


    glVertex2i (20, 20);
    glVertex2i (320, 20);

    glVertex2i (200, 100);
    glVertex2i (320, 200);

    glVertex2i (20, 200);
    glVertex2i (20, 20);

    glVertex2i (320, 200);
    glVertex2i (320, 20);

    glEnd();

    glColor3f(0.0f,1.0f,0.0f);
    glPointSize(4.0);
    glRectf(40,120,100,150);

    glColor3f(0.0f,1.0f,0.0f);
    glPointSize(4.0);
    glRectf(240,120,300,150);

    glColor3f(0.0f,0.0f,0.0f);
    glPointSize(4.0);
    glRectf(120,200,220,20);




    glVertex2i (20, 200);
    glVertex2i (320, 200);


    glVertex2i (170, 260);
    glVertex2i (320, 200);

    glVertex2i (20, 200);
    glVertex2i (200, 320);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,0.1f);

    glVertex2f(0.75f,0.1f);
    glVertex2f(0.75f,0.0f);
    glEnd();
    glFlush();

}
int main (int argc, char **argv)
{
glutInit (&argc, argv);

glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

glutInitWindowSize (800, 600);

glutInitWindowPosition (100, 100);

glutCreateWindow ("");

glutDisplayFunc (myDisplay);
myInit();
glutMainLoop();
return 0;
}
