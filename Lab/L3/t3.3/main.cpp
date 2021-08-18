#include <GL/glut.h>


void initGL() {

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Black and opaque
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(-0.5f,-0.8075f); //f
    glVertex2f(0.5f,-0.8075f);  //g
    glVertex2f(0.8075f,-0.25f); //h
    glVertex2f(0.8075f,0.25f); //i
    glVertex2f(0.5f,0.8075f); //j
    glVertex2f(-0.5f,0.8075f); //k
    glVertex2f(-0.8075f,0.25f); //m
    glVertex2f(-0.8075f,-0.25f); //n
    glEnd();


    //top

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.5f, 0.8075f);                 //Right Bottom
    glVertex2f(-0.5f, 0.8075f);              //Left Bottom
    glVertex2f(-0.5f,0.87f);     //Left Top
    glVertex2f(0.5f,0.87f);              //Right Top
    glEnd();

    //bottom

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.5f, -0.8075f);     //Right Bottom
    glVertex2f(-0.5f, -0.8075f);   //Left Bottom
    glVertex2f(-0.5f,-0.87f);     //Left Top
    glVertex2f(0.5f,-0.87f);      //Right Top
    glEnd();

    //left

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.8095f, -0.25f);    //Right Bottom
    glVertex2f(-0.872f,-0.25f);    //Left Bottom
    glVertex2f(-0.872f,0.25f);     //Left Top
    glVertex2f(-0.8095,0.25f);      //Right Top
    glEnd();

    //Right

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.8095f, -0.25f);    //Right Bottom
    glVertex2f(0.872f,-0.25f);    //Left Bottom
    glVertex2f(0.872f,0.25f);     //Left Top
    glVertex2f(0.8095,0.25f);      //Right Top
    glEnd();

    //center quad

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.747f,-0.1875f);    //Right Bottom
    glVertex2f(-0.747f,-0.1875f);    //Left Bottom
    glVertex2f(-0.747f,0.1875f);     //Left Top
    glVertex2f(0.747f,0.1875f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.6845f,-0.1875f);    //Right Bottom
    glVertex2f(-0.6845f,-0.1875f);    //Left Bottom
    glVertex2f(-0.6845f,0.25f);     //Left Top
    glVertex2f(0.6845f,0.25f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.6845f,-0.1875f);    //Right Bottom
    glVertex2f(-0.6845f,-0.1875f);    //Left Bottom
    glVertex2f(-0.6845f,-0.25f);     //Left Top
    glVertex2f(0.6845f,-0.25f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.622f,-0.3125f);    //Right Bottom
    glVertex2f(-0.622f,-0.3125f);    //Left Bottom
    glVertex2f(-0.622f,-0.1875f);     //Left Top
    glVertex2f(0.622f,-0.1875f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.622f,0.3125f);    //Right Bottom
    glVertex2f(-0.622f,0.3125f);    //Left Bottom
    glVertex2f(-0.622f,0.1875f);     //Left Top
    glVertex2f(0.622f,0.1875f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.5595f,0.375f);    //Right Bottom
    glVertex2f(-0.5595f,0.375f);    //Left Bottom
    glVertex2f(-0.5595f,0.125f);     //Left Top
    glVertex2f(0.5595f,0.125f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.5595f,-0.375f);    //Right Bottom
    glVertex2f(-0.5595f,-0.375f);    //Left Bottom
    glVertex2f(-0.5595f,-0.125f);     //Left Top
    glVertex2f(0.5595f,-0.125f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.497f,0.4375f);    //Right Bottom
    glVertex2f(-0.497f,0.4375f);    //Left Bottom
    glVertex2f(-0.497f,0.0625f);     //Left Top
    glVertex2f(0.497f,0.0625f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.497f,-0.4375f);    //Right Bottom
    glVertex2f(-0.497f,-0.4375f);    //Left Bottom
    glVertex2f(-0.497f,-0.0625f);     //Left Top
    glVertex2f(0.497f,-0.0625f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.4345f,0.5f);    //Right Bottom
    glVertex2f(-0.4345f,0.5f);    //Left Bottom
    glVertex2f(-0.4345f,0.0f);     //Left Top
    glVertex2f(0.4345f,0.0f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.4345f,-0.5f);    //Right Bottom
    glVertex2f(-0.4345f,-0.5f);    //Left Bottom
    glVertex2f(-0.4345f,-0.0f);     //Left Top
    glVertex2f(0.4345f,-0.0f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.1845f,0.5625f);    //Right Bottom
    glVertex2f(-0.1845f,0.5625f);    //Left Bottom
    glVertex2f(-0.1845f,-0.0625f);     //Left Top
    glVertex2f(0.1845f,-0.0625f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.0595f,-0.5625f);    //Right Bottom
    glVertex2f(-0.0595f,-0.5625f);    //Left Bottom
    glVertex2f(-0.0595f,0.0625f);     //Left Top
    glVertex2f(0.0595f,0.0625f);      //Right Top
    glEnd();
    //yello
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.122f,0.5625f);    //Right Bottom
    glVertex2f(-0.122f,0.5625f);    //Left Bottom
    glVertex2f(-0.122f,0.5f);     //Left Top
    glVertex2f(0.122f,0.5f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.1845f,0.5f);    //Right Bottom
    glVertex2f(-0.3095f,0.5f);    //Left Bottom
    glVertex2f(-0.3095f,0.4375f);     //Left Top
    glVertex2f(-0.1845f,0.4375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.1845f,0.5f);    //Right Bottom
    glVertex2f(0.3095f,0.5f);    //Left Bottom
    glVertex2f(0.3095f,0.4375f);     //Left Top
    glVertex2f(0.1845f,0.4375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.1845f,0.4375f);    //Right Bottom
    glVertex2f(-0.372f,0.4375f);    //Left Bottom
    glVertex2f(-0.372f,0.375f);     //Left Top
    glVertex2f(-0.1845f,0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.1845f,0.25f);    //Right Bottom
    glVertex2f(-0.4345f,0.25f);    //Left Bottom
    glVertex2f(-0.4345f,0.375f);     //Left Top
    glVertex2f(-0.1845f,0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.1845f,0.4375f);    //Right Bottom
    glVertex2f(0.372f,0.4375f);    //Left Bottom
    glVertex2f(0.372f,0.375f);     //Left Top
    glVertex2f(0.1845f,0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.1845f,0.25f);    //Right Bottom
    glVertex2f(0.4345f,0.25f);    //Left Bottom
    glVertex2f(0.4345f,0.375f);     //Left Top
    glVertex2f(0.1845f,0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.247f,0.25f);    //Right Bottom
    glVertex2f(0.372f,0.25f);    //Left Bottom
    glVertex2f(0.372f,0.1857f);     //Left Top
    glVertex2f(0.247f,0.1857f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.247f,0.25f);    //Right Bottom
    glVertex2f(-0.372f,0.25f);    //Left Bottom
    glVertex2f(-0.372f,0.1857f);     //Left Top
    glVertex2f(-0.247f,0.1857f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.253f,-0.5f);    //Right Bottom
    glVertex2f(-0.3095f,-0.5f);    //Left Bottom
    glVertex2f(-0.3095f,-0.5625f);     //Left Top
    glVertex2f(-0.253f,-0.5625f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.253f,-0.5f);    //Right Bottom
    glVertex2f(0.3095f,-0.5f);    //Left Bottom
    glVertex2f(0.3095f,-0.5625f);     //Left Top
    glVertex2f(0.253f,-0.5625f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.0655f,-0.5f);    //Right Bottom
    glVertex2f(0.253f,-0.5f);    //Left Bottom
    glVertex2f(0.253f,-0.375f);     //Left Top
    glVertex2f(0.0655f,-0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.0655f,-0.5f);    //Right Bottom
    glVertex2f(-0.253f,-0.5f);    //Left Bottom
    glVertex2f(-0.253f,-0.375f);     //Left Top
    glVertex2f(-0.0655f,-0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.128f,-0.375f);    //Right Bottom
    glVertex2f(0.1905f,-0.375f);    //Left Bottom
    glVertex2f(0.1905f,-0.3125f);     //Left Top
    glVertex2f(0.128f,-0.3125f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.128f,-0.375f);    //Right Bottom
    glVertex2f(-0.1905f,-0.375f);    //Left Bottom
    glVertex2f(-0.1905f,-0.3125f);     //Left Top
    glVertex2f(-0.128f,-0.3125f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.8095,0.25f);    //Right Bottom
    glVertex2f(-0.747f,0.25f);    //Left Bottom
    glVertex2f(-0.747f,0.3125f);     //Left Top
    glVertex2f(-0.8095,0.3125f);      //Right Top
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.8095,-0.25f);    //Right Bottom
    glVertex2f(-0.747f,-0.25f);    //Left Bottom
    glVertex2f(-0.747f,-0.3125f);     //Left Top
    glVertex2f(-0.8095,-0.3125f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.8095,0.25f);    //Right Bottom
    glVertex2f(0.747f,0.25f);    //Left Bottom
    glVertex2f(0.747f,0.3125f);     //Left Top
    glVertex2f(0.8095,0.3125f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.8095,-0.25f);    //Right Bottom
    glVertex2f(0.747f,-0.25f);    //Left Bottom
    glVertex2f(0.747f,-0.3125f);     //Left Top
    glVertex2f(0.8095,-0.3125f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.747,0.3125f);    //Right Bottom
    glVertex2f(-0.6845f,0.3125f);    //Left Bottom
    glVertex2f(-0.6845f,0.375f);     //Left Top
    glVertex2f(-0.747,0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.747,0.3125f);    //Right Bottom
    glVertex2f(0.6845f,0.3125f);    //Left Bottom
    glVertex2f(0.6845f,0.375f);     //Left Top
    glVertex2f(0.747,0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.747,-0.3125f);    //Right Bottom
    glVertex2f(-0.6845f,-0.3125f);    //Left Bottom
    glVertex2f(-0.6845f,-0.375f);     //Left Top
    glVertex2f(-0.747,-0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.747,-0.3125f);    //Right Bottom
    glVertex2f(0.6845f,-0.3125f);    //Left Bottom
    glVertex2f(0.6845f,-0.375f);     //Left Top
    glVertex2f(0.747,-0.375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.6845f,0.375f);    //Right Bottom
    glVertex2f(0.622f,0.375f);    //Left Bottom
    glVertex2f(0.622f,0.4375f);     //Left Top
    glVertex2f(0.6845,0.4375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.6845f,0.375f);    //Right Bottom
    glVertex2f(-0.622f,0.375f);    //Left Bottom
    glVertex2f(-0.622f,0.4375f);     //Left Top
    glVertex2f(-0.6845,0.4375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.6845f,-0.375f);    //Right Bottom
    glVertex2f(0.622f,-0.375f);    //Left Bottom
    glVertex2f(0.622f,-0.4375f);     //Left Top
    glVertex2f(0.6845,-0.4375f);      //Right Top
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.6845f,-0.375f);    //Right Bottom
    glVertex2f(-0.622f,-0.375f);    //Left Bottom
    glVertex2f(-0.622f,-0.4375f);     //Left Top
    glVertex2f(-0.6845,-0.4375f);      //Right Top
    glEnd();


   //row
    for (float i = -1.0f; i<=1.0f; i+=0.0625f) {
        for (float j = 1.0f; j>=-1.0f; j-=0.0625f) {
        glBegin(GL_LINES);
        glColor3f(0.98f,0.04f,0.7f);
        glVertex2f(i, j);
        glVertex2f(-i, j);
        glEnd();
       }
    }

    //column
        for (float i = -1.0f; i<=1.0f; i+=0.0625) {
        for (float j = 1.0f; j>=0.0f; j-=0.0625) {
        glBegin(GL_LINES);
        glColor3f(0.98f,0.04f,0.7f);
        glVertex2f(i, j);
        glVertex2f(i, -j);
        glEnd();
       }
    }


	glFlush();  // Render now
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Batman");
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(10, 10);
	glutDisplayFunc(display);
	initGL();
	glutMainLoop();
	return 0;
}
