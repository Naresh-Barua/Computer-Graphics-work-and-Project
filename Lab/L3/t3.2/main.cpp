#include <windows.h>
#include <GL/glut.h>


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(.5);
	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f); // green

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.1f);

	glVertex2f(0.75f, 0.1f);
	glVertex2f(0.75f, 0.0f);
	glEnd();

		glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.0f, 0.1f);
	glVertex2f(0.0f, 0.2f);

	glVertex2f(0.75f, 0.2f);
	glVertex2f(0.75f, 0.1f);
	glEnd();

        glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(0.0f, 0.2f);
	glVertex2f(0.0f, 0.3f);

	glVertex2f(0.75f, 0.3f);
	glVertex2f(0.75f, 0.2f);
	glEnd();



        glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);

	glVertex2f(0.0f, -0.1f);
	glVertex2f(0.0f, 0.0f);

	glVertex2f(0.75f, 0.0f);
	glVertex2f(0.75f, -0.1f);
	glEnd();

		glBegin(GL_QUADS);
	glColor3f(1.0f, 0.5f, 0.0f);

	glVertex2f(0.0f, -0.2f);
	glVertex2f(0.0f, -0.1f);

	glVertex2f(0.75f, -0.1f);
	glVertex2f(0.75f, -0.2f);
	glEnd();

        glBegin(GL_QUADS);
	glColor3f(0.73,0.16,0.96);

	glVertex2f(0.0f, -0.3f);
	glVertex2f(0.0f, -0.2f);

	glVertex2f(0.75f, -0.2f);
	glVertex2f(0.75f, -0.3f);
	glEnd();

	        glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.1f, -0.75f);
	glVertex2f(-0.1f, 0.4f);

	glVertex2f(0.0f, 0.4f);
	glVertex2f(0.0f, -0.75f);
	glEnd();






	glFlush();  // Render now
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("rainbow flag");
	glutInitWindowSize(800, 500);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
