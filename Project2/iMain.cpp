#include "iGraphics.h"

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://


    int homepage[50];
	int a, b, c,d,e,f,g,h,i,k;
	int gamestate = -1;
	int buttonCordinatex, buttonCordinatey;
	float x = 50;
	void iMouseMove(int storyCordinatex, int storyCordinatey)
	{
	}
	
	struct buttonCordinate
	{
		int x, y;

	}bc[6];

	void homePage()
	{
		if (gamestate == -1){
			iShowImage(0, 0, 1200, 400, a);
			iSetColor(0, 0, 0);

			iFilledCircle(185, 70, 8, 100);
			iShowImage(50, 20, 150, 100, b);
			iShowImage(900, 20, 300, 200, c);



			for (int i = 0; i < 6; i++)
			{
				iShowImage(bc[i].x, bc[i].y, 620, 175, homepage[i]);
			}


		}

		else if (gamestate == 0)
		{
			iShowImage(0, 0, 1200, 400, d);
		}
		else if (gamestate == 1)
		{
			iShowImage(0, 0, 1200, 400, d);
		}
		else if (gamestate == 2)
		{
			iShowImage(0, 0, 1200, 400, d);
		}
		else if (gamestate == 3)
		{
			iShowImage(0, 0, 1200, 400, d);
		}
		else if (gamestate == 4)
		{
			iShowImage(0, 0, 1200, 400, d);
		}




	}
	void iDraw()
	{
		iClear();
		homePage();
		

	}





	




/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


	
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{

	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (mx>=295 && mx<=915 && my>=10 && my<=185 )
		{
			gamestate = 0;
		}
		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == '\r')
	{
		
	}
	
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	if (key == GLUT_KEY_RIGHT)
	{
				
	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}

void story()
{
	iShowImage(0, 0, 1200, 400, d);

}


int main()
{
	iInitialize(1200, 400, "Dora The Explora");
	a = iLoadImage("./image/background.jpg");
	b = iLoadImage("./image/dora.png");
	c = iLoadImage("./image/owner.png");
	d = iLoadImage("./image/story.png");
	e = iLoadImage("./image/play.png");
	f = iLoadImage("./image/leaderBoard.png");
	g = iLoadImage("./image/about.png");
	h =iLoadImage("./image/control.png");
	i = iLoadImage("./image/exit.png");
	k = iLoadImage("./image/storyh.png");

	homepage[0] = e;
	homepage[1] = f;
	homepage[2] = h;
	homepage[3] = k;
	homepage[4] = g;
	homepage[5] = i;
	int sum = 10;
	for (int i = 5; i>= 0; i--)
	{
		bc[i].x= 295;
		bc[i].y= sum;
		sum += 50;
	}
	
	iStart();
	return 0;
}


	