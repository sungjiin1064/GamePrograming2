/*
* �ۼ��� : 2025-03-19
* ��  �� : ����ü�� ���� ����
*/

/*
* ���� �ð� ���� - �迭�� ������
* | ���                    |      �迭     |   ������   |
* |    -----                |  ---         |   ---      |
* | �̸��� �����ϴ°�?       |    o         |   o        |
* | ������ �����ϴ°�?       |  ���� �ּ�    |   �ּ�     |
* | �ּ� ���� ���氡���Ѱ�?   |       x      |    o      |
*/

/*
* ��� ������
* const 
*/

#include <stdio.h>
#include "Struct.h"

// array �ּ��� ���� �������� �����ּ���.
void ShowAllData(int* array, int length) // �迭�� �����ͼ� �����͸� ���� �ʹ�. �迭�� �����ͼ� ���� �ٲٴ� �Լ��ΰ�?
{
	for (int i = 0; i < length; i++)
	{
		array[i] += 1;
		printf("%d ", array[i]);
	}
}

void ShowData(const int* num1ptr) // num1ptr���� �������� ���ÿ�
{
	int* rptr = num1ptr; // rptr, num1ptr�ּ��� ���� ����
	*rptr += 2;

	printf("%d \n", *rptr);
}

// item�� �̸��� ����ϴ� �Լ��� �����غ�����.
// �̸��� ���� ����Ǹ� �ȵ˴ϴ�.

void ShowItemData(const char* itemName)
{
	// itemName = "�ٸ� �̸�", itemName�����ؼ� ���� �������� ���Ѵ�

	printf("������ �̸� : %s", itemName);
}

int main()
{
	int arr1[5] = { 0,1,2,3,4 };
	ShowAllData(arr1, 5);
	printf("\n\n");
	int n1 = 1;
	ShowData(&n1);
	printf("\n\n");
	char itemName1[10] = "Į";

	ShowItemData(itemName1);

	printf("\n\n");
	printf("ch5\n\n");

	//printf("��� ����\n");

	const int num1 = 10; // num1 ����� �ȴ�. const ���� �����ϴ� ���� �����Ѵ�.

	const int PI = 3.14; // ���� ������Ű�� �ʹ�.

	int number1 = 2;
	int number2 = 3;
	const int* number1ptr = &number1; // number1ptr �ּҸ� �����ϴ� ������ number1�� �ּҸ� �����Ѵ�.
	//*number1ptr += 2; // �ּҾȿ� ����ִ� ���� �����ϸ� ���� -> �ּҾȿ� ���� �������� ������. ��� ������
	number1ptr = &number2; // �ּҸ� �����ϴ� ���� �����ϴ�.

	int* const number2ptr = &number2; // �ּҸ� �������� ���ϰ� �����ϴ� �ڵ�
	//number2ptr = &number1;
	*number2ptr += 3;

	const int* const number3ptr = &number2;

	// const pointer
	// ���� ������ �� �ִ� ����  // �ּҸ� ������ �� �ִ� ����   // ��,�ּ� ���� ���ϴ� ����
	// Ÿ��* const �̸�        // const Ÿ��* �̸�            // const Ÿ��* const �̸�

	printf("����ü ����\n\n");

	StructExample();


}