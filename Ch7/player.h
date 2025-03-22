
#include <stdio.h>      // printf, scanf
#include <Windows.h>    // �ܼ� ���� �Լ�
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

// �ΰ��� ��ǥ�� �Ű������� �޾ƿͼ� ���ϴ� �Լ�
BOOL ComPareCOORD(COORD pos1, COORD pos2);