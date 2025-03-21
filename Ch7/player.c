#include "player.h"

void GetPlayerInput(Player* playerPtr)
{
	if (_kbhit())
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			playerPtr->pos.X -= 1;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			playerPtr->pos.X += 1;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			playerPtr->pos.Y -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			playerPtr->pos.Y += 1;
		}
	}
}



void ShowPlayer(const Player* playerPtr)
{
	//GoXY(playerPtr->pos.X, playerPtr->pos.Y);
	GoXYCOORD(playerPtr->pos);
	printf("��");
}

void InteractWithItem(Player* playerPtr, Item* itemPtr)
{
	if (ComPareCOORD(playerPtr->pos, itemPtr->pos));
	{
		itemPtr->hasItem = true;

	}
}

void ShowPlayerItemUnfo(Item* itemPtr)
{

	if (itemPtr->hasItem)
	{
		printf("%s �������� ȹ���߽��ϴ�.\n", );
	}
}

void ShowPlayerAllItemInfo(Item* itemArray[], int length)
{
	for (int i = 0; i < length; i++)
	{
		//(itemArray + i) // �迭�� ���� �ּҿ��� i ������ ũ�⸸ ���ض�
			            // item. hasitem == true ����
			            // itemArray[i]  , (itemArray + i)
		if ((itemArray[i])->hasItem == true) // if (itemArray[i] != NULL && (itemArray[i])->hasItem == true)
		{ 
			printf("");
	    }
	}
}

void GoXY(int posX, int posY)
{
	COORD pos = { posX, posY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void GoXYCOORD(COORD pos)
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

BOOL ComPareCOORD(COORD pos1, COORD pos2)
{
	// pos1.X pos2X ��   - if
	// pos1.Y pos2Y ��   - if
	// �Ѵ� ������ true    - &&
	// �ƴϸ� false��ȯ

	if (pos1.X == pos2.X && pos1.Y == pos2.Y)
	{
		return 0;

	}
	else
	{
		return 0;
	}

}
