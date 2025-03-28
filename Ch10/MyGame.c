
#include "MyGame.h"

void GameStart()
{
	// 플레이어를 설정 - 이름, 종족, 좌표

	Player player;
	COORD playerPos = { 10,10 };

	SetPlayer(&player);

	// 스테이지 출력
	COORD stagePos = { 20,0 };
	ShowStage(Stage1, stagePos);
	player.pos = PlusCOORD(playerPos, stagePos);

	// 반복해서 실행되는 게임 로직 UI출력 ,  플레이어 조작
	// ShowPlayerUIInfo(&player)

	COORD UserInterfacePos = { 60,0 };

	while (true)
	{
		// 1. 플레이어 이동

		GoToXY(player.pos.X, player.pos.Y);
		printf("  ");

		SetPlayerInput(&player);
		GoToXY(player.pos.X, player.pos.Y);
		printf("★");

		// 2. 스테이지안에 특별한 문자와 값이 같으면 다음 스테이지로 이동

		COORD playerStagePos = { player.pos.X - stagePos.X, player.pos.Y - stagePos.Y };

		if (CanMoveStage(Stage1, playerStagePos, '@'))
		{
			NextStage(Stage2, stagePos);
			player.pos = PlusCOORD(playerPos, stagePos);
		}

		// 3. 플레이어의 정보 UI 출력

		ShowPlayerInfo(&player, UserInterfacePos);

		Sleep(100);
	}
}


//-------------------------------------------------------------------------
int main()
{
	GameStart();

}