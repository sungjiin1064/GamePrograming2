
#include <stdio.h>      // printf, scanf
#include <Windows.h>    // �ܼ� ���� �Լ�
#include <conio.h>     // getch
#include <time.h>      // time
#include <stdlib.h>   // srand, rand
#include <stdbool.h>  // true.false
#include "StructPoint.h"

/*
*  ������ ����ü
*  ������ �̸�
*  �������� ��ǥ
*  �������� ����
*  ������ ���ݷ� ��ȭ���ʽ�
*/

// �������� ��ǥ, �÷��̾��� ��ǥ ���ؼ� ( itemX, playerX ��, itemY ���ؼ� �Ѵ� ������ �̺�Ʈ �ߵ�)

void GameStart();

void InputPlayerKey(Player* playerPtr);

//viod GotoXY(POS pos);
void GotoXY(int x, int y);

void SHowPlayInfo(const Player* playPtr);

void Monster();