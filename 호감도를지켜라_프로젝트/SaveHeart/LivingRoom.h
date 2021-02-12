#ifndef __IOSTREAM_H__
#define __IOSTREAM_H__
#include <iostream>
#endif

#ifndef __STRING_H__
#define __STRING_H__
#include <string>
#endif

#ifndef __CSTRING_H__
#define __CSTRING_H__
#include <cstring>
#endif

#ifndef __CSTDIO_H__
#define __CSTIO_H__
#include <cstdio>
#endif
#ifndef __FSTREAM_H__
#define __FSTREAM_H__
#include <fstream>
#endif

#ifndef __WINDOWS_H__
#define __WINDOWS_H__
#include <windows.h>
#endif

#ifndef __CONIO_H__
#define __CONIO_H__
#include <conio.h>
#endif



#ifndef __STRING_H__
#define __STRING_H__
#include <string>
#endif

#ifndef __UTIL_H__
#define __UTIL_H__
#include "util.h"
#endif

#ifndef __DRAW_H__
#define __DRAW_H__
#include "Draw.h"
#endif

#ifndef __SCREEN_H__
#define __SCREEN_H__
#include "Screen.h"
#endif

using namespace std;


void drawCLivingRoom(){
	CImageDraw("����7_2.txt",3,27);
	CImageDraw("����7_2.txt",66,27);
	CImageDraw("����7_2.txt",66+63,27);
	CImageDraw("����7_2.txt",66+63*2,27);
	CImageDraw("����7_2.txt",66+63*3,27);
	CImageDraw("����7_2.txt",66+63*4,27);
	CImageDraw("����7_2.txt",66+63*5,27);
	CImageDraw("����7_2.txt",66+63*6,27);
	CImageDraw("����7_2.txt",66+63*7,27);
	CImageDraw("����7_2.txt",66+63*8,27);
	CImageDraw("����7_2.txt",66+63*9,27);

	
	CImageDraw("����5.txt",3,27+22);
	CImageDraw("����5.txt",66,27+22);
	CImageDraw("����5.txt",66+63,27+22);
	CImageDraw("����5.txt",66+63*2,27+22);
	CImageDraw("����5.txt",66+63*3,27+22);
	CImageDraw("����5.txt",66+63*4,27+22);
	CImageDraw("����5.txt",66+63*5,27+22);
	CImageDraw("����5.txt",66+63*6,27+22);
	CImageDraw("����5.txt",66+63*7,27+22);
	CImageDraw("����5.txt",66+63*8,27+22);
	CImageDraw("����5.txt",66+63*9,27+22);

	CImageDraw("����5.txt",3,27+22+75);
	CImageDraw("����5.txt",66,27+22+75);
	CImageDraw("����5.txt",66+63,27+22+75);
	CImageDraw("����5.txt",66+63*2,27+22+75);
	CImageDraw("����5.txt",66+63*3,27+22+75);
	CImageDraw("����5.txt",66+63*4,27+22+75);
	CImageDraw("����5.txt",66+63*5,27+22+75);
	CImageDraw("����5.txt",66+63*6,27+22+75);
	CImageDraw("����5.txt",66+63*7,27+22+75);
	CImageDraw("����5.txt",66+63*8,27+22+75);
	CImageDraw("����5.txt",66+63*9,27+22+75);

	CImageDraw("���ι�.txt",66+63*10-10,27+22+50);
	CImageDraw("���ι���.txt",66+63*10-50,27+22+52);
	CImageDraw("���ι�.txt",66+63*3+10,27+22+75*2-5);
	CImageDraw("���ι���.txt",66+63*3+25,27+22+75+45);
	CImageDraw("ȭ��.txt",66+63*3+150,27+22+75+28);

	CImageDraw("����.txt",240,30);
	CImageDraw("â��.txt",390,27);
	CImageDraw("����.txt",440,27);
	CImageDraw("�ð�.txt",5,25);
	CImageDraw("������2.txt",50,27+11);
	CImageDraw("������1.txt",50+50,27+10);
	CImageDraw("ħ��.txt",3,27+22+75);
	CImageDraw("��ȭ��.txt",520,27+5);
	CImageDraw("����.txt",570,27+10);
}

void isItem(int x, int y){

	CImageDraw("���ι�.txt",66+63*10-10,27+22+50);
	CImageDraw("���ι���.txt",66+63*10-50,27+22+52);
	CImageDraw("���ι�.txt",66+63*3+10,27+22+75*2-5);
	CImageDraw("���ι���.txt",66+63*3+25,27+22+75+45);
	CImageDraw("ȭ��.txt",66+63*3+150,27+22+75+28);

	CImageDraw("����.txt",240,30);
	CImageDraw("â��.txt",390,27);
	CImageDraw("����.txt",440,27);
	CImageDraw("�ð�.txt",5,25);
	CImageDraw("������2.txt",50,27+11);
	CImageDraw("������1.txt",50+50,27+10);
	CImageDraw("ħ��.txt",3,27+22+75);
	CImageDraw("��ȭ��.txt",520,27+5);
	CImageDraw("����.txt",570,27+10);
	
	//����ǰ ����
	if(x>=66 && x<=166 && y<=70 ){
		CImageDraw("����ǰ�ȳ���Ʈ9.txt",9,205);
	}
	//�� ����
	else if(x>=406&&x<=466&& y==70 ){
		CImageDraw("���Ա�ȳ���Ʈ9.txt",9,205);
	}
	//ȭ��� ����
	else if(x>=600 && x<=645 && y>=88 && y<=124 ){		
		CImageDraw("ȭ���9.txt",9,205);
	}
	//���� �ϱ�
	else if(x>=246 && x<=346 && y>=160 && y<=166 ){	
		CImageDraw("����9.txt",9,205);
	}
	else{
		CImageDraw("thirdBlank.txt",3,205);
		CImageDraw("thirdBlank.txt",200,205);
		CImageDraw("thirdBlank.txt",3,215);
	}
}

int isMiniGame(int x, int y){

	//�ޱ��� ���� 1, ���� ���� ��ġ ���� 2, �Ӹ�������� 3 �Ž� ���� 4
	//ȭ��� ���� 5, �ʰ��� 6, ����ǰ ���� 7, �����ϱ� 8
	//-1�� �ƹ� �ϵ� �Ͼ�� �ʴ´�.

	//����ǰ ����
	if(x>=66 && x<=166 && y>=60 && y<=70 ){
		return 7;
	}
	//�� ����
	else if(x>=406&&x<=466&& y>=60 && y<=70 ){
		return 6;
	}
	//ȭ��� ����
	else if(x>=600 && x<=645 && y>=88 && y<=124 ){		
		return 5;
	}
	//���� �ϱ�
	else if(x>=246 && x<=346 && y>=160 && y<=166 ){	
		return 8;
	}
	else{
		return -1;
	}
	
}
void CtileDraw(int x, int y){
	int a = (x-66)/63;
	int b = (y-27-22)/75;

	CImageDraw("����5.txt",66+63*a,27+22);
	CImageDraw("����5.txt",66+63*a,27+22+75);
	if(a!=9){
		CImageDraw("����5.txt",66+63*(a+1),27+22);
		CImageDraw("����5.txt",66+63*(a+1),27+22+75);
	}
}
void ScreenBasicOutLineDraw(){
	CImageDraw("����100.txt",0,0);
	CImageDraw("����.txt",0,2);
	CImageDraw("�Ž�10.txt",300,7);
	CImageDraw("����.txt",697,2);
	CImageDraw("����100.txt",0,277); 
	CImageDraw("wasd100.txt",800,100);
	CImageDraw("space100.txt",950,100);
	CImageDraw("����Ű9.txt",825,150);
	CImageDraw("����Ű9.txt",975,150);
	CImageDraw("����9.txt",1105, 265);
	CImageDraw("����100.txt",0,25);
	CImageDraw("����100.txt",0,200);
	CImageDraw("help30.txt", 1117, 240);
	CImageDraw("thirdBlank.txt",3,205);
	CImageDraw("thirdBlank.txt",200,205);
	CImageDraw("thirdBlank.txt",3,215);
}
int livingRoom(int x, int y, bool first){
	
	system("cls");
	changeInit();
	ScreenInit();

	ScreenBasicOutLineDraw();
	drawCLivingRoom();
	charCImageDraw("��1.txt",x,y);
	if(first == true){
		CImageDraw("ħ��9.txt",9,205);
	}
	ScreenFlipping();

	ScreenBasicOutLineDraw();
	drawCLivingRoom();
	charCImageDraw("��1.txt",x,y);
	if(first == true){
		CImageDraw("ħ��9.txt",9,205);
	}
	ScreenFlipping();

	int ch;

	bool up = true;
	bool down = true;
	bool left = true;
	bool right = true;
	bool help = true;
	int beforeX = x;
	int beforeY = y;
	while(true){
      ch = keyControl();

	  if(help==false){
		  if(ch == HELP){
			ScreenBasicOutLineDraw();
			drawCLivingRoom();
			isItem(x,y);
			charCImageDraw("��1.txt",x,y);
			help = true;
			ScreenFlipping();
			ScreenBasicOutLineDraw();
			drawCLivingRoom();
			isItem(x,y);
			charCImageDraw("��1.txt",x,y);
			ScreenFlipping();
		  }
		continue;
	  }
	  
      if(ch == UP && (y>=70)){
		  if(y==70){
			CtileDraw(beforeX, beforeY);
			isItem(x,y);
			charCImageDraw("��1.txt",x,y);
			ScreenFlipping();
		  }
         else if(up==true){
            CtileDraw(beforeX, beforeY);
			isItem(x,y);
			charCImageDraw("��2.txt",x,y-6);
			beforeX = x;
			beforeY = y;
            y -= 6;
            up = false;
			ScreenFlipping();
         }
         else{
            CtileDraw(beforeX, beforeY);
			isItem(x,y);
			charCImageDraw("��1.txt",x,y-6);
			beforeX = x;
			beforeY = y;
            y -= 6;
            up = true;
			ScreenFlipping();
         }
      }
      if(ch == DOWN && y<=166){
		 if(y==166){
			 CtileDraw(beforeX, beforeY);
			 isItem(x,y);
			charCImageDraw("��1.txt",x,y);
			ScreenFlipping();
		 }
         else if(down==true){
           CtileDraw(beforeX, beforeY);
		   isItem(x,y);
			charCImageDraw("��2.txt",x,y+6);
			beforeX = x;
			beforeY = y;
            y += 6;
            down = false;
			ScreenFlipping();
         }
         else{
           CtileDraw(beforeX, beforeY);
		   isItem(x,y);
			charCImageDraw("��1.txt",x,y+6);
			beforeX = x;
			beforeY = y;
            y += 6;
            down = true;
			ScreenFlipping();
         }
      }
      if(ch == LEFT && x>=66){
		  if (x==66){
			  CtileDraw(beforeX, beforeY);
			  isItem(x,y);
			 charCImageDraw("��1.txt",x,y);
			 ScreenFlipping();
		  }
		else if(left==true){
		    CtileDraw(beforeX, beforeY);
			isItem(x,y);
			charCImageDraw("��2.txt",x-20,y);
			beforeX = x;
			beforeY = y;
            x -= 20;
            left = false;
			ScreenFlipping();
         }
         else{
			 CtileDraw(beforeX, beforeY);
			 isItem(x,y);
           charCImageDraw("��1.txt",x-20,y);
		   beforeX = x;
			beforeY = y;
			x -= 20;
            left = true;
			ScreenFlipping();
         }
      }
      if(ch == RIGHT && x <= 625 ){
		  if(x==625){
			  CtileDraw(beforeX, beforeY);
			  isItem(x,y);
			  charCImageDraw("��1.txt",x,y);
			  ScreenFlipping();
		  }
         else if(right==true){
           CtileDraw(beforeX, beforeY);
		   isItem(x,y);
			charCImageDraw("��2.txt",x+20,y);
			beforeX = x;
			beforeY = y;
            x += 20;
            right = false;
			ScreenFlipping();
         }
         else{
            CtileDraw(beforeX, beforeY);
			isItem(x,y);
			charCImageDraw("��1.txt",x+20,y);
			beforeX = x;
			beforeY = y;
            x += 20;
            right = true;
			ScreenFlipping();
         }
      }
	  if(ch==SUBMIT){
		 ScreenRelease();
		int miniGame = isMiniGame(x,y);
		//�ޱ��� ���� 1, ���� ����,���� ����,��ġ ���� 2, �Ӹ�������� 3, �Ž� ���� 4
		//ȭ��� ���� 5, �ʰ��� 6, ����ǰ ���� 7, �����ϱ� 8
		//-1�� �ƹ� �ϵ� �Ͼ�� �ʴ´�.
		if(miniGame != -1)
			return miniGame;
	  }
	  if(ch==QUIT)
		  return -100;

	   if(ch == HELP) {
		  if(help == true) {
			  help = false;
			  CtileDraw(beforeX, beforeY);
			  isItem(x,y);
			  CImageDraw("thirdBlank.txt",3,205);
			  CImageDraw("thirdBlank.txt",200,205);
			  CImageDraw("thirdBlank.txt",3,215);
			  CImageDraw("�����̹���580.txt",30,25);
			  CImageDraw("blank.txt",7,205);
			  CImageDraw("����9.txt",7,205);
		      CImageDraw("����9.txt",25,205);
	          CImageDraw("���򸻼���9.txt",7,220);
			  ScreenFlipping();
		  }

		}
	   }
   

	gotoxy(500,500);
	
}
