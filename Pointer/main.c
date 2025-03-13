/*
* �ۼ��� : 2025-03-13
* �ۼ��� : �ڼ���
* ��  �� : �����Ϳ� ���� ����
*/

/*
* �����Ͱ� �����ΰ�?
* �����ʹ� �ּ��̴�.
* ������ ���� : � �����͸� �����ϴ°�, �������� ũ��� ��� �Ǵ°�?
* ��ǻ���� ���� : �̸����� ������ ȣ���Ѵ�. �ּҸ� ����Ѵ�.
*/

/*
* ������ ����
* int number; number ������ ���� ������ �� �ִ�. number�� �ּҸ� �����ִ�.
* �ּ� �����ڸ� ����ؼ� ������ ����ִ� �ּҸ� ����� �� �ִ�. &number;
* ������ �� : �ּ� �����ڴ� ������ ����ǰ� �� ���Ŀ� ����ؾ� �Ѵ�.
* 
* ������ ������ ������ �� ���
* ������ ������ : int* pointerNumber;
* ������ ������ ����ǰ� �� ���Ŀ� ���Ǵ� ��ȣ
* ������ ������ : *pointerNumber;
*/

/*
* ������ ��𿡼� ����ϸ� ������?
* 
* ��ǻ�� �ȿ� �޸𸮸� �����ϴ� ����. �޸� �ּҷ� ������ �ϰ� �־���.
* �ּҸ� �˰� ������ ���� ��𼭳� ���� ������ �� �ִ�.
* 
* -����?   ������ ����� �ΰ� ����� �߾�� �Ѵ�. ���α׷� ���� �߿� �޸𸮸� �Ҵ��ϰ� ����ϴ� ��� - ���� �Ҵ�
* -���? �Լ����� ����� ���� �ܺο� ������ �ȵȴ�. Call by Reference
* 
*/

/*
* ����
* ��ǻ���� �ּҸ� ��� ���
*  1. ������ ������ �����ϴ� ���
*  2. ������ ���� �ּҸ� �������� ��� - �ּҿ�����
*  3. �ּҷ� ���� ���� �������� ��� int* numptr; 
*/

#include <stdio.h>

//Call by Value vs Call by Reference

void CallValue(int number)
{
	number = 100;
}

void CallReference(int* numberPtr)
{
	*numberPtr = 100;
}

void SwapPreview(int numA, int numB)
{
	int temp;
	temp = numA;
	numA = numB;
	numB = temp;
	 
	printf("Swap�� �ϸ� �̷� ����� ���ɴϴ�.\n");
	printf("����� numA�� �� : %d\n", numA);
	printf("����� numB�� �� : %d\n", numB);
}

// �ܺο��� ������ ���� �����ϰ� �ʹ�. -> �ּ��� ���� �����Ѵ�.
void Swap(int* numA, int* numB)
{
	int temp;
	temp = *numA;
	*numA = *numB;
	*numB = temp;

}

int main()
{
	printf("�����Ͱ� �����ΰ�?\n");

	// �ǽ� 1. �����Ͱ� �����ΰ�
	int number = 10;
	printf("���� ��� : %d\n", number);
	// �����͸� ���
	printf("������ ��� : %p\n\n", &number);

	// �ǽ� 2. ������ ���
	// * , &
	// ������ ����
	int* pointerNumber;    // ������ ������ ����
	int num1 = 10;         // ������ ���� - �ּҰ� ���� ����
	pointerNumber = &num1; // ������ ������ ������ �ּҰ��� ����
	printf("������ ��� : %p\n", pointerNumber); // �ּҸ� ������Ͷ�(����Ʈ�ѹ� ��ü�� �ּҶ� &�� ������ �ʴ´�)
	printf("���� ��� : %d\n\n", *pointerNumber);  // �ּ��� ���� ������ ���� ( * )

	// ��������. ������ �ǽ�

	// float�� ������ �����ϰ� �� ������ �ּҸ� ����غ�����.
	// �ּҿ� ����ִ� ���� ������ �����ڷ� ȣ���غ�����.

	float floatNum = 0.1f;
	float* floatPointer = &floatNum;
	// �ּҰ� ���
	// 0.1���� ��������;
	printf("�ּҰ��� ����Ѵ� : %p\n", &floatNum);
	printf("�ּҷ� ���� ���� ����ϱ� : %f\n\n", *floatPointer);

	int num2 = 5;
	int* num2ptr = &num2;
	
	long long longNum = 100;
	long long* longNumptr = &longNum;
	printf("long long ����\n");
	printf("�ּҷ� ���� ���� ����Ѵ� :%d\n\n", *longNumptr);

	char charNum = 'A';
	char* charNumptr = &charNum;
	printf("�ּҰ��� ����Ѵ� : %p\n", &charNum);
	printf("�ּҷ� ���� ���� ����ϱ� : %c\n\n", *charNumptr);
	
	// Call by value , Call by Reference
	printf("Call by Value vs Call by Reference ����\n");
	int exampleNumber = 10;
	int* exampleNumberPtr = &exampleNumber;

	CallValue(exampleNumber);
	printf("CallValue ���� �� exampleNumber�� �� : %d\n", exampleNumber);
	CallReference(exampleNumberPtr);
	printf("CallValue ���� �� exampleNumber�� �� : %d\n\n", exampleNumber);

	int numA = 50;
	int numB = 60;

	SwapPreview(numA, numB);

	printf("���� numA, numB�� ��\n");
	printf("numA : %d, numB : %d\n", numA, numB);

	Swap(&numA, &numB);
	printf("Swap���� ��\n");
	printf("���� numA, numB�� ��\n");
	printf("numA : %d, numB : %d\n", numA, numB);
}