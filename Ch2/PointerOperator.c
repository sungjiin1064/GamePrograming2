#include "PointerOperator.h"

void PointerExample()
{
	int number1 = 0;
	int* number1ptr = &number1;

	double doubleNumber1 = 1.0;
	double* doubleNumber1ptr = &doubleNumber1;

	printf("\n\n");
	printf("������ ���� ����\n");
	printf("Int �������� ũ�� : %d\n", sizeof(number1));
	printf("double �������� ũ�� : %d\n", sizeof(doubleNumber1));

	// ������ ũ�Ⱑ 4
	// �ּ��� ũ��� ��� �ɱ�?
	printf("Int �ּ��� ũ�� : %d\n", sizeof(number1ptr));
	printf("double �ּ��� ũ�� : %d\n", sizeof(doubleNumber1ptr));

	// x86 �ּ��� ũ�� ���� : 4����Ʈ
	// x64 �ּ��� ũ�� ���� : 8����Ʈ
	// �ּҴ� ũ�Ⱑ �����ϴ�. �����Ǿ� �ִ�. ���� �Ҵ�.

	// �ּ� ��ü�� ���ϱ� vs �ּҸ� �����ؼ� ���ϱ�
	// ������ ����ϴµ�, ��ǻ�Ͱ� ��򰡿� ����ϰ� �ֽ��ϴ�. �ּҶ�� �̸����� ����ϰ� �ִ�.
	// ������ �̸����� ���� ������ �� �ְ�, �ּҷ� ���� ���� ������ ���� �ֽ��ϴ�.

	// �ּ� ���·� �������� ���(���� ����)   - ���α׷��� ����ǰų�, ���� �޸𸮸� �����ϱ� ������ ��� �����ϴ�. - ��(Heap) ����
	// ������ �̸����� �������� ���(�� ����) - {} �ڵ� ������ ������ ������ �޸𸮰� �����˴ϴ�.                  - ��ƽ(Stack) ����

	// ��� �ڵ带 �׻� �����ϸ� �ȵɱ��?
	// ���� ������ ���� ����ŭ ������Ű�� �ڵ带 �ۼ��ϰ� �;��.
	// ����Ǿ���� ������ : ���� ����.
	// �ѹ��� ����ϰ� ����� ���� �� ���� : ���� ������ �����ϰ� ���� ����ġ
	// 10�� ����ȴ�.

	// ��� �ڵ带 �ѹ��� ����ϰ� ������ ���ϸ�?
	// GameScore �����ͷ� �����ؼ� �����ϴ� ����� ������ �� ���� �ȴ�.

	// Call by value , Call by Reference �����ؼ� ����ؾ� �� ����

	printf("number1ptr�� ���� ��� :%d\n", (*number1ptr) + 1);

	// �ּҸ� ���غ���

	printf("�ּҸ� ����غ���.\n\n");
	printf("���� �ּ� : %p\n", number1ptr);
	// �ּҸ� ���ϸ� ��� �ɱ�? - �迭, ������
	number1ptr = number1ptr + 1;
	printf("���� �ּ� : %p\n", number1ptr);

	printf("double �ּ� : %p\n", doubleNumber1ptr);

	doubleNumber1ptr = doubleNumber1ptr + 1;
	printf("double �ּ� : %p\n", doubleNumber1ptr);

	// �ּҸ� ���ϸ�, �ּ��� ���� ������ �ִ� ũ�� ��ŭ �����Ѵ�.
	// �迭�� �������� ���� �߿�(��)

	

}