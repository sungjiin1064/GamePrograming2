
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define RANKFILEPATH "Rank.txt"
#define MAXPLAYER 10
#define MAXLENGTH 50

typedef struct
{
	int order;
	int score;
	char name[MAXLENGTH];
}Rank;

void FileSaveTemp();

void FileSave(const char* fileName, Rank rank[], int count);

void FileLoadTemp();

int LoadRank(const char* fileName, Rank rank[]); // 메모정에 저장된 count를 반환하는 함수

void PrintfRanking(Rank rank[], int count);  // count 수 만큼 랭킹을 출력하는 함수

void AddRank(Rank rank[], int* order, const char* name, int score);
