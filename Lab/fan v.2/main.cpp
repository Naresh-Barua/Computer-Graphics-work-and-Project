#include<windows.h>
#include<GL/glut.h>

static GLfloat spin = 0.0;
static GLfloat spin_speed = 0.5;
float spin_x = 0;
float spin_y = 0;
float spin_z = 1;

float translate_x = 0.0;
float translate_y = 0.0;
float translate_z = -30.0;
int angle=10;
void fan_shape(void)
{

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f,1.0f,0.0f);
        glVertex3f(0, -0.05, 0.0);
        glVertex3f(-.05, .07, 0.0);
        glVertex3f(-.12, .07, 0.0);
        glVertex3f(-.18, .15, 0.0);
        glVertex3f(-.1, .15, 0.0);
        glVertex3f(-.15, .22, 0.0);
        glVertex3f(-.20, .22, 0.0);
        glVertex3f(-.27, .30, 0.0);
        glVertex3f(-.10, .30, 0.0);
        glVertex3f(-.17, .37, 0.0);
        glVertex3f(-.24, .37, 0.0);
        glVertex3f(-.27, .45, 0.0);
        glVertex3f(-.12, .45, 0.0);
        glVertex3f(-.2, .55, 0.0);
        glVertex3f(.2, .55, 0.0);
        glVertex3f(.12, .45, 0.0);
        glVertex3f(.27, .45, 0.0);
        glVertex3f(.24, .37, 0.0);
        glVertex3f(.17, .37, 0.0);
        glVertex3f(.10, .30, 0.0);
        glVertex3f(.27, .30, 0.0);
        glVertex3f(.20, .22, 0.0);
        glVertex3f(.15, .22, 0.0);
        glVertex3f(.1, .15, 0.0);
        glVertex3f(.18, .15, 0.0);
        glVertex3f(.12, .07, 0.0);
        glVertex3f(.05, .07, 0.0);

    glEnd();
}



void f2(void)
{
    fan_shape();
    glRotatef(90,0.0,0.0,1.0);
    fan_shape();
    glRotatef(180,0.0,0.0,1.0);
    fan_shape();
    glRotatef(270,0.0,0.0,1.0);
    fan_shape();

}
void choto_fan1(void)
{
    glPushMatrix();
    glScalef(0.3,0.3,0.3); //size
    glTranslatef(3,3,3);//choto1 upore daan
    f2();
    glPopMatrix();
    glFlush();
}
void choto_fan2(void)
{
    glPushMatrix();
    glScalef(.5,.5,.5);
    glTranslatef(-2.8,-2.8,-2.8); //choto2 niche bam
    f2();
    glPopMatrix();
    glFlush();
}

void choto_fan3(void)
{
     glPushMatrix();
    glScalef(.35,.35,.35);
    glTranslatef(2.5,-2.5,2.5); //choto3 niche daan
    f2();
    glPopMatrix();
    glFlush();
}

void choto_fan4(void)
{
     glPushMatrix();
    glScalef(.35,.35,.35);
    glTranslatef(-2.5,2.5,2.5); //choto4 upore baam
    f2();
    glPopMatrix();
    glFlush();


}
void reshape(int w,int h)
{
    glViewport(0,0, (GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(30,1,1.0,100.0);
    glMatrixMode(GL_MODELVIEW);

}
void display(void)
{
    glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glPushMatrix();
    glRotatef(spin,spin_x,spin_y,spin_z);
    f2();
    glPopMatrix();

glFlush();
angle+=1;

}

void setSpin(float x, float y, float z)
{
    spin_x = x;
    spin_y = y;
    spin_z = z;
}



void reset()
{
    spin_x = 0;
    spin_y = 0;
    spin_z = 1;
    translate_x = 0.0;
    translate_y = 0.0;
    translate_z = -30.0;
}

void spinDisplay(void)
{
    spin=spin+spin_speed;
    if(spin>360.0)
    {
        spin=spin-360.0;
    }
    glutPostRedisplay();
}



void spinDisplayReverse(void)
{
    spin=spin-spin_speed;
    if(spin<360.0)
    {
        spin=spin+360.0;
    }
    glutPostRedisplay();
}
void mouse(int button,int state,int x,int y)
{
    switch(button)
    {
        case GLUT_LEFT_BUTTON:
            if(state==GLUT_DOWN)
                glutIdleFunc(spinDisplay);
            break;
        case GLUT_MIDDLE_BUTTON:
            if(state==GLUT_DOWN)
            {
                glutIdleFunc(NULL);
            }
            break;
        case GLUT_RIGHT_BUTTON:
            if(state==GLUT_DOWN)
                glutIdleFunc(spinDisplayReverse);
            break;

        default:
            break;

    }
}


void keyboard(unsigned char key, int x, int y)
{
//-------- spin --------
    if(key=='a')
    {
        choto_fan1();
    }
    else if(key=='b')
    {
        choto_fan2();
    }
    else if(key=='c')
    {
        choto_fan3();
    }

    else if(key=='d')
    {
        choto_fan4();
    }
    else if(key=='r')
    {
        reset();
        glutPostRedisplay();
    }

}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700,500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Rotating Fan");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouse);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}

