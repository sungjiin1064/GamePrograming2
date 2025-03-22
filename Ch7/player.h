
#include <stdio.h>      // printf, scanf
#include <Windows.h>    // 콘솔 관련 함수
#include <conio.h>     // getch
#include <time.h>      // time
#include <stdlib.h>   // srand, rand
#include <stdbool.h>  // true.false

typedef struct
{
	char* playName;
	COORD pos;
}Player;

typedef struct
{
	char* itemName;
	COORD pos;
	BOOL hasItem;
}Item;

void GetPlayerInput(Player* playerPtr);
void ShowPlayer(const Player* playerPtr);

void InteractWithItem(Player* playerPtr, Item* itemPtr);
void ShowPlayerItemUnfo(Item* itemPtr);
void ShowPlayerAllItemInfo(Item itemArray[], int length);

void ShowAllItem(Item itemArray[], int length);

void GoXY(int posX, int posY);
void GoXYCOORD(COORD pos);
//void GoXYCoordinate(COORD pos);

// 두개의 좌표를 매개변수로 받아와서 비교하는 함수
BOOL ComPareCOORD(COORD pos1, COORD pos2);