#include "Item.h"
#define ITEMALLCOUNT 5


void ShowAllItemInfo()
{
	int itemCount[ITEMALLCOUNT] = { 1,2,3,4,5 };
	int itemIndexs[ITEMALLCOUNT] = { 1,2,3,4,5 };
	int itemType[ITEMALLCOUNT] = {0,1,0,2,1}; // 0: �Һ���, 1: �����, 2: ����Ʈ��
	char* itemName[ITEMALLCOUNT] = { "AAA", "BBB", "CCC", "DDD", "EEE" };

	printf("��� �������� �����Ѵ�.\n");

	for (int i = 0; i < ITEMALLCOUNT; i++)
	{
		printf("������ ��ȣ : %d, ������ �̸� : %s, ������ ���� : %d, ������ Ÿ�� : %d\n", itemIndexs[i], itemName[i], itemCount[i], itemType[i]);
	}
}

// ������ �̸��� �迭�� �����͸� �̿��ؼ� ����غ�����.

// ��� ������

// ������ �̸� - ���ڿ�
// ������ ���� - ���ڿ�
// 1�� �ε����� �ִ� �������� �̸��� ������ ����ϴ� ��� ����

void ItemExample()
{
	// �迭 Ÿ������ �̸� �����ϱ�
	// char itemName[10]
	// ������ Ÿ������ �̸� �����ϱ�
    // char* itemName
}
