#include "Struct.h"

void StructExample()
{
	// �÷��̾��� ������ ������. (1. ��ġ ��)

	struct Pos playerPos = { 1,1 };

	// �÷��̾��� ��ǥ�� ������ּ���.
	// ���� ������(.) ������ �����Ϳ� ������ �� �ִ�.

	printf("[%d,%d]", playerPos.xPos, playerPos.yPos);

	Pos origin1 = { 0,0 };
	struct Circle myCircle = { origin1, 2.5 };
	
	//printf("���� : [%d,%d], ������ : %f", myCircle.origin.xPos, myCircle.origin.yPos,myCircle.radius);
	
	CalculateCircleInfo(myCircle);

	char playerName[10] = "AAA";
	//Pos playerPos = { 0,0 };
	Player myPlayer = { playerName, playerPos };

	ShowPlayerCurrentPos(myPlayer);
}

void CalculateCircleInfo(Circle circle)
{
	// 2 * pi * r
	printf("ȣ�� ���� : %lf\n", 2 * 3.14 * circle.radius);
	printf("���� ���� : %lf\n", 0.5 * 3.14 * circle.radius * circle.radius);
	printf("������ ��ġ : [%d,%d]\n\n", circle.origin.xPos, circle.origin.yPos);
}

void ShowPlayerCurrentPos(Player player)
{
	printf("�÷��̾��� �̸� : %s\n", player.playerName);
	printf("�÷��̾��� ��ǥ : [%d,%d]\n", player.playerPos.xPos, player.playerPos.yPos);

}

void MovePlayer(Player player)
{

}

