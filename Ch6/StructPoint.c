#include "StructPoint.h"

void Ch6Example()
{
	printf("Ch6\n");

	POS playerPos = { 5,5 };
	playerPos.posX = 3;
	playerPos.posY = 4;

	Player player1 = { "AAA", playerPos };

	//printf("플레이어의 이름 :%s, 플레이어의 현제 위치 : [%d,%d]", player1.playerName, player1.playerPos.posX, player1.playerPos.posY);

	//showPlayerInfo1(player1);
	//showPlayerInfo2(&player1);
	showPlayerInfo3(&player1);
	ChangePlayerPos(&player1);
}

void showPlayerInfo1(Player player)
{
	printf("플레이어의 이름 :%s, 플레이어의 현제 위치 : [%d,%d]\n", player.playerName, player.playerPos.posX, player.playerPos.posY);
}

void showPlayerInfo2(const Player* playerPtr)
{
	printf("플레이어의 이름 :%s, 플레이어의 현제 위치 : [%d,%d]", (*playerPtr).playerName, (*playerPtr).playerPos.posX, (*playerPtr).playerPos.posY);
}

void showPlayerInfo3(const Player* playerPtr)
{
	printf("플레이어의 이름 :%s, 플레이어의 현제 위치 : [%d,%d]", playerPtr->playerName, playerPtr->playerPos.posX, playerPtr->playerPos.posY);
}

void ChangePlayerPos(Player* playerPtr)
{
	playerPtr->playerPos.posX += 1;
	playerPtr->playerPos.posY += 1;
}
