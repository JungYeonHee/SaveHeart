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
	CImageDraw("장판7_2.txt",3,27);
	CImageDraw("장판7_2.txt",66,27);
	CImageDraw("장판7_2.txt",66+63,27);
	CImageDraw("장판7_2.txt",66+63*2,27);
	CImageDraw("장판7_2.txt",66+63*3,27);
	CImageDraw("장판7_2.txt",66+63*4,27);
	CImageDraw("장판7_2.txt",66+63*5,27);
	CImageDraw("장판7_2.txt",66+63*6,27);
	CImageDraw("장판7_2.txt",66+63*7,27);
	CImageDraw("장판7_2.txt",66+63*8,27);
	CImageDraw("장판7_2.txt",66+63*9,27);

	
	CImageDraw("장판5.txt",3,27+22);
	CImageDraw("장판5.txt",66,27+22);
	CImageDraw("장판5.txt",66+63,27+22);
	CImageDraw("장판5.txt",66+63*2,27+22);
	CImageDraw("장판5.txt",66+63*3,27+22);
	CImageDraw("장판5.txt",66+63*4,27+22);
	CImageDraw("장판5.txt",66+63*5,27+22);
	CImageDraw("장판5.txt",66+63*6,27+22);
	CImageDraw("장판5.txt",66+63*7,27+22);
	CImageDraw("장판5.txt",66+63*8,27+22);
	CImageDraw("장판5.txt",66+63*9,27+22);

	CImageDraw("장판5.txt",3,27+22+75);
	CImageDraw("장판5.txt",66,27+22+75);
	CImageDraw("장판5.txt",66+63,27+22+75);
	CImageDraw("장판5.txt",66+63*2,27+22+75);
	CImageDraw("장판5.txt",66+63*3,27+22+75);
	CImageDraw("장판5.txt",66+63*4,27+22+75);
	CImageDraw("장판5.txt",66+63*5,27+22+75);
	CImageDraw("장판5.txt",66+63*6,27+22+75);
	CImageDraw("장판5.txt",66+63*7,27+22+75);
	CImageDraw("장판5.txt",66+63*8,27+22+75);
	CImageDraw("장판5.txt",66+63*9,27+22+75);

	CImageDraw("세로문.txt",66+63*10-10,27+22+50);
	CImageDraw("세로발판.txt",66+63*10-50,27+22+52);
	CImageDraw("가로문.txt",66+63*3+10,27+22+75*2-5);
	CImageDraw("가로발판.txt",66+63*3+25,27+22+75+45);
	CImageDraw("화분.txt",66+63*3+150,27+22+75+28);

	CImageDraw("액자.txt",240,30);
	CImageDraw("창문.txt",390,27);
	CImageDraw("옷장.txt",440,27);
	CImageDraw("시계.txt",5,25);
	CImageDraw("서랍장2.txt",50,27+11);
	CImageDraw("서랍장1.txt",50+50,27+10);
	CImageDraw("침대.txt",3,27+22+75);
	CImageDraw("소화분.txt",520,27+5);
	CImageDraw("의자.txt",570,27+10);
}

void isItem(int x, int y){

	CImageDraw("세로문.txt",66+63*10-10,27+22+50);
	CImageDraw("세로발판.txt",66+63*10-50,27+22+52);
	CImageDraw("가로문.txt",66+63*3+10,27+22+75*2-5);
	CImageDraw("가로발판.txt",66+63*3+25,27+22+75+45);
	CImageDraw("화분.txt",66+63*3+150,27+22+75+28);

	CImageDraw("액자.txt",240,30);
	CImageDraw("창문.txt",390,27);
	CImageDraw("옷장.txt",440,27);
	CImageDraw("시계.txt",5,25);
	CImageDraw("서랍장2.txt",50,27+11);
	CImageDraw("서랍장1.txt",50+50,27+10);
	CImageDraw("침대.txt",3,27+22+75);
	CImageDraw("소화분.txt",520,27+5);
	CImageDraw("의자.txt",570,27+10);
	
	//소지품 고르기
	if(x>=66 && x<=166 && y<=70 ){
		CImageDraw("소지품안내멘트9.txt",9,205);
	}
	//옷 고르기
	else if(x>=406&&x<=466&& y==70 ){
		CImageDraw("옷입기안내멘트9.txt",9,205);
	}
	//화장실 가기
	else if(x>=600 && x<=645 && y>=88 && y<=124 ){		
		CImageDraw("화장실9.txt",9,205);
	}
	//외출 하기
	else if(x>=246 && x<=346 && y>=160 && y<=166 ){	
		CImageDraw("외출9.txt",9,205);
	}
	else{
		CImageDraw("thirdBlank.txt",3,205);
		CImageDraw("thirdBlank.txt",200,205);
		CImageDraw("thirdBlank.txt",3,215);
	}
}

int isMiniGame(int x, int y){

	//꿈깨기 게임 1, 세수 눈곱 양치 게임 2, 머리감기게임 3 거실 가기 4
	//화장실 가기 5, 옷고르기 6, 소지품 고르기 7, 외출하기 8
	//-1은 아무 일도 일어나지 않는다.

	//소지품 고르기
	if(x>=66 && x<=166 && y>=60 && y<=70 ){
		return 7;
	}
	//옷 고르기
	else if(x>=406&&x<=466&& y>=60 && y<=70 ){
		return 6;
	}
	//화장실 가기
	else if(x>=600 && x<=645 && y>=88 && y<=124 ){		
		return 5;
	}
	//외출 하기
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

	CImageDraw("장판5.txt",66+63*a,27+22);
	CImageDraw("장판5.txt",66+63*a,27+22+75);
	if(a!=9){
		CImageDraw("장판5.txt",66+63*(a+1),27+22);
		CImageDraw("장판5.txt",66+63*(a+1),27+22+75);
	}
}
void ScreenBasicOutLineDraw(){
	CImageDraw("가로100.txt",0,0);
	CImageDraw("세로.txt",0,2);
	CImageDraw("거실10.txt",300,7);
	CImageDraw("세로.txt",697,2);
	CImageDraw("가로100.txt",0,277); 
	CImageDraw("wasd100.txt",800,100);
	CImageDraw("space100.txt",950,100);
	CImageDraw("방향키9.txt",825,150);
	CImageDraw("선택키9.txt",975,150);
	CImageDraw("도움말9.txt",1105, 265);
	CImageDraw("가로100.txt",0,25);
	CImageDraw("가로100.txt",0,200);
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
	charCImageDraw("앞1.txt",x,y);
	if(first == true){
		CImageDraw("침대9.txt",9,205);
	}
	ScreenFlipping();

	ScreenBasicOutLineDraw();
	drawCLivingRoom();
	charCImageDraw("앞1.txt",x,y);
	if(first == true){
		CImageDraw("침대9.txt",9,205);
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
			charCImageDraw("앞1.txt",x,y);
			help = true;
			ScreenFlipping();
			ScreenBasicOutLineDraw();
			drawCLivingRoom();
			isItem(x,y);
			charCImageDraw("앞1.txt",x,y);
			ScreenFlipping();
		  }
		continue;
	  }
	  
      if(ch == UP && (y>=70)){
		  if(y==70){
			CtileDraw(beforeX, beforeY);
			isItem(x,y);
			charCImageDraw("뒤1.txt",x,y);
			ScreenFlipping();
		  }
         else if(up==true){
            CtileDraw(beforeX, beforeY);
			isItem(x,y);
			charCImageDraw("뒤2.txt",x,y-6);
			beforeX = x;
			beforeY = y;
            y -= 6;
            up = false;
			ScreenFlipping();
         }
         else{
            CtileDraw(beforeX, beforeY);
			isItem(x,y);
			charCImageDraw("뒤1.txt",x,y-6);
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
			charCImageDraw("앞1.txt",x,y);
			ScreenFlipping();
		 }
         else if(down==true){
           CtileDraw(beforeX, beforeY);
		   isItem(x,y);
			charCImageDraw("앞2.txt",x,y+6);
			beforeX = x;
			beforeY = y;
            y += 6;
            down = false;
			ScreenFlipping();
         }
         else{
           CtileDraw(beforeX, beforeY);
		   isItem(x,y);
			charCImageDraw("앞1.txt",x,y+6);
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
			 charCImageDraw("좌1.txt",x,y);
			 ScreenFlipping();
		  }
		else if(left==true){
		    CtileDraw(beforeX, beforeY);
			isItem(x,y);
			charCImageDraw("좌2.txt",x-20,y);
			beforeX = x;
			beforeY = y;
            x -= 20;
            left = false;
			ScreenFlipping();
         }
         else{
			 CtileDraw(beforeX, beforeY);
			 isItem(x,y);
           charCImageDraw("좌1.txt",x-20,y);
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
			  charCImageDraw("우1.txt",x,y);
			  ScreenFlipping();
		  }
         else if(right==true){
           CtileDraw(beforeX, beforeY);
		   isItem(x,y);
			charCImageDraw("우2.txt",x+20,y);
			beforeX = x;
			beforeY = y;
            x += 20;
            right = false;
			ScreenFlipping();
         }
         else{
            CtileDraw(beforeX, beforeY);
			isItem(x,y);
			charCImageDraw("우1.txt",x+20,y);
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
		//꿈깨기 게임 1, 세수 게임,눈곱 게임,양치 게임 2, 머리감기게임 3, 거실 가기 4
		//화장실 가기 5, 옷고르기 6, 소지품 고르기 7, 외출하기 8
		//-1은 아무 일도 일어나지 않는다.
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
			  CImageDraw("도움말이미지580.txt",30,25);
			  CImageDraw("blank.txt",7,205);
			  CImageDraw("땡땡9.txt",7,205);
		      CImageDraw("도움말9.txt",25,205);
	          CImageDraw("도움말설명9.txt",7,220);
			  ScreenFlipping();
		  }

		}
	   }
   

	gotoxy(500,500);
	
}
