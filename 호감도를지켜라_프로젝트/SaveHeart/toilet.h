#ifndef __IOSTREAM_H__
#define __IOSTREAM_H__
#include <iostream>
#endif

#ifndef __WASHFACEGAME_H__
#define __WASHFACEGAME_H__
#include "washFaceGame.h"
#endif

#ifndef __TEETHBRUSHGAME_H__
#define __TEETHBRUSHGAME_H__
#include "teethBrushGame.h"
#endif

#ifndef __DETACHTEARGAME_H__
#define __DETACHTEARGAME_H__
#include "detachTearGame.h"
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

#ifndef __SHAMPOOINGGAME_H__
#define __SHAMPOOINGGAME_H__
#include "shampooingGame.h"
#endif

using namespace std;


#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4
#define SUBMIT 5
#define HELP 7


void toiletBasicOutlineDraw(){
   CImageDraw("화장실가로.txt",0,0);
   CImageDraw("화장실세로.txt",0,2);
   CImageDraw("화장실세로.txt",470,2);
   CImageDraw("화장실가로.txt",0,277); 
   CImageDraw("wasd100.txt",590,100);
   CImageDraw("space100.txt",725,100);
   CImageDraw("방향키9.txt",615,150);
   CImageDraw("선택키9.txt",750,150);
}
void selectToiletOutlineDraw(){
   toiletBasicOutlineDraw();
   CImageDraw("화장실가로.txt",0,25);
   CImageDraw("화장실10.txt",200,7);
   CImageDraw("화장실가로.txt",0,188);
}

void isItem2(int x, int y){
	
	//거실가기
	if(5<=x && x<=10 && y>=110 && y<=150 ){
		CImageDraw("거실이동멘트.txt",7,193);
	}
	//세수, 눈곱, 양치
	else if(100<=x && x<=200 && y<=94 && 88<=y ){
		CImageDraw("세면안내1.txt",7,193);
		CImageDraw("세면안내2.txt",7,205);
		CImageDraw("세면안내3.txt",7,217);
	}
	//변화 없음
	else{
		CImageDraw("안내멘트9.txt",7,193);
		CImageDraw("안내멘트9.txt",30,193);
		CImageDraw("안내멘트9.txt",50,193);
		CImageDraw("안내멘트9.txt",7,205);
		CImageDraw("안내멘트9.txt",50,205);
		CImageDraw("안내멘트9.txt",7,217);
		CImageDraw("안내멘트9.txt",50,217);
	}
}
int isMiniGame2(int x, int y){

	//꿈깨기 게임 1, 세수 게임,눈곱 게임,양치 게임 2, 머리감기게임 3, 거실 가기 4
	//화장실 가기 5, 옷고르기 6, 소지품 고르기 7, 외출하기 8
	//-1은 아무 일도 일어나지 않는다.

	//세수, 눈곱, 양치
	if(130<=x && x<=270 && y<=94 && 88<=y ){
		return 2;
	}
	//머리감기
	else if( 280<=x && x<=290 && y>=94 && y<=136){
		return 3;
	}
	//거실가기
	else if(5<=x && x<=10 && y>=118 && y<=154 ){
		return 4;
	}
	//변화 없음
	else{
		return -1;
	}
	
}

void drawToilet(){
	//기본 배경 출력
	 for (int i = 0; i < 7; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         CImageDraw("타일11.txt", (3 + i * 65), (28 + j * 32));
      }
   }
   
   CImageDraw("변기5.txt", 3, 28);
   CImageDraw("세면대2.txt", 130, 28);
   CImageDraw("욕조2.txt", 370, 28);
   CImageDraw("화장실문.txt", 3, 100);
}


int toilet(int x, int y){

	system("cls");
	changeInit();
	ScreenInit();


	//캐릭터 출력
	selectToiletOutlineDraw();
	drawToilet();
	charCImageDraw("앞1.txt",x,y);
	ScreenFlipping();

	selectToiletOutlineDraw();
	drawToilet();
	charCImageDraw("앞1.txt",x,y);
	ScreenFlipping();

	int ch;
	bool up = true;
	bool down = true;
	bool left = true;
	bool right = true;
	bool help = true;
	while(true){
		  ch = keyControl();

		  if(ch == UP && (y>=94)){
			  if(y==94){
				drawToilet();
				isItem2(x,y);
				charCImageDraw("뒤1.txt",x,y);
				ScreenFlipping();
			  }
			 else if(up==true){
				drawToilet();
				isItem2(x,y);
				charCImageDraw("뒤2.txt",x,y);
				y -= 6;
				up = false;
				ScreenFlipping();
			 }
			 else{
				drawToilet();
				isItem2(x,y);
				charCImageDraw("뒤1.txt",x,y-6);
				y -= 6;
				up = true;
				ScreenFlipping();
			 }
		  }
		  if(ch == DOWN && y<=154){
			 if(y==154){
				 drawToilet();
				isItem2(x,y);
				charCImageDraw("앞1.txt",x,y);
				ScreenFlipping();
			 }
			 else if(down==true){
			   drawToilet();
				isItem2(x,y);
				charCImageDraw("앞2.txt",x,y+6);
				y += 6;
				down = false;
				ScreenFlipping();
			 }
			 else{
				drawToilet();
				isItem2(x,y);
				charCImageDraw("앞1.txt",x,y+6);
				y += 6;
				down = true;
				ScreenFlipping();
			 }
		  }
		  if(ch == LEFT && x>=5){
			  if (x==5){
				drawToilet();
				isItem2(x,y);
				charCImageDraw("좌1.txt",x,y);
				ScreenFlipping();
			  }
			else if(left==true){
				drawToilet();
				isItem2(x,y);
				charCImageDraw("좌2.txt",x-20,y);
				x -= 20;
				left = false;
				ScreenFlipping();
			 }
			 else{
				drawToilet();
				isItem2(x,y);
			   charCImageDraw("좌1.txt",x-20,y);
				x -= 20;
				left = true;
				ScreenFlipping();
			 }
		  }
		  if(ch == RIGHT && x<=290){
			  if(x==290){
				  drawToilet();
				isItem2(x,y);
				  charCImageDraw("우1.txt",x,y);
				  ScreenFlipping();
			  }
			 else if(right==true){
				 drawToilet();
				isItem2(x,y);
				charCImageDraw("우2.txt",x+20,y);
				x += 20;
				right = false;
				ScreenFlipping();
			 }
			 else{
				drawToilet();
				isItem2(x,y);
				charCImageDraw("우1.txt",x+20,y);
				x += 20;
				right = true;
				ScreenFlipping();
			 }
		  }
		  if(ch==SUBMIT){
			ScreenRelease();
			int miniGame = isMiniGame2(x,y);
			//꿈깨기 게임 1, 세수 게임,눈곱 게임,양치 게임 2, 머리감기게임 3, 거실 가기 4
			//화장실 가기 5, 옷고르기 6, 소지품 고르기 7, 외출하기 8
			//-1은 아무 일도 일어나지 않는다.
			if(miniGame != -1)
				return miniGame;
		  }
		  
	   }
	gotoxy(500,500);
}


int toiletGame(int miniGameResult[], int season){
	
	//game[0]~[4]
	//꿈깨기 게임, 세수 게임, 눈곱 게임, 양치 게임, 머리감기게임 결과 (0=실패, 1=성공)

	changeInit();

	int miniGame;
	int mapX=5;
	int mapY = 130;

	while(true){
		//세수 게임,눈곱 게임,양치 게임,머리감기 2,거실 가기 4
		miniGame = toilet(mapX, mapY);
		if(miniGame==2){
			//system("cls");
			//세수, 눈곱, 양치
			miniGameResult[1] = washFaceGame();
			miniGameResult[2] = detachTearGame();
			miniGameResult[3] = teethBrushGame();
			miniGameResult[4] = shampooingGame(season);
			mapX=205;
			mapY=94;
		}
		else if(miniGame==4){
			//거실가기
			system("cls");
			break;
		}
	}
	return 0;
}