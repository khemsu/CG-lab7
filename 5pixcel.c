#include <GL/glut.h>


// Display callback function
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Set pixel color and draw
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glBegin(GL_POINTS);
    glVertex2i(50, 50); // Red pixel at (50, 50)
    glEnd();

    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glBegin(GL_POINTS);
    glVertex2i(100, 100); // Green pixel at (100, 100)
    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glBegin(GL_POINTS);
    glVertex2i(150, 150); // Blue pixel at (150, 150)
    glEnd();

    glColor3f(1.0f, 1.0f, 0.0f); // Yellow
    glBegin(GL_POINTS);
    glVertex2i(200, 200); // Yellow pixel at (200, 200)
    glEnd();

    glColor3f(0.0f, 1.0f, 1.0f); // Cyan
    glBegin(GL_POINTS);
    glVertex2i(250, 250); // Cyan pixel at (250, 250)
    glEnd();

    glFlush(); // Flush the rendering pipeline
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Drawing Pixels Example");
    
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set clear color to black

    gluOrtho2D(0, 400, 0, 400); // Set up the coordinate system

    glutDisplayFunc(display);
    
    glutMainLoop();
    return 0;
}

