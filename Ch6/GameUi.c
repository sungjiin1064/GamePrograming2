#include "GameUi.h"

/*
*  구현 목표 : 플레이어의 좌표를 키보드로부터 입력받아 실행되는 함수를 만들기
* 
*  1. 플레이어 좌표 정의 - 구조체 정의
*  2. 키보드를 입력받는 함수 - 플레이어 좌표를 매개 변수로 받는 함수 Player*
*  3. 커서 위치를 변경해서 UI를 출력한다.
*/

void GameStart()
{
    // 플레이어의 정보를 입력
	POS playerPos = { 0,0 };
	Player myPlayer = { "플레이어", playerPos };

	while (true)
	{
		// 1. 유저의 입력을 받는다
		// 2. 변경된 정보를 화면에 출력한다.
		// 3. Sleep(100)

		InputPlayerKey(&myPlayer);
		SHowPlayInfo(&myPlayer);

		Sleep(100);
	}
}

void InputPlayerKey(Player* playerPtr)
{
	system("cls");

	if (_kbhit)
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			playerPtr->playerPos.posX -= 2;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			playerPtr->playerPos.posX += 2;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			playerPtr->playerPos.posY -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			playerPtr->playerPos.posY += 1;
		}
	}

}

void GotoXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void SHowPlayInfo(const Player* playerPtr)
{
	GotoXY(50, 1);
	printf("플레이어의 정보");

	GotoXY(50, 3);
	printf("플레이어의 이름 : %s", playerPtr->playerName);

	GotoXY(50, 4);
	printf("플레이어의 위치 : (%d, %d)", playerPtr->playerPos.posX, playerPtr->playerPos.posY);

	GotoXY(playerPtr->playerPos.posX, playerPtr->playerPos.posY-1);
	printf("      ★");
	GotoXY(playerPtr->playerPos.posX+1, playerPtr->playerPos.posY);
	printf("(^o^)/");
	GotoXY(playerPtr->playerPos.posX+1, playerPtr->playerPos.posY+1);
	printf(" | |");


}
