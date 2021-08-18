#include<windows.h>
#include<GL/glut.h>

GLfloat position = 0.0f;
GLfloat speed = 0.0f;

void myInit() {
   glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
}

void update(int value) {
    if(position>1.5)
        position = -1.0f;
        position += speed;
        glutPostRedisplay();
        glutTimerFunc(100, update, 0);

}

void display() {

glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
glLoadIdentity();

glBegin(GL_QUADS);
	glColor3ub(130,255,255);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glEnd();

glTranslatef(position,position,0.0f);


glTranslatef(-0.6f, -0.5f, 0.0f);
glScalef(0.7f,0.7f,0.7f);
glRotatef(70, 40.0f, 40.0f, 40.0f);
glBegin(GL_QUADS);
    glColor3ub(2,165,0);
    glVertex2f(-0.3f, -0.3f); //sqr
    glVertex2f( 0.3f, -0.3f);
    glVertex2f( 0.3f, 0.3f);
    glVertex2f(-0.3f, 0.3f);
    glEnd();


glBegin(GL_TRIANGLES);
    glColor3ub(2,165,0);
    glVertex2f(0.3f, -0.3f);//tri1
    glVertex2f(0.58f, 0.0f);
    glVertex2f(0.3f, 0.3f);
    glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(150,245,0);
glVertex2f(0.30f,-0.28f);//tri2
glVertex2f(0.55f, 0.0f);
glVertex2f(0.30f, 0.28f);
glEnd();


glTranslatef(-0.5f, -0.15f, 0.0f);
glScalef(0.4, 0.5, 0.5);
glBegin(GL_TRIANGLES);//right fire
glColor3ub(255, 85, 15);
glVertex2f(0.2f,-0.2f);
glVertex2f(0.5f, 0.0f);
glVertex2f(0.2f, 0.2f);
glEnd();


glTranslatef(0.0f, 0.6f, 0.0f);
glScalef(1.0, 1.0, 0.0);
glBegin(GL_TRIANGLES);//left fire
glColor3ub(255, 85, 15);
glVertex2f(0.2f,-0.2f);
glVertex2f(0.5f, 0.0f);
glVertex2f(0.2f, 0.2f);
glEnd();

glPopMatrix();
glFlush();

}

void mouseFunc(int button, int state, int x, int y) {

if (button == GLUT_LEFT_BUTTON)
{
    speed = 0.1f;
}
if (button == GLUT_RIGHT_BUTTON)
{
    speed = 0.0f;
}
glutPostRedisplay();}



int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitWindowSize(800, 600);
glutInitWindowPosition(100, 100);
glutCreateWindow("Rocket Simulation");
glutDisplayFunc(display);
myInit();
glutTimerFunc(100, update, 0);
glutMouseFunc(mouseFunc);
glutMainLoop();
return 0;

}


