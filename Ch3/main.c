/*
* �ۼ��� : 2025-03-17
* ��  �� : �޸��� ��� ( ���� �Ҵ� )
*/

/*
* ������ : �ּ� �ٷ�� ���
* ������ ���� ���� : int* numptr;
* ������ �ּҷ� ���� ���� ���� : *numptr;
* �� �� : int num; &num; ������ �Ҵ�� �ּҸ� ������ �� �ִ�.
*/

/*
* �Լ� ��� - �Ű� ���� ��ġ�� ���� ������ �ּҰ� ������
* void Function(int A, int B)
* �÷��̾��� ��ġ(x,y��ǥ) ���� �������ִ� �Լ��� ����� ������.
*/

/*
* ������ ���� ���¸� ����غ���.
* ���� �Ҵ� ����
* �޸𸮸� ���� �Ҵ����ش�. �����Ҵ����� �Ҵ�� �޸𸮴� ������ ������ �� ����.
* ���� ���� - �Լ��� ����� �� ���� �����ȴ�.
* �Լ� �ȿ��� �����Ҵ�� �޸𸮴� �������� �ʴ´�.
* �ش� �޸��� ����� ���̳��� ����(����) ��������� �Ѵ�.
* free(������ ����);
* Inventory.h
* 
*/


#include <stdio.h>
#include "Input.h"
#include "Inventory.h"

int* inventoryPtr;

void SetMemoryAndValue(int amount)
{
	int* num1ptr = NULL;        // ���� ( 4����Ʈ ���� ���� �����ϴ� ���� )


	num1ptr = malloc(sizeof(int)); // ���ο� �ּҸ� �Ҵ����� �� ���� ������? memory allocate // malloc
		
	*num1ptr = amount;

	printf("�Ҵ��� �޸� �ּ��� �� : %p\n", num1ptr);
	printf("�Ҵ��� �޸��� ���� ȣ�� : %d\n", *num1ptr);
	
	free(num1ptr); // �������� ������ num1ptr�� �޸� �� ��� ���´�.
}

int main()
{
	printf("Ch3\n\n");

	//InputExample();

	printf("������ ���� ���\n");

	int number = 1;
	int* numberPtr = &number;

	//int* num1ptr = NULL; // ���� ( 4����Ʈ ���� ���� �����ϴ� ���� )
	//num1ptr = malloc(sizeof(int)); // ���ο� �ּҸ� �Ҵ����� �� ���� ������? memory allocate // malloc

	

	// ��ǻ���� �޸� ������ ���� ������ �� �ִ� �ּҸ� �Ҵ��ߴ�.
	// ���ǹ�, Ư�� ��Ȳ������ �ڵ带 ����
	// �κ��丮 �ִ� ũ�� 4ĭ ( ������ 4�� ���� )
	// ���׷��̵�� �ִ� ũ�⸦ ���� ( ������ �� �ִ� ������ ������ �þ�� )

	//*num1ptr = 10;
	int* num1ptr = NULL;
	SetMemoryAndValue(10);
	
	inventoryPtr = malloc(sizeof(int));
	*inventoryPtr = 0;

	while (1)
	{
		printf("1_ �κ��丮�� ���� �����˴ϴ�.\n");
		printf("2_ ���� �κ��丮�� ũ�⸦ �����մϴ�.\n");

		int inputNumber = -1;
		printf("Ű�� �Է����ּ���.\n");
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n');

		if (inputNumber == 1)
		{
			IncreaseInventoryCount(inventoryPtr, 4);
		}
		else
		{
			ShowInventoryCount(inventoryPtr);
		}
		
	}


	free(inventoryPtr);


}