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
	//x,y좌표로 이동해서 printf한다.
	//GoXY(playerPtr->pos.X, playerPtr->pos.Y);
	GoXYCOORD(playerPtr->pos);
	printf("★");
}

void InteractWithItem(Player* playerPtr, Item* itemPtr)
{
    // player,Item 좌표 각각의 x,y비교해서 두 좌표가 Item안에 있는 HasItem True변경해주는 코드를 작성
	if (ComPareCOORD(playerPtr->pos, itemPtr->pos));
	{
		itemPtr->hasItem = true;

	}
}

void ShowPlayerItemUnfo(Item* itemPtr)
{
	// 모든 아이템은 탐색해서 HasItemTrue인 녀석들만 정보를 보여줘
	if (itemPtr->hasItem)
	{
		printf("%s 아이템을 획득했습니다.\n", );
	}
}

void ShowPlayerAllItemInfo(Item* itemArray[], int length)
{
	for (int i = 0; i < length; i++)
	{
		//(itemArray + i) // 배열의 시작 주소에서 i 데이터 크기만 더해라
			            // item. hasitem == true 실행
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
	// pos1.X pos2X 비교   - if
	// pos1.Y pos2Y 비교   - if
	// 둘다 같으면 true    - &&
	// 아니면 false반환

	if (pos1.X == pos2.X && pos1.Y == pos2.Y)
	{
		return true;

	}
	else
	{
		return false;
	}

}
