#include <stdio.h>
#include <Windows.h>

// '플레이어' - 이름, 좌표, 소유한 아이템

typedef struct _POS
{
	int posX;
	int posY;
}POS;

typedef struct _Player
{
	char* playerName;
	POS   playerPos;
}Player;

void Ch6Example();

void showPlayerInfo1(Player player);

void showPlayerInfo2(const Player* playerPtr);

void showPlayerInfo3(const Player* playerPtr);

void ChangePlayerPos(Player* playerPtr);