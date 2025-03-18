#include "Inventory.h"



void ShowInventoryCount(int* inventory)
{
	if (inventory == NULL)
	{
		printf("�κ��丮�� �ּҰ� �Ҵ�Ǿ� ���� �ʽ��ϴ�.\n");
	}
	else
	{
		printf("���� �κ��丮�� �ִ� �� : %d\n", *inventory);
	}
}

void IncreaseInventoryCount(int* inventory, int increaseCount)
{
	*inventory += increaseCount;
}

void InventoryExample()
{
	inventoryPtr = malloc(sizeof(int));
	inventoryPtr = 0;

	ShowInventoryCount(inventoryPtr);
	free(inventoryPtr);
	
}
