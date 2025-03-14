#include "lecture.h"

int GameScore = 0;

void ShowLecture()
{
	printf("강의 예제 1\n");

	// 변수를선언하고 주소를 출력해 보세요.
	int num1 = 10;
	int* numptr = &num1;  // 주소    =    값

	printf("값을 출력 :%d\n", num1);
	printf("주소를 출력 :%p\n\n", numptr);

	printf("강의 실습 1\n"); // 두 숫자의 값을 변경하는 함수를 구현한다.
	
	// int* 2개 필요하다. int형 주소
	int numA = 5;
	int numB = 6;
	printf("numA의 값 :%d, numB의 값 :%d\n", numA, numB);
	Swap(&numA, &numB);
	printf("numA의 값 :%d, numB의 값 :%d\n\n", numA, numB);

	printf("응용 예제 1\n");

	IncreaseScore(&GameScore, 10);
	printf("현제 점수 : %d\n\n", GameScore);

	printf("강의 실습 2\n");

	// 변수 3개를 선언해보세요
	float weight = 1.5f;
	int weaponLv = 1;
	int baseAP = 10;

	printf("가중치 : %f, 레벨 : %d, 기본 공격력 :%d\n", weight, weaponLv, baseAP);
	UpgradeWeapon(&weaponLv, baseAP, &weight);
	printf("가중치 : %f, 레벨 : %d, 기본 공격력 :%d\n", weight, weaponLv, baseAP);

	// 정리
	// 함수를 이용해서 값을 변경한다. 주소를 이용해서 값을 변경할 수 있다.
	// 언제 주소를 사용할까? 1. 외부의 값을 변경해야 할 때  2. 가져와야 할 테이터 타입이 너무 클 때 주소만으로 가져올 수 있다.(배열, 구조체)

	// 아이템의 갯수를 증가시키는 함수를 만들어 보세요

	// 플레이어의 좌표를 이동시키는 함수를 만들어 보세요
	int x = 5;
	int y = 20;

	//mySwap(x, y);
	//printf("mySwap x의 값 :%d, y의 값 :%d\n", x, y);
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
	printf("현제 무기 공격력 : %f\n", (*weaponLv) * (*weight) * baseAP);
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