#include<iostream>
# include "iGraphics.h"
int mposx,  mposy;

//First Page
int fp = 1;
// Help page 
int hp = 0;

//credits page
int cp = 0;

//background
int bgX = 300, bgY = 0;

//Life part

int hr = 1;

//music 

bool musicon = true;

//red bird part

char birdRed[10][15] = {"image\\br1.bmp", "image\\br2.bmp", "image\\br3.bmp", "image\\br4.bmp" };
int  birdRedC = 0,redbirdX=0,redbirdY=600;

//lion part
char lion[15][15] = { "image\\2a.bmp", "image\\2b.bmp", "image\\2c.bmp", "image\\2d.bmp", "image\\2e.bmp", "image\\2f.bmp", "image\\2g.bmp", "image\\2h.bmp", "image\\2i.bmp", "image\\2j.bmp" };
int lionc = 0, lionX = 1500, lionY = 100;
int l = 0, ll = 0;

//bird eagle part

char birdE[10][15] = { "image\\3a.bmp", "image\\3b.bmp", "image\\3c.bmp", "image\\3dc.bmp" };
int  birdEC = 0, birdEX = 0, birdEY = 300;
int r = 0;
  //sub part eagle
  int  birdEC1 = 0, birdEX1 = 1500, birdEY1 = 300;
  int r1 = 0;
   

//Normal bird part
char birdN[15][15] = { "image\\bs1.bmp", "image\\bs2.bmp", "image\\bs3.bmp", "image\\bs4.bmp", "image\\bs5.bmp", "image\\bs6.bmp", "image\\bs7.bmp", "image\\bs8.bmp", "image\\bs9.bmp" };
int birdNC = 0, birdNX = 0, birdNY = 500;
 //sub part normal part
   int birdNC1 = 0, birdNX1 = 1500, birdNY1 = 600;
   //subpart 2
   int birdNC2 = 0, birdNX2 = 1500, birdNY2 = 600;
   


//Hunter part
char hunter[15][15] = { "image\\h1.bmp", "image\\h2.bmp", "image\\h3.bmp", "image\\h4.bmp", "image\\h5.bmp", "image\\h6.bmp", "image\\h7.bmp" };
int hunterC = 0, hunterX = 300, hunterY = 100;

int h = 0,p=0,x=0;

//Score part

char score1[15][15] = { "image\\n0.bmp", "image\\n1.bmp", "image\\n2.bmp", "image\\n3.bmp", "image\\n4.bmp", "image\\n5.bmp", "image\\n6.bmp", "image\\n7.bmp", "image\\n8.bmp","image\\n9.bmp" };
int score = 0,sc=0,mm=0,nn=0;



//died part

//died redbird
bool killredbird = false;

//died normal bird
bool killNbird = false;
bool killNbird1= false;
bool killNbird2 = false;

//died eagle 

bool killeagle = false;

bool killeagle1 = false;

//died hunter
bool killHunter = false;

//died lion
bool killLion = false;


//bullet for lion
bool bulletL = false, bulletLE = false;  // ** bulletL bullet running. ** lion bullet lock for bulletLE  
int bulletLX = hunterX+130, bulletLY = 210;


//bullet number 1

bool bullet1 = false, bullet1L = false;
int bullet1X = hunterX + 100, bullet1Y = 250;


void iDraw()
{
	//place your drawing codes here
	iClear();

	if (fp == 1)
	{
		iShowBMP(0, 0, "image\\fp.bmp");

	}
	if (hp == 1)
	{
		iShowBMP(0, 0, "image\\hp.bmp");

	}
	if (cp == 1)
	{
		iShowBMP(0, 0, "image\\cp.bmp");

	}

	else if (fp==0)
	{
		//background
		iShowBMP(bgX, bgY, "image\\1.bmp");



		//red bird
		if (!killredbird)
		{

			iShowBMP2(redbirdX, redbirdY, birdRed[birdRedC], 0);
			if (birdRedC == 3)
			{
				birdRedC = 0;
			}
			else
			{
				birdRedC++;
			}
			redbirdX += 5;
			if (redbirdX > 1500)
			{
				redbirdX = 0;
				redbirdY = rand() % 650;
				if (redbirdY < 200)
				{
					redbirdY += 300;
				}
				else if (redbirdY < 400)
				{
					redbirdY += 200;
				}
			}


		}

		else
		{
			redbirdX = 0;
			redbirdY = rand() % 650;
			if (redbirdY < 200)
			{
				redbirdY += 300;
			}
			else if (redbirdY < 400)
			{
				redbirdY += 200;
			}
			bullet1X = hunterX + 100;
			bullet1Y = 250;

			killredbird = false;

		}


		//bird eagle 

		if (!killeagle)
		{ 
			iShowBMP2(birdEX, birdEY, birdE[birdEC], 255);
			if (birdEC == 2)
			{
				birdEC = 0;
			}
			else
			{
				if (r == 2)
				{
					birdEC++;
					r = 0;
				}
				else
				{
					r++;
				}

			}

			birdEX += 6;
			if (birdEX > 1800)
			{
				birdEX = 0;
				birdEY = rand() % 650;
				if (birdEY < 250)
				{
					birdEY += 300;
				}
				else if (birdEY < 400)
				{
					birdEY += 200;
				}
			}




		}

		else
		{
			birdEX = 0;
			birdEY = rand() % 650;
			if (birdEY < 250)
			{
				birdEY += 300;
			}
			else if (birdEY < 400)
			{
				birdEY += 200;
			}
			bullet1X = hunterX + 100;
			bullet1Y = 250;

			killeagle= false;

		}
		//sub part eagle 
		if (!killeagle1)
		{
			iShowBMP2(birdEX1, birdEY1, birdE[birdEC1], 255);
			if (birdEC1 == 2)
			{
				birdEC1 = 0;
			}
			else
			{
				if (r1 == 2)
				{
					birdEC1++;
					r1 = 0;
				}
				else
				{
					r1++;
				}

			}

			birdEX1 += 6;
			if (birdEX1 > 2000)
			{
				birdEX1 = 0;
				birdEY1 = rand() % 650;
				if (birdEY1 < 200)
				{
					birdEY1 += 300;
				}
				else if (birdEY1 < 400)
				{
					birdEY1 += 200;
				}
			}




		}

		else
		{
			birdEX1 = 0;
			birdEY1 = rand() % 650;
			if (birdEY1 < 200)
			{
				birdEY1 += 300;
			}
			else if (birdEY1 < 400)
			{
				birdEY1 += 200;
			}
			bullet1X = hunterX + 100;
			bullet1Y = 250;

			killeagle1 = false;

		}

		


		//Normal bird
		if (!killNbird)
		{

			iShowBMP2(birdNX, birdNY, birdN[birdNC], 255);
			if (birdNC == 8)
			{
				birdNC = 0;

			}
			else
			{
				birdNC++;

			}

			birdNX += 3;
			if (birdNX > 2000)
			{
				birdNX = 0;
				birdNY = rand() % 650;
				if (birdNY < 200)
				{
					birdNY += 300;
				}
				else if (birdNY < 400)
				{
					birdNY += 200;
				}
			}

		}

		else
		{
			birdNX = 1500+rand()%400;
			birdNY = rand() % 650;
			if (birdNY < 200)
			{
				birdNY += 300;
			}
			else if (birdNY < 400)
			{
				birdNY += 200;
			}
			bullet1X = hunterX + 100;
			bullet1Y = 250;

			killNbird = false;

		}
		//sub part normal bird
		if (!killNbird1)
		{

			iShowBMP2(birdNX1, birdNY1, birdN[birdNC1], 255);
			if (birdNC1 == 8)
			{
				birdNC1 = 0;

			}
			else
			{
				birdNC1++;

			}

			birdNX1 += 3;
			if (birdNX1 > 2000)
			{
				birdNX1 = 0;
				birdNY1 = rand() % 650;
				if (birdNY1 < 200)
				{
					birdNY1 += 300;
				}
				else if (birdNY1 < 400)
				{
					birdNY1 += 200;
				}
			}

		}

		else
		{
			birdNX1 = 1500 + rand() % 400;
			birdNY1 = rand() % 650;
			if (birdNY1 < 200)
			{
				birdNY1 += 300;
			}
			else if (birdNY1 < 400)
			{
				birdNY1 += 200;
			}
			bullet1X = hunterX + 100;
			bullet1Y = 250;

			killNbird1 = false;

		}
		//sub part 2 normal bird 
		if (!killNbird2)
		{

			iShowBMP2(birdNX2, birdNY2, birdN[birdNC2], 255);
			if (birdNC2 == 8)
			{
				birdNC2 = 0;

			}
			else
			{
				birdNC2++;

			}

			birdNX2 += 3;
			if (birdNX2 > 2500)
			{
				birdNX2 = 0;
				birdNY2 = rand() % 650;
				if (birdNY2 < 200)
				{
					birdNY2 += 300;
				}
				else if (birdNY2 < 400)
				{
					birdNY2 += 200;
				}
			}

		}

		else
		{
			birdNX2 = 1500;
			birdNY2 = rand() % 650;
			if (birdNY2 < 200)
			{
				birdNY2 += 300;
			}
			else if (birdNY2 < 400)
			{
				birdNY2 += 200;
			}
			bullet1X = hunterX + 100;
			bullet1Y = 250;

			killNbird2 = false;

		}

		//lion part start




		//lion
		if (!killLion && score>9)
		{
			iShowBMP2(lionX, lionY, lion[lionc], 0);
			if (lionc == 9)
			{
				lionc = 0;
			}
			else
			{
				if (l == 3)
				{
					lionc++;
					l = 0;

				}

				else
				{
					l++;
				}

			}
			lionX -= 4;
			if (lionX <= 0)
			{
				lionX = 2000;
			}
			else
			{
				lionX -= 3;
			}
		}

		else if (ll <= 10)
		{

			iShowBMP2(lionX, lionY-100, "image\\lk.bmp", 0);
			ll++;

		}

		else
		{
			lionX = 1800+rand()%500, lionY = 100;
			bulletLX = 0, bulletLY = 0;
			killLion = false;
		}
		//hunter part
		if (!killHunter)
		{
			if (p == 1)
			{
				iShowBMP2(hunterX, hunterY, hunter[hunterC], 0);
				p = 0;
			}
			else if (p == 2)
			{
				iShowBMP2(hunterX, hunterY, hunter[6], 0);
				if (x == 5)
				{
					p = 0;
					x = 0;
				}
				else
				{
					x++;
				}


			}
			else
			{
				iShowBMP2(hunterX, hunterY, hunter[0], 0);
			}
			if (hunterC == 4)
			{
				hunterC = 0;
			}

			//hunterX += 3;
			if (hunterX > 1500)
			{
				hunterX = 300;
			}
		}
		//lion part end
		//bullet part
		//bullet for lion
		if (bulletL && !killHunter)
		{
			iShowBMP2(bulletLX, bulletLY, "image\\bulletL.bmp", 0);
			bulletLX += 10;
			if (bulletLX >= 1400)
			{
				bulletLE = false;
				bulletL = false;
			}
		}
		//bullet number 1
		if (bullet1)
		{
			iShowBMP2(bullet1X, bullet1Y, "image\\bulletb1.bmp", 0);
			bullet1Y += 10;
			if (bullet1Y >= 700)
			{
				bullet1 = false;
				bullet1L = false;
			}
		}


		//killed part 



		//hunter killed cause
		if (lionX < hunterX + 50)
		{
			killHunter = true;
		}

		//after hunter killed


		//lion killed
		if (bulletLX > lionX + 20 && bulletLE)
		{
			killLion = true;
			bulletL = false;
			bulletLE = false;
			ll = 0;
		}

		//redbird killed part
		if ((redbirdX <= bullet1X && (redbirdX + 110 >= bullet1X)) && (bullet1Y >= redbirdY && bullet1Y <= redbirdY + 50))
		{
			killredbird = true;
			bullet1L = false;
			bullet1 = false;
			if (hr < 3)
			{
				hr++;
			}
		}



		//killed normal bird part


		if ((birdNX <= bullet1X && (birdNX + 140 >= bullet1X)) && (bullet1Y >= birdNY && bullet1Y <= birdNY + 70))
		{
			killNbird = true;
			bullet1L = false;
			bullet1 = false;
			score++;
			
		}

		//sub part 
		if ((birdNX1 <= bullet1X && (birdNX1 + 140 >= bullet1X)) && (bullet1Y >= birdNY1 && bullet1Y <= birdNY1 + 70))
		{
			killNbird1 = true;
			bullet1L = false;
			bullet1 = false;
			score++;

		}

		if ((birdNX2 <= bullet1X && (birdNX2 + 140 >= bullet1X)) && (bullet1Y >= birdNY2 && bullet1Y <= birdNY2 + 70))
		{
			killNbird2 = true;
			bullet1L = false;
			bullet1 = false;
			score++;

		}


		//killed eagle bird part
		if ((birdEX <= bullet1X && (birdEX + 140 >= bullet1X)) && (bullet1Y >= birdEY && bullet1Y <= birdEY + 50))
		{
			killeagle = true;
			bullet1L = false;
			bullet1 = false;
			if (hr > 0)
			{
				hr--;
			}
		}
		// sub part
		 
		if ((birdEX1 <= bullet1X && (birdEX1 + 140 >= bullet1X)) && (bullet1Y >= birdEY1 && bullet1Y <= birdEY1 + 50))
		{
			killeagle1 = true;
			bullet1L = false;
			bullet1 = false;
			if (hr > 0)
			{
				hr--;
			}
		}



		//point background

		iShowBMP(0, 0, "image\\sb.bmp");
		//score
		mm = (score / 10);
		nn = (score % 10);

		iShowBMP2(10,500, score1[mm], 0);
		iShowBMP2(150, 500, score1[nn], 0);




		//life
		if (hr == 1)
		{
			iShowBMP2(0, 250, "image\\hr.bmp",0);

		}
		if (hr == 2)
		{
			iShowBMP2(0, 250, "image\\hr.bmp", 0);
			iShowBMP2(100, 250, "image\\hr.bmp", 0);

		}
		if (hr == 3)
		{
			iShowBMP2(0, 250, "image\\hr.bmp", 0);
			iShowBMP2(100, 250, "image\\hr.bmp", 0);
			iShowBMP2(200, 250, "image\\hr.bmp", 0);

		}

		iSetColor(0, 0, 255);

		//iText(30, 300, " Your score is %d ", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0, 0, 0);


		//gameover backgroud

		if (killHunter||hr==0)
		{
			iShowBMP(0, 0, "image\\gameover.bmp");
			//score
			mm = (score / 10);
			nn = (score % 10);

			iShowBMP2(600, 270, score1[mm], 0);
			iShowBMP2(750, 270, score1[nn], 0);

		}

	}

	


}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx,int my)
{
	//place your code here

 mposx = mx;
 mposy = my;
 if(mx== 2)
 {
 }        /*Something to do with mx*/
 else if(my== 2){}   /*Something to do with my*/

}

void iKeyboard(unsigned char key)
{
	//play 

	if (key =='p')
	{
		fp = 0;
		hp = 0;
		cp = 0;
		killHunter = false;
		hr = 1;
		score = 0;
	}

	if (key == 'h')
	{
		hp = 1;
	}
	if (key == 'c')
	{
		cp = 1;
		fp = 0;
		hp = 0;
	}

	if (key == 'r')
	{
		fp = 1;
		hp = 0;
		cp = 0;
	}
	

	


	//bullet for lion
	if(key == '0')
	{
		if (!bulletLE)
		{
			bulletLE = true;
			bulletL = true;
			bulletLX = hunterX + 130, bulletLY = 210;
		}
	}
	//bullet number 1
	if (key == '1')
	{
		if (!bullet1L)
		{
			bullet1L = true;
			bullet1 = true;
			bullet1X = hunterX + 100, bullet1Y = 250;
			p = 2;
		
		}
	}
}

void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}

	else if (key == GLUT_KEY_RIGHT)
	{
		//hunter part

		p = 1;
		hunterX = hunterX + 5;
		if (hunterC == 4)
		{
			hunterC = 1;
		}
		else
		{
			if (h == 3)
			{
				hunterC++;
				h = 0;
			}
			else
			{
				h++;
			}
		}

		//background part
		bgX -= 2;
		if (bgX == 0)
		{
			bgX = 300;
		}	
	}
	else if (key == GLUT_KEY_LEFT)
	{
		//hunter part
		if (270 < hunterX)
		{
			hunterX -= 5;
			p = 1;
			if (hunterC == 4)
			{
				hunterC = 1;
			}
			else
			{
				if (h == 3)
				{
					hunterC++;
					h = 0;
				}
				else
				{
					h++;
				}
			}
		}
		//background part
		bgX -= 2;
		if (bgX == 0)
		{
			bgX = 300;
		}

	
	}
	//music part
	if (key == GLUT_KEY_F1)
	{

		if (musicon)
		{
			musicon = false;
			PlaySound(0, 0, 0);
		}

		else
		{
			musicon = true;
			//PlaySound("m\\berkasmp3.wav", NULL, SND_LOOP | SND_ASYNC);
			PlaySound("m\\jj.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}
	                                                                            
	if (key == GLUT_KEY_INSERT)
	{
		killHunter = false;
		hunterX = 300, hunterY = 100;
		lionX = 1500, lionY = 100;


	}

	//place your codes for other keys here
}

int main()
{
	//place your own initialization codes here.
	if (musicon)
		//PlaySound("m\\berkasmp3.wav", NULL, SND_LOOP | SND_ASYNC);
		PlaySound("m\\jj.wav", NULL, SND_LOOP | SND_ASYNC);


	iInitialize(1500, 800, "demooo");
	return 0;
}
