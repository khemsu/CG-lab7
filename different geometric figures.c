#include <GL/glut.h>
#include <math.h>

// Display callback function
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Set color for shapes
     // Red

    // Draw a triangle
    glBegin(GL_TRIANGLES);
    glVertex2f(50.0f, 50.0f);
    glVertex2f(150.0f, 50.0f);
    glVertex2f(100.0f, 150.0f);
    glColor3f(1.0f, 0.0f, 0.0f); //red
    glEnd();

    // Draw a rectangle
    glBegin(GL_QUADS);
    glVertex2f(200.0f, 50.0f);
    glVertex2f(300.0f, 50.0f);
    glVertex2f(300.0f, 150.0f);
    glVertex2f(200.0f, 150.0f);
    glColor3f(1.0f, 1.0f, 0.0f);
    glEnd();

    // Draw a circle
    const float PI = 3.14159265f;
    int numSegments = 100;
    float radius = 50.0f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(400.0f, 100.0f);
    for (int i = 0; i <= numSegments; i++) {
        float angle = 2.0f * PI * i / numSegments;
        float x = 400.0f + radius * cos(angle);
        float y = 100.0f + radius * sin(angle);
        glVertex2f(x, y);
        glColor3f(1.0f, 0.0f, 1.0f);
    }
    glEnd();

    // Draw a pentagon
    float centerX = 100.0f;
    float centerY = 300.0f;
    float sideLength = 80.0f;
    glBegin(GL_POLYGON);
    for (int i = 0; i < 5; i++) {
        float angle = 2.0f * PI * i / 5;
        float x = centerX + sideLength * cos(angle);
        float y = centerY + sideLength * sin(angle);
        glVertex2f(x, y);
        glColor3f(2.0f, 2.0f, 0.0f);
    }
    glEnd();

    glFlush(); // Flush the rendering pipeline
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 400);
    glutCreateWindow("Drawing Shapes Example");
    
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set clear color to black

    gluOrtho2D(0, 600, 0, 400); // Set up the coordinate system

    glutDisplayFunc(display);
    
    glutMainLoop();
    return 0;
}

