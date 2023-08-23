#include <GL/glut.h>

// Display callback function
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Set line color
    glColor3f(1.0f, 0.0f, 0.0f); // Red

    // Draw the line
    glBegin(GL_LINES);
    glVertex2i(50, 50); // Start point
    glVertex2i(250, 250); // End point
    glEnd();

    glFlush(); // Flush the rendering pipeline
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Drawing a Line Example");
    
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set clear color to black

    gluOrtho2D(0, 400, 0, 400); // Set up the coordinate system

    glutDisplayFunc(display);
    
    glutMainLoop();
    return 0;
}

