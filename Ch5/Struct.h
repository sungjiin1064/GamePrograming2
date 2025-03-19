/*
* ��ǥ : �������� ���� �����ؼ� ����Ѵ�.
* ����, �Ǽ�, ���� ǥ���ϴ� ��� - C���
* �������� �����ߴ�. ( �̸�, ����, ��ȣ, Ÿ�� ) - #difine  ����ߴ�
* �������� ���� �����Ѵ�. 
* �ϳ��� �迭�� ��� �������� ǥ���� �� �ִ�.
* �������� �����ؼ� ������ �����͸� �迭�� ǥ���Ѵ�.
*/

/*
* ����ü
* - Struct : ����ڰ� ���� ������ �ڷ���
* - �� �����͸� ���� �����ұ�? (Why)
*/

/*
* 2���� ��ǥ - int x��ǥ, int y��ǥ;
* int x;
* int y;
* �׻� 2���� ��ǥ�� �̷�� ���ִ�. �츮�� ���� ��ǥ�� �ǹ��ϴ� �ڷ����� ���� �� ������?
*/

/*
* 1. ����ü ǥ�� ���  struct �̸� (int x, int y)
* 2. ����ü �ȿ� ����ü ���� �� ������? -  �� : ����, �������� ������ ���� ����, ȣ�� ���̸� ���Ҽ� �ִ�
*/

#include <stdio.h>

typedef struct Pos
{
	int xPos;
	int yPos;
}Pos;

/*
* ����ü�� ������ �� ���� struct Ű���带 �ٿ��ִ� ���� ���ŷӴ�.
* typedef ����ϸ� .........Ÿ�� �̸��� {}Ÿ�� ������ �����ϴ�.
* typedef struct Ÿ���� �̸��� ������ �� �ִ�
* ���� struct Ÿ�� �̸��� �����ϸ� , struct Pos ���˷δ� ����� ���Ѵ�
*/

/*
* ����ü��  �̿��ؼ� �Լ��� ����� ��
*/

typedef struct Circle // ������ ������ ������ �����̴� => ���� ���̿� ȣ�� ���̸� ���� �� �ִ�.
{
	Pos origin;
	double radius;
}Circle;

void StructExample();

void CalculateCircleInfo(Circle Circle);

// �÷��̾��� ������ ����ϴ� �Լ��� ��������.

typedef struct Player
{
	char* playerName;
	Pos playerPos;
	// ����
	// ������
}Player;

void ShowPlayerCurrentPos(Player player);

void MovePlayer(Player player);

//void ShowPlayerCurrentPos2(Player* player);