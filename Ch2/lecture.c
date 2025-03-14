#include "lecture.h"

int GameScore = 0;

void ShowLecture()
{
	printf("���� ���� 1\n");

	// �����������ϰ� �ּҸ� ����� ������.
	int num1 = 10;
	int* numptr = &num1;  // �ּ�    =    ��

	printf("���� ��� :%d\n", num1);
	printf("�ּҸ� ��� :%p\n\n", numptr);

	printf("���� �ǽ� 1\n"); // �� ������ ���� �����ϴ� �Լ��� �����Ѵ�.
	
	// int* 2�� �ʿ��ϴ�. int�� �ּ�
	int numA = 5;
	int numB = 6;
	printf("numA�� �� :%d, numB�� �� :%d\n", numA, numB);
	Swap(&numA, &numB);
	printf("numA�� �� :%d, numB�� �� :%d\n\n", numA, numB);

	printf("���� ���� 1\n");

	IncreaseScore(&GameScore, 10);
	printf("���� ���� : %d\n\n", GameScore);

	printf("���� �ǽ� 2\n");

	// ���� 3���� �����غ�����
	float weight = 1.5f;
	int weaponLv = 1;
	int baseAP = 10;

	printf("����ġ : %f, ���� : %d, �⺻ ���ݷ� :%d\n", weight, weaponLv, baseAP);
	UpgradeWeapon(&weaponLv, baseAP, &weight);
	printf("����ġ : %f, ���� : %d, �⺻ ���ݷ� :%d\n", weight, weaponLv, baseAP);

	// ����
	// �Լ��� �̿��ؼ� ���� �����Ѵ�. �ּҸ� �̿��ؼ� ���� ������ �� �ִ�.
	// ���� �ּҸ� ����ұ�? 1. �ܺ��� ���� �����ؾ� �� ��  2. �����;� �� ������ Ÿ���� �ʹ� Ŭ �� �ּҸ����� ������ �� �ִ�.(�迭, ����ü)

	// �������� ������ ������Ű�� �Լ��� ����� ������

	// �÷��̾��� ��ǥ�� �̵���Ű�� �Լ��� ����� ������
	int x = 5;
	int y = 20;

	//mySwap(x, y);
	//printf("mySwap x�� �� :%d, y�� �� :%d\n", x, y);
}

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void IncreaseScore(int* score, int points)
{
	*score += points;
}

void UpgradeWeapon(int* weaponLv, int baseAP, float* weight)
{
	*weaponLv += 1;
	if (*weaponLv % 5 == 0)
	{
		*weight = *weight * 1.5f;
	}
	printf("���� ���� ���ݷ� : %f\n", (*weaponLv) * (*weight) * baseAP);
}


/*void mySwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
	
}*/

void IncreaseTemp(int score, int points)
{

}