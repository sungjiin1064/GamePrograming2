/*
* �ۼ��� : 2025-03-21
* ��  �� : ����ü�� ���� �����
*/

/*
* ������ - �ּҸ� �̿��� �� �ְԵǾ���. 
* 1. ������ ���� �����ϴ� ��           int* numptr;
* 2. ������ ���� �ּҸ� ȣ���ϴ� ��     int num; &num;
* 3. �ּҿ��� ���� �����ϴ� ��         *numptr;
*/

/*
* �����Ϳ� ������
* �������� ���� ��� : �ڷ����� ũ�⸸ŭ �����Ѵ�.
* �迭              : (������ �ּ� + i) i��° �ּҸ� ȣ���ϴ� ��.
*/

/*
* ����ü : ����� ���� �ڷ���
*/

/*
* ���ӿ� ����� �Լ� ����
* Play - Item - Enemy
*/

/*
*  ���
* 1.�̵��� �����Ѵ�
* 2.��ȣ�ۿ� ����
*/

#include "player.h"


int main()
{
	// �÷��̾��� �⺻ �����͸� ����
	COORD playerPos = { 0,0 };
	Player player = { "���谡", playerPos };

	COORD itemAPos = { 5,5 };
	Item itemA = { "������A", itemAPos, false }; // �̸�, ��ǥ, ȹ�� ����

	COORD itemBPos = { 10,10 };
	Item itemB = { "������A", itemAPos, false }; 

	Item  GameItems[2] = { itemA, itemB };        // Item�迭�� �����ͼ� ����ϴ� �Լ�
	
	
	while (true)
	{
		system("cls");

		GetPlayerInput(&player);
		ShowPlayer(&player);

		InteractWithItem(&player, &itemA);
		ShowPlayerItemUnfo(&itemA);
		//ShowPlayerItemUnfo(&itemB);

		Sleep(100);
	}

}