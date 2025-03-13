/*
* 작성일 : 2025-03-13
* 주  제 : 포인터에 대한 이해
*/

/*
* 포인터가 무엇인가?
* 포인터는 주소이다.
* 변수의 정보 : 어떤 데이터를 저장하는가, 데이터의 크기는 어떻게 되는가?
* 컴퓨터의 입장 : 이름으로 변수를 호출한다. 주소를 기억한다.
*/

/*
* 변수의 선언
* int number; number 정수형 값을 저장할 수 있다. number의 주소를 갖고있다.
* 주소 연산자를 사용해서 변수에 들어있는 주소를 출력할 수 있다. &number;
* 주의할 점 : 주소 연산자는 변수가 선언되고 난 이후에 사용해야 한다.
* 
* 포인터 변수를 선언할 떄 사용
* 포인터 연산자 : int* pointerNumber;
* 포인터 변수가 선언되고 난 이후에 사용되는 기호
* 역참조 연산자 : *pointerNumber;
*/

/*
* 포인터 어디에서 사용하면 좋은가?
* 
* 컴퓨터 안에 메모리를 저장하는 영역. 메모리 주소로 저장을 하고 있었다.
* 주소를 알고 있으면 언제 어디서나 값을 가져올 수 있다.
* 
* 언제?   변수를 만들어 두고 사용을 했어야 한다. 프로그램 실행 중에 메모리를 할당하고 사용하는 방법 - 동적 할당
* 어디서? 함수에서 변경된 값은 외부에 적용이 안된다. Call by Reference
* 
*/

/*
* 정리
* 컴퓨터의 주소를 사용 방법
*  1. 포인터 변수를 선언하는 방법
*  2. 변수로 부터 주소를 가져오는 방법 - 주소연산자
*  3. 주소로 부터 값을 가져오는 방법 int* numptr; 
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
}

// 외부에서 가져온 값은 변경하고 싶다. -> 주소의 값을 변경한다.
void Swap(int numA, int numB)
{

}

int main()
{
	printf("포인터가 무엇인가?\n");

	// 실습 1. 포인터가 무엇인가
	int number = 10;
	printf("정수 출력 : %d\n", number);
	// 포인터를 출력
	printf("포인터 출력 : %p\n", &number);

	// 실습 2. 포인터 사용
	// * , &
	// 포인터 변수
	int* pointerNumber;    // 포인터 변수의 선언
	int num1 = 10;         // 변수의 선언 - 주소가 같이 저장
	pointerNumber = &num1; // 포인터 변수에 변수의 주소값을 대입
	printf("포인터 출력 : %p\n", pointerNumber);
	printf("정수 출력 : %d\n", *pointerNumber);

	// 연습문제. 포인터 실습

	// float형 변수를 선언하고 그 변수의 주소를 출력해보세요.
	// 주소에 들어있는 값을 역참조 연산자로 호출해보세요.

	float floatNum = 0.1f;
	float* floatPointer = &floatNum;
	// 주소값 출력
	// 0.1값을 가져오기;
	printf("주소값을 출력한다 : %p\n", &floatNum);
	printf("주소로 부터 값을 출력하기 : %f\n", *floatPointer);

	//int num2 = 5;
	//int* num2ptr = &num2;

	//
	printf("Call by Value vs Call by Reference 예시\n");
	int exampleNumber = 10;
	int* exampleNumberPtr = &exampleNumber;

	CallValue(exampleNumber);
	printf("CallValue 실행 후 exampleNumber의 값 : %d\n", exampleNumber);
	CallReference(exampleNumberPtr);
	printf("CallValue 실행 후 exampleNumber의 값 : %d\n", exampleNumber);

}