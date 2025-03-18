#include <stdio.h>
#include <conio.h> //_getch()
#include <Windows.h> // _kbhit(), GetAsyncKeyStats
#include "playerInput.h"

int main()
{
	int playerX = 0;
	int playerY = 0;

	while (1)
	{
		if (_kbhit)
		{
			if (GetAsyncKeyState(VK_LEFT) & 0x8000);
		}
	}
}
