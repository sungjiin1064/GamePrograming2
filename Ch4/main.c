/*
* �ۼ��� : 2025-03-18
* ��  �� : �迭�� ������
*/

/*
* 1. �迭 : ��, ����, ��� ����ϴ°�?
* ���� : ����ǥ(����,����,����)
* ��� ���� : �ϳ��� ������ ���� Ÿ���� ������ ǥ���� �� �ִ�.
*/

/*
* ����(character) - '�ܾ�','a' 'p' 'p' 'l' 'e'
*/

#include <stdio.h>
#include "Item.h"
//#include <cstring> // string

int main()
{
	printf("�迭�� ������\n");

	printf("�迭 ���� : ����ǥ �����\n");
	int scoreA = 80; // ��
	int scoreB = 60; // ��
	int scoreC = 40; // ��

	// ���� : '������ Ÿ��'���� ������ ����� - �޸��� ����� ũ��, 010101�ؼ��ϴ� ���, �����ϴ� �޸� �ּ�
	// ���� Ÿ���� ������ �ϳ��� �̸����� ǥ���ϴ� ��� : �迭

	int scores[3] = { 80, 60, 40 }; // �迭�� ���� : int������ Ÿ���� 3�� �����ϴ� scores�̸��� ����
	
	scores[0]; // (scores�ּ� + 0) = �ڱ� �ڽ�
	scores[1]; // (scores�ּ� + 1) = 2��° ����
	scores[2]; // (scores�ּ� + 2) = 3��° ����

	printf("������ ������� ����ϼ���\n");
	for (int i = 0; i < 3; i++)
	{
		printf("���� :%d\n", scores[i]);
	}

	//printf("���� : %d, ���� : %d, ���� : %d\n", scoreA, scoreB, scoreC);

	// ������ ����
	// ������ �̸�(���ڿ�), ������ ����, ������ Index

	char item1Name[10] = "AAA"; // char A x 3 - ���ڵ��� �迭(���ڿ�)
	int item1Count = 1;
	int itemIndex = 1;

	printf("\n");
	printf("����\n\n");
	printf("������1���� ����\n");
	printf("������ ��ȣ : %d, ������ �̸� : %s, ������ ���� : %d\n\n", itemIndex, item1Name, item1Count);

	// ������ �����͸� �����Ѵ�.(������ ���� ������, ���̺� ������)
	
	ShowAllItemInfo();

	printf("���ڿ��� ���� ����\n\n");

	// ���(apple)���ڷ� ����غ���
	char char1 = 'a';
	char char2 = 'p';
	char char3 = 'p';
	char char4 = 'l';
	char char5 = 'e';

	// appleis ����
	// apple is red
	// ���ڿ����� �������� ���鹮�ڸ� ����ؼ� �� ������ �������� �˸���.
	printf("%c%c%c%c%c\n", char1, char2, char3, char4, char5);

	char chars[5] = { 'a','p','p','l','e' };

	for (int i = 0; i < 5; i++)
	{
		printf("%c", chars[i]);
	}

	printf("\n\n");
	char scoreName[10] = "����"; // �������� �ǹ̰� �������ֽ��ϴ�.    16���� �ּҷ� �����ϰ� �־���.

	printf("%s\n", scoreName);

	char scoreName2[10] = "English"; // �迭�� �������� �� ������ ������ ������ ��� �Ǵ°�? int -> 0

	printf("%c\n", scoreName2[0]);
	printf("%c\n", scoreName2[1]);
	printf("%c\n", scoreName2[2]);
	printf("%c\n", scoreName2[3]);
	printf("%c\n", scoreName2[4]);
	printf("%c\n", scoreName2[5]);
	printf("%c\n", scoreName2[6]);
	

	// "����" - ���ڿ�        �޸��ּ� |��    |��    |
	// �޸��� ù��° �ּҸ� �˰�, �޸��� ũ�⸦ �˸� ���ڸ� �ѹ��� ����� �� �ִ�.
	// "��" ���� �ּҷ� ������ �Ǿ� �ִ�.
	// �迭�� ������ �ּ��̴�.

	char* scorePtr = "Math";

	printf("�̸� : %s\n", scorePtr);
	printf("%c", *(scorePtr + 0)); // MAth  "M"���� �ּ� - scorePtr(1����Ʈ)
	printf("%c", *(scorePtr + 1));
	printf("%c", *(scorePtr + 2));
	printf("%c", *(scorePtr + 3));

	// �� �迭�� �ּҷ� �����͸� �����ϰ� ������?
	// �ִ����� ȿ���� �޸𸮸� ����ϱ� ���ؼ��̴�.
	// �ּ� +1 2 3 4 ...(50)�ܾ�
	printf("\n\n");
	int number[10]; // 4 x 10 ������

	// �������� �̸��� ǥ���ϴ� ���
	// �ܾ��� �迭�� ǥ���ϴ� ���

	char itemName[10] = "�̸�";
	char* itemNamePtr = "�̸�2";

	printf("%s, %s", itemName, itemNamePtr);
}