#include <windows.h>
#include <GL\glut.h>

void myInit (void){

     glClearColor(0.0,0.0,0.0,0.0);
     glMatrixMode(GL_PROJECTION);

     glLoadIdentity();

     gluOrtho2D(-380.0, 750.0, -100.0, 400.0);
}

void myDisplay(void){

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f,1.0f,1.0f) ;

    glPointSize(4.0);

    glBegin(GL_POLYGON);
    //bottom

    glVertex2i (20, 20);
    glVertex2i (320, 20);
    //top
    glVertex2i (20, 200);
    glVertex2i (320, 200);
    //left
    glVertex2i (20, 200);
    glVertex2i (20, 20);
    //right
    glVertex2i (320, 200);
    glVertex2i (320, 20);

    glEnd();

    //Left Window

    glColor3f(1.0f,0.0f,0.0f);
    glPointSize(4.0);
    glRectf(30,120,200,150);

    //Right Window

    glColor3f(1.0f,0.0f,0.0f);
    glPointSize(4.0);
    glRectf(180,120,300,150);

    //door

    glColor3f(0.0f,1.0f,1.0f);
    glPointSize(4.0);
    glRectf(120,160,220,20);

    //Triangle

    glColor3f(0.0f,1.0f,0.0f);
    glBegin(GL_POLYGON);
    //bottom

    glVertex2i (20, 200);
    glVertex2i (320, 200);

    //top
    glVertex2i (170, 260);
    glVertex2i (320, 200);

    //left
    glVertex2i (20, 200);
    glVertex2i (200, 320);

    glEnd();
    glFlush();

}
int main (int argc, char **argv){

    glutInit (&argc, argv);

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize (800, 600);

    glutInitWindowPosition (10, 10);

    glutCreateWindow ("HOME");
    glutDisplayFunc (myDisplay);

    myInit();
    glutMainLoop();
    return 0;
}
