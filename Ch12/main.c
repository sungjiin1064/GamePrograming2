/*
*  파일 입출력
*  1. fopen() - fclose() - FILE* fp;
*  2. 저장 fputc, fputs // fprintf()
*  3. 로드 fgetc, fgets // fscanf()
*  4. 구조체를 이용해서 데이터를 저장하고 싶다.
*/

#include "Rank.h"
#include <stdlib.h>
#include <conio.h>

int main()
{
	/*printf("1. 파일을 저장하는 함수 구현\n");
	FileSaveTemp();
	printf("2. 파일을 읽어오는 함수 구현\n");
	FileLoadTemp();
	printf("3. 랭크 구조체를 구현\n");*/

	Rank ranks[MAXPLAYER];
	int order = 0;
	/*AddRank(ranks, &order, "Bear", 100);
	AddRank(ranks, &order, "Candy", 150);
	AddRank(ranks, &order, "Dog", 250);
	AddRank(ranks, &order, "Dog", 75);*/

	order = LoadRank(RANKFILEPATH, ranks);

	int firstRank = 0;

	while (1)
	{
		printf("1_데이터 추가 2_랭킹 확인 3_프로그램 종료 4_랭킹 데이터 삭제 5_1위의 정보를 출력");

		int input = 0;
		scanf("%d", &input);

		switch (input)
		{
			case 1: AddRankData(ranks, &order); break;
			case 2: PrintRanking(ranks, order); break;
			case 3: FileSave(RANKFILEPATH, ranks, order); return;
			case 4: DeleteRankData(ranks, &order, 0); break;
			case 5: 
				firstRank = FindMaxIndex(ranks, order);
				printf("랭킹 1위의 이름 : %s, 점수 : %d\n", ranks[firstRank].name, ranks[firstRank].score);																	
				break;
			default:
				printf("잘못된 입력입니다. 키를 다시입력해주세요.\n");
				_getch();
				system("cls");
					break;
		}
	}

	//PrintRanking(ranks, order); // 데이터를 보여주는 코드
	//AddRankData(ranks, &order);
	//system("cls");
	//PrintRanking(ranks, order);	


	//FileSave(RANKFILEPATH, ranks, order);
}