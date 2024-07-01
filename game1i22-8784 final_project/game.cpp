//============================================================================
// Name        : .cpp
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Battleship. ////////////////// this 
//============================================================================
#include<bits/stdc++.h>
#ifndef Battleship_CPP_

#define Battleship_CPP_
#include "util.h"
#include <fstream>                         
#include <string.h>
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;

int click=0;
int shipx,shipy;
int a=600,b=200,  //ships variables for the x and y 
c=790,d=200,
  e=650,f=722
 ,g=600,h=300
 ,i=729,j=300
 ,k=860,l=300
 ,m=630,n=400
 ,o=700,p=400
 ,q=770,r=400
 ,s=850,t=400;
 int tis ,mis ;
 
int ab,bc,cd,ef,gh,ij,kl,mn,op,qr;
int add=1;
bool x1,x2,x3,x4,x5,x6,x7=1,x8=1,x9=1,x10=1;
int xi=50 ,xii=630,xiii=700,xiv=770,xv=850,xvi=600,xvii=730,xviii=860,xix=600,xx=790,xxi=670;     //for the left down corner Xcomponent 
int yi=690,yii=440,yiii=440,yiv=440,yv=440,yvi=540,yvii=540,yviii=540,yix=640,yx=640,yxi=200;         //for the left down corner y component
int XI=550,XII=680,XIII=750,XIV=820,XV=900,XVI=700,XYII=830,XVIII=960,XIX=750,XX=940,XXI=870;          //for the right  top X component
int YI=190,YII=390,YIII=390,YIV=390,YV=390,YVI=490,YVII=490,YVIII=490,YIX=590,YX=590,YXI=155;        //for the right top Y coordinate
int array[][];
void array (){
for (int i=0;i<=9;i++ )                                            //this is the formation of the array 
{
for (int j=0;j<=9;j++)
{
a[j][i]=0;
}
}
}



bool x=false;
int y;
int  ship1=0,ship2=0,ship3=0,ship4=0,ship5=0,ship6=0,ship7=0,ship8=0,ship9=0;
void mainpage()  {                                                                         // this is for the main page 
         
	glClear (GL_COLOR_BUFFER_BIT);
	DrawRectangle(0,0,1020,840,colors[BLACK]);
	
        DrawString( ab=400, bc=800, "Battleship", colors[MISTY_ROSE]);
	DrawRectangle(40,f=635, 60,50,colors[RED]);               DrawString( cd=50, ef=650, "Play", colors[MISTY_ROSE]);
	DrawString( gh=50, ij=550, "Options", colors[MISTY_ROSE]);
	DrawString( kl=50, mn=450, "Leaderboard", colors[MISTY_ROSE]);
	DrawString( op=50, qr=350, "Balance", colors[MISTY_ROSE]);
	                                                                       
	glutSwapBuffers();
	
	glutPostRedisplay();
}


void file()               // function for the saving data of user into the file 
{
glClear (GL_COLOR_BUFFER_BIT);
DrawString( 400,700, "NAMe", colors[MISTY_ROSE]);
string data;
ofstream outdata;
outdata.open("//E: score");
cin>>data;
outdata.close();
return ;


	glutSwapBuffers();
	
	glutPostRedisplay();
}

void leaderboard()                //for the leader board function
{

glClear (GL_COLOR_BUFFER_BIT);
int score ;
ifstream indata;
indata.open("//E: score");
score ;
int max ;
while (1)
if (max>score)
{
max=score;
 
}
 DrawString( ab=400, bc=800, "max ", colors[MISTY_ROSE]);
outdata.close();

}
void grid()                                                             //this is function for drawing of the grid 
{
	glClear (GL_COLOR_BUFFER_BIT);
	DrawString(250,750,"high score ", colors[WHITE]);
	DrawString(400,800, "BATTLE SHIPS", colors[RED]);
	DrawString(680,500, "ships", colors[RED]);	
	DrawString(300,680, "grid", colors[RED]);
	int a1=50,b1=150,a2=50,b2=650;
	for(int i=0;i<=10;i++){                                 // this is the loop for drawing lines 
	DrawLine(a1,b1,a2,b2);
	a1+=50;
	a2+=50;
	}
	int A1=50,A2=550,B1=150,B2=150;
	for(int i=0;i<=10;i++){                                                 // this is the loop for drawing lines 
	DrawLine(A1,B1,A2,B2);
	B1+=50;
	B2+=50 ;
	}          
	if(click==1){if (add==1)                                                  //logic for the ships movement 
		if((shipx>630 && shipx<680) &&(shipy>390 && shipy<440)){
			m=shipx;
			n=shipy;
			add++;
		}if (add==2)
		if((shipx>700 && shipx<750) &&(shipy>390 && shipy<440)){
			o=shipx;
			p=shipy;
			
			add++;
		}if (add==3)
		if((shipx>770 && shipx<820) &&(shipy>390 && shipy<440)){
			q=x;
			r=y;
		add++;
		}if (add==4)
		if((shipx>850 && shipx<900) &&(shipy>390 && shipy<440)){
			s=shipx;
			t=shipy;add++;
		}if (add==5)
		if((shipx>600 && shipx<700) &&(shipy>490 && shipy<540)){
			g=shipx;
			h=shipy;add++;
		}if (add==6)
		if((shipx>730 && shipx<830) &&(shipy>490 && shipy<540)){
			i=shipx;
			j=shipy;add++;
		}if (add==7)
		if((shipx>860 && shipx<960) &&(shipy>490 && shipy<540)){
			k=shipx;
			l=shipy;add++;
		}if(add==8)
		if((shipx>600 && shipx<750) &&(shipy>592 && shipy<640)){
			a=shipx;
			b=shipy;add++;
		}if (add==9)
		if((shipx>790 && shipx<940) &&(shipy>590 && shipy<640)){
			c=shipx;
			d=shipy;add++;
		}if (add==10)
		if((shipx>650 && shipx<850) &&(shipy>150 && shipy<200)){
			e=shipx;
			f=shipy;add++;
		}
	}
        DrawRectangle(a,b, 150,50,colors[DARK_OLIVE_GREEN]);//3block             //for the ships in the form of square 
	DrawRectangle(c,d, 150,50,colors[DARK_OLIVE_GREEN]);//3block
	DrawRectangle(e,f, 200,50,colors[AQUA]); //4 blocks  
	DrawRectangle(g,h, 100,50,colors[MISTY_ROSE]);//2 block
	DrawRectangle(i,j, 100, 50,colors[MISTY_ROSE]);//2 block
	DrawRectangle(k,l,  100, 50,colors[MISTY_ROSE]);//2 block
	DrawRectangle(m,n,  50,50,colors[RED]);//1 block
	DrawRectangle(o,p,  50,50,colors[RED]);//1 block
	DrawRectangle(q,r, 50,50,colors[RED]);//1 block
	DrawRectangle(s,t, 50,50,colors[RED]);//1 block
	
	glutSwapBuffers();
	glutPostRedisplay();
	
	
	
	}

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}


int xI = 400, yI = 400;

void drawObject() {
	DrawSquare(xI, yI, 20, colors[WHITE]);
	glutPostRedisplay();
}


bool flag = true;
void moveObject() {
	
	if (xI > 10 && flag) {
		xI -= 10;
		//cout << "going left";
		if(xI < 100)
			
			flag = false;

	}
	else if (xI < 1010 && !flag) {
		//cout << "go right";
		xI += 10;
		if (xI > 900)
			flag = true;
	}
}

/*
 * Main Canvas drawing function.
 * */

void GameDisplay()/**/{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim red and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	//Red Square
	
	mainpage();
	glutDisplayFunc(mainpage);
	
	glutSwapBuffers(); // do not modify this line..

}


/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		xI -= 10;

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		xI += 10;
	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		yI += 10;
	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		yI -= 10;
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == 'b' || key == 'B') //Key for placing the bomb
			{
		//do something if b is pressed
		cout << "b pressed" << endl;

	}
	glutPostRedisplay();
}



/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here
	moveObject();

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(100, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
 
 bool newshoukat;

        void MousePressedAndMoved(int x, int y) {
	//cout << x << " " << y << endl;                             //function for the clicked and move of the ships
	newshoukat=1;
	int shoukat=1;
	shipx=x;                                                     //to change the x axis with the ship x axis 
	shipy=840-y;                                    // this will change the y axis with the ship y axis 

	click=1;



	cout<<tis=(x-50)/50<<"  ,   "<<mis=(y-150)/50<<endl;  


MouseClicked( GLUT_LEFT_BUTTON, state,tis  ,mis  )

a[tis][mis]==colours[RED];                                              //for the ships that is hitted 

score +=10;                                                     //score addition here  
	
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */

void MouseClicked(int button, int state, int x, int y) {
cout <<x<<"  , "<<y<<endl;
cout<<tis=(x-50)/50<<"  ,   "<<mis=(y-150)/50<<endl;                                //this logic will make the grid in the form of the two d array 






	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
	{
	add+=1;
	if(((x>=40)&&(x<=100))&&((y>=155)&&(y<=205))){
	                                                                           //for playa button
	glutDisplayFunc(grid);} 

        shipx=x;
	shipy=840-y;
	click=1;
	}

		//cout << GLUT_DOWN << " " << GLUT_UP << endl;

	 else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	glutPostRedisplay();
}

/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {


	int width = 1020, height = 840; // i have set my window size to be 800 x 600

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Battleship Game"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* Battleship_CPP_ */
