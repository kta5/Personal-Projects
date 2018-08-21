#include <iostream>
#include <deque>

#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif

using namespace std;

// Some global variables to maintain state

// A point data structure
struct Point {
	// The coordinates of the point
	float x;
	float y;

	// The color of the point
	float r;
	float g;
	float b;

	// A constructor for point
	Point(float x, float y, float r, float g, float b) {
		this->x = x;
		this->y = y;
		this->r = r;
		this->g = g;
		this->b = b;
	}
};

// A "Double Ended QUEue" to store points 
deque<Point> points;

// Variables to store current color, initialize to black
float red = 0.0, green = 0.0, blue = 0.0;

// Store the width and height of the window
int width = 640, height = 640;

//-------------------------------------------------------
// A function to draw the scene
//-------------------------------------------------------
void appDrawScene() {
	// Clear the screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Set background color to white
	glClearColor(1.0, 1.0, 1.0, 1.0);

	// Set up the transformations stack
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	// Set the color to the current values of the global vars
	glColor3f(red, green, blue);

	// // Set point size
	glPointSize(6);

	// Draw a point at the bottom-right
    // -------------------------------------------------// "K"
    
	glBegin(GL_POLYGON);
    glColor3f(0.343534,0.454386,0.52345234);
    //First Part of "K"
    glVertex2f(-1.0, 0.5);
    glVertex2f(-0.9, 0.5);
    glVertex2f(-0.9, -0.5);
    glVertex2f(-1.0, -0.5);
	glEnd();
    
    glBegin(GL_POLYGON);
    glColor3f(0.343534,0.454386,0.52345234);
    //Second Part of "K"
    glVertex2f(-1.0, 0.0);
    glVertex2f(-0.9, 0.0);
    glVertex2f(-0.7, 0.5);
    glVertex2f(-0.8, 0.5);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3f(0.343534,0.454386,0.52345234);
    //Third Part of "K"
    glVertex2f(-1.0, 0.0);
    glVertex2f(-0.9, 0.0);
    glVertex2f(-0.7, -0.5);
    glVertex2f(-0.8, -0.5);
    glEnd();
    
    //---------------------------------------------------//
    
    glBegin(GL_POLYGON);
    glColor3f(0.12123412,0.5634563,0.7485906);
    //First Part of "E"
    glVertex2f(-0.6, -0.5);
    glVertex2f(-0.6, 0.5);
    glVertex2f(-0.5, 0.5);
    glVertex2f(-0.5, -0.5);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3f(0.12123412,0.5634563,0.7485906);
    //Second Part of "E"
    glVertex2f(-0.5, 0.5);
    glVertex2f(-0.3, 0.5);
    glVertex2f(-0.3, 0.4);
    glVertex2f(-0.5, 0.4);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3f(0.12123412,0.5634563,0.7485906);
    //Second Part of "E"
    glVertex2f(-0.5, -0.5);
    glVertex2f(-0.3, -0.5);
    glVertex2f(-0.3, -0.4);
    glVertex2f(-0.5, -0.4);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3f(0.12123412,0.5634563,0.7485906);
    //Third Part of "E"
    glVertex2f(-0.5, 0.05);
    glVertex2f(-0.3, 0.05);
    glVertex2f(-0.3, -0.05);
    glVertex2f(-0.5, -0.05);
    glEnd();
    
    //----------------------------------------------------//
    
    glBegin(GL_POLYGON);
    glColor3f(0.456734895,0.563546,0.768957);
    //First Part of "V"
    glVertex2f(-0.2, 0.5);
    glVertex2f(-0.1, 0.5);
    glVertex2f(0.0, -0.4);
    glVertex2f(0.0, -0.5);
    glVertex2f(-0.1, -0.5);
    
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3f(0.456734895,0.563546,0.768957);
    //Second Part of "V"
    glVertex2f(0.2, 0.5);
    glVertex2f(0.1, 0.5);
    glVertex2f(0.0, -0.4);
    glVertex2f(0.0, -0.5);
    glVertex2f(0.1, -0.5);
    
    glEnd();
    
    //-------------------------------------------------//
    
    glBegin(GL_POLYGON);
    glColor3f(0.2345897234,0.563489,0.76895408);
    // "I"
    glVertex2f(0.3, 0.5);
    glVertex2f(0.4, 0.5);
    glVertex2f(0.4, -0.5);
    glVertex2f(0.3, -0.5);
    
    glEnd();
    
    //-------------------------------------------------//
    
    glBegin(GL_POLYGON);
    glColor3f(0.6784593,0.898709,0.9341231);
    // First Part of "N"
    glVertex2f(0.5, 0.5);
    glVertex2f(0.6, 0.5);
    glVertex2f(0.6, -0.5);
    glVertex2f(0.5, -0.5);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3f(0.6784593,0.898709,0.9341231);
    // Second Part of "N"
    glVertex2f(0.9, 0.5);
    glVertex2f(1.0, 0.5);
    glVertex2f(1.0, -0.5);
    glVertex2f(0.9, -0.5);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3f(0.6784593,0.898709,0.9341231);
    // Second Part of "N"
    glVertex2f(0.6, 0.5);
    glVertex2f(0.9, -0.3);
    glVertex2f(0.9, -0.5);
    glVertex2f(0.6, 0.3);
    glEnd();
    
    



	// Draw all the points stored in the double-ended queue
	for (int i = 0; i < points.size(); i++) {

		// Set the vertex color to be whatever we stored in the point
		glColor3f(points[i].r, points[i].g, points[i].b);

		glBegin(GL_POINTS);

		// Draw the vertex in the right position
		glVertex2f(points[i].x, points[i].y);

		glEnd();
	}

	// We have been drawing everything to the back buffer
	// Swap the buffers to see the result of what we drew
	glFlush();
	glutSwapBuffers();
}

//-------------------------------------------------------
// A function to convert window coordinates to scene
// We use it when a mouse event is handled
// Arguments: 	
//	x, y - the coordinates to be updated
//-------------------------------------------------------


int main(int argc, char** argv) {
	// Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);

	// Setup window position, size, and title
	glutInitWindowPosition(20, 60);
	glutInitWindowSize(width, height);
	glutCreateWindow("Hi, Im Kevin");

	// Setup some OpenGL options
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_POINT_SMOOTH);
	glEnable(GL_LINE_SMOOTH);


	// Set callback for drawing the scene
	glutDisplayFunc(appDrawScene);

	// Set callback for resizing th window
	//glutReshapeFunc(appReshapeFunc);

	// Set callback to handle mouse clicks
	//glutMouseFunc(appMouseFunc);

	// Set callback to handle mouse dragging
	//glutMotionFunc(appMotionFunc);

	// Set callback to handle keyboad events
	//glutKeyboardFunc(appKeyboardFunc);

	// Start the main loop
	glutMainLoop();
}
