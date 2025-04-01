/*
* 파일 입출력
* 1. fopen() - fclose()- FILE* fp;
* 2. 저장 - fputs, fputc // fprintf()
* 3. 로드 - fgetc, fgets // fscanf()
* 3. 구조체를 이용해서 데이터를 저장하고 싶다.
*/

#include "Rank.h"

int main()
{
	printf("1. 파일을 저장하는 함수 구현\n");
	FileSaveTemp();

	printf("2. 파일을 읽어오는 함수 구현\n");

	printf("3. 링크 구조체를 구현\n");

	Rank rank[MAXPLAYER];
	int order = 0;
	//int count = 0;
	AddRank(rank, &order, "Bear", 100);
	AddRank(rank, &order, "Candy", 150);
	AddRank(rank, &order, "Candy", 150);
	AddRank(rank, &order, "Candy", 150);
		
	//order = LoadRank(RANKFILEPATH, rank);

	if (order < MAXPLAYER)
	{
		printf("새로운 플레이어의 이름을 입력하세요 : ");
		char newName[MAXLENGTH];
		int newScore;

		scanf("%49s", newName);
		printf("점수를 입력하세요 : \n");
		scanf("%d", &newScore);

		AddRank(rank, &order, newName, newScore);
	}

	PrintfRanking(rank, order);

	FileSave(RANKFILEPATH, rank, order);
}