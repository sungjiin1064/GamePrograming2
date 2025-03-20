#include "GameUi.h"

/*
*  ���� ��ǥ : �÷��̾��� ��ǥ�� Ű����κ��� �Է¹޾� ����Ǵ� �Լ��� �����
* 
*  1. �÷��̾� ��ǥ ���� - ����ü ����
*  2. Ű���带 �Է¹޴� �Լ� - �÷��̾� ��ǥ�� �Ű� ������ �޴� �Լ� Player*
*  3. Ŀ�� ��ġ�� �����ؼ� UI�� ����Ѵ�.
*/

void GameStart()
{
    // �÷��̾��� ������ �Է�
	POS playerPos = { 0,0 };
	Player myPlayer = { "�÷��̾�", playerPos };

	while (true)
	{
		// 1. ������ �Է��� �޴´�
		// 2. ����� ������ ȭ�鿡 ����Ѵ�.
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
	printf("�÷��̾��� ����");

	GotoXY(50, 3);
	printf("�÷��̾��� �̸� : %s", playerPtr->playerName);

	GotoXY(50, 4);
	printf("�÷��̾��� ��ġ : (%d, %d)", playerPtr->playerPos.posX, playerPtr->playerPos.posY);

	GotoXY(playerPtr->playerPos.posX, playerPtr->playerPos.posY-1);
	printf("      ��");
	GotoXY(playerPtr->playerPos.posX+1, playerPtr->playerPos.posY);
	printf("(^o^)/");
	GotoXY(playerPtr->playerPos.posX+1, playerPtr->playerPos.posY+1);
	printf(" | |");


}
