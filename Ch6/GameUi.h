
#include <stdio.h>      // printf, scanf
#include <Windows.h>    // 콘솔 관련 함수
#include <conio.h>     // getch
#include <time.h>      // time
#include <stdlib.h>   // srand, rand
#include <stdbool.h>  // true.false
#include "StructPoint.h"

/*
*  아이템 구조체
*  아이템 이름
*  아이템의 좌표
*  아이템의 레벨
*  아이템 공격력 강화보너스
*/

// 아이템의 좌표, 플레이어의 좌표 비교해서 ( itemX, playerX 비교, itemY 비교해서 둘다 같으면 이벤트 발동)

void GameStart();

void InputPlayerKey(Player* playerPtr);

//viod GotoXY(POS pos);
void GotoXY(int x, int y);

void SHowPlayInfo(const Player* playPtr);

void Monster();