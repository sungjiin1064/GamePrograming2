#include "Input.h"



void GetPlayerInput(int* playerX, int* playerY, int maxX)
{
	if (_kbhit())
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			*playerX -= 1;

			if (*playerX <= 0)
			{
				*playerX = 0;
			}
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			*playerX += 1;

			if (*playerX >= maxX)
			{
				*playerX = maxX;
			}
		}		
		else if (GetAsyncKeyState(VK_UP))
		{
			*playerY -= 1;

		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			*playerY += 1;
			
		}
	

	}
}

void InputExample()
{
	int playerX = 0;
	int playerY = 0;
	int maxX = 10;

	while (1)
	{
		GetPlayerInput(&playerX, &playerY, maxX);

		printf("x,y ÁÂÇ¥ : %d, %d\n", playerX, playerY);

		Sleep(100);
	}
}
