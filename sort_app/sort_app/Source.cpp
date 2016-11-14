//// Fonts.cpp : Defines the entry point for the console application.
////
//
//
//
//#include<iostream>
//#include<string>
//using namespace std;
//#include<GL/glut.h>
//int LEN;
//int arr[100];
//
//	
//
//
//void delay(){
//	int c = 1, d = 1,k;
//	
//	for (c = 1; c <= 32767; c++)
//	for (d = 1; d <= 32767; d++)
//	{
//	}
//
//}
//
//string buildstr(){
//	string st = "";
//	for (int i = 0; i < LEN; i++){
//		st += std::to_string(arr[i]);
//		st += " ";
//	}
//	return st;
//}
//
//
//void drawBitmapText(string str, float x, float y, float z)
//{
//	string c;
//	glRasterPos3f(x, y, z);
//
//	for (int i = 0; i < str.length(); i++)
//	{
//		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, str[i]);
//	}
//}
//
//void drawBitmapTextMsg(string str, float x, float y, float z)
//{
//	string c;
//	glRasterPos3f(x, y, z);
//
//	for (int i = 0; i < str.length(); i++)
//	{
//		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
//	}
//}
//
//void drawBitmapNum(string str, float x, float y, float z)
//{
//	string c;
//	glRasterPos3f(x, y, z);
//
//	for (int i = 0; i < str.length(); i++)
//	{
//		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
//	}
//}
//
//
//void drawStrokeText(char*string, int x, int y, int z)
//{
//	char *c;
//	glPushMatrix();
//	glTranslatef(x, y + 8, z);
//	 glScalef(0.09f,-0.08f,z);
//
//	for (c = string; *c != '\0'; c++)
//	{
//		glutStrokeCharacter(GLUT_STROKE_ROMAN, *c);
//	}
//	glPopMatrix();
//}
//
//void drawpolygon(){
//	glColor3f(1, 0, 0);
//	glBegin(GL_POLYGON);
//	glVertex2i(20, 20);
//	glVertex2i(40, 30);
//	glVertex2i(40, 20);
//	glVertex2i(20, 30);
//	glEnd();
//	glColor3f(.5, .5, .5);
//	drawBitmapText("CURRENT INDEX", 50, 30, 0);
//
//	glColor3f(0, 0, 1);
//	glBegin(GL_POLYGON);
//	glVertex2i(170, 20);
//	glVertex2i(190, 30);
//	glVertex2i(190, 20);
//	glVertex2i(170, 30);
//	glEnd();
//	glColor3f(.5, .5, .5);
//	drawBitmapText("SWAP INDEX", 200, 30, 0);
//
//}
//
//void sort(){
//	glColor3f(0, 1, 0);
//	string st = "";
//
//	int c, d, swap, position, n = LEN;
//	for (c = 0; c < (n - 1); c++)
//	{
//		position = c;
//
//		if (c == n - 2)
//		{
//			glColor3f(.7, .4, .5);
//			drawBitmapTextMsg("Finishing Sorting!!", 250, 180, 0);
//			delay(); delay(); delay();
//
//		}
//		
//
//		for (d = c + 1; d < n; d++)
//		{
//			if (arr[position] > arr[d])
//				position = d;
//		}
//		
//		for (int i = 0; i < LEN; i++){
//			
//			drawpolygon();
//			if (c == i) glColor3f(1, 0, 0);
//			else glColor3f(0, 1, 0);
//
//			drawBitmapNum(to_string(arr[i]), 125 + i * 40, 125, 0);
//			if (position == i) glColor3f(0, 0, 1);
//
//			drawBitmapNum(to_string(arr[i]), 125 + i * 40, 125, 0);
//		}
//		glutSwapBuffers();
//		glutPostRedisplay();
//		glClear(GL_COLOR_BUFFER_BIT);
//		delay();
//		delay();
//
//		if (position != c)
//		{
//			swap = arr[c];
//			arr[c] = arr[position];
//			arr[position] = swap;
//		}
//		
//		
//		
//	}
//
//	
//}
//
//void init()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glClearColor(1,1,.5,1);
//	gluOrtho2D(0, 750, 0, 200);
//}
//
//
//void reshape(int w, int h)
//{
//
//	glViewport(0, 0, w, h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(0, w, h, 0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//
//}
//
//void mouse(int btn, int state, int x, int y)
//{
//	if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN);
//		//glutIdleFunc(sort);
//	if (btn == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
//		glutIdleFunc(NULL);
//}
//
//
//void render(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glLoadIdentity();
//	sort();
//	glutSwapBuffers();
//}
//
//
//
//int main(int argc, char* argv[])
//{	
//	cin >> LEN;
//	for (int i = 0; i < LEN; i++)
//		cin >> arr[i];
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);	
//	glutInitWindowSize(750, 200);	
//	glutInitWindowPosition(0, 0);
//	glutCreateWindow("Selection Sort");
//	glutDisplayFunc(render);	
//	glutReshapeFunc(reshape);
//	//glutIdleFunc(sort);
//	//glutMouseFunc(mouse);
//
//	// enter the main loop 
//	glutMainLoop();
//	return 0;
//}
