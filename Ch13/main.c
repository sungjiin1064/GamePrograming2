
/*
* 목표 : 상점 기능을 구현한다.
* 
* 1. 상점을 데이터로 정의하세요. 아이템을 복구 개 판다.
* 2. 아이템을 정의한다. 배열로 접근할 수 있게 한다.
*/

/*
* 1. 2차원 배열 함수로 표현 - void 함수 이름(char(*map)[길이 +1]);
* 2. 파일 저장 로드 시스템을 게임에 적용해볼 것 ( 구조체, 함수, 포인터 )
* 3. 만들고 싶은 기능 정하기.
*/

#define NameLength 20

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

typedef struct
{
	char name[NameLength];
	int price;
}Item;

void AddShopData(Item shop[], int* shopCount, const char* name, int price) // Shop = Shop
{
	strncpy(shop[*shopCount].name, name, NameLength);
	shop[*shopCount].price = price;
	(*shopCount)++;
}

void ShowShopTable(Item shop[], int count)
{
	printf("+------+------+------------------+\n");
	printf("| 순서 | 가격 |    이름          |\n");
	printf("+------+------+------------------+\n");
	for (int i = 0; i < count; i++)
	{
		printf("| %4d | %4d | %-16s |\n", i + 1, shop[i].price, shop[i].name);
	}

	// 테두리 만든다.
	printf("+------+------+------------------+\n");

	_getch();
}

void ShowInventoryTable(Item inventory[], int count)
{
	printf("유저의 인벤토리\n");
	printf("+------+------+------------------+\n");
	printf("| 순서 | 가격 |    이름          |\n");
	printf("+------+------+------------------+\n");
	for (int i = 0; i < count; i++)
	{
		printf("| %4d | %4d | %-16s |\n", i + 1, inventory[i].price, inventory[i].name);
	}

	// 테두리 만든다.
	printf("+------+------+------------------+\n");

	_getch();
}

void BuyItem(Item item, Item inventory[], int* count) // item : 상점에 있는 구매할 아이템, intventory : 플레이어가 저장할 인벤토리, 인벤토리 위치
{
	inventory[*count].price = item.price;
	strncpy(inventory[*count].name, item.name, NameLength);
	(*count)++;
}

void ShopPhase(Item shop[], Item inventory[], int count, int* inventoryCount ,bool* gameQuit)
{
	printf("상점에 진입하였습니다.\n");
	while (true)
	{
		printf("1_상점 목록을 확인한다. 2_아이템을 구입한다. 3_상점을 나간다. 4_게임 종료\n");
		int input = 0;		
		scanf("%d", &input);
		int itemIndex = 0;

		switch (input)
		{
		case 1: ShowShopTable(shop, count); break;
		case 2:
			printf("구입할 아이템 번호를 입력해주세요.\n");
			scanf("%d", &itemIndex);
			BuyItem(shop[itemIndex - 1], inventory, inventoryCount);


			break;
		case 3: return;		
		case 4: *gameQuit = true; return;
		}
		
	}
}



int main()
{	
	Item Shop[10];
	int shopCount = 0;
	Item Inventory[10];
	int InventoryCount = 0;
	

	AddShopData(Shop, &shopCount, "소드", 100); // 주소로 부터 변수를 가져올때 &
	AddShopData(Shop, &shopCount, "방패", 150);
	AddShopData(Shop, &shopCount, "갑옷", 200);
	AddShopData(Shop, &shopCount, "신발", 250);
	
	bool gameQuit = false; // gameQuit

	while (1)
	{
		ShopPhase(Shop, Inventory, shopCount, InventoryCount,&gameQuit);

		void ShowInventoryTable(inventory, count);

		if (gameQuit)
		{
			break;
		}
	}
	
	printf("게임이 종료되었습니다.\n");
	
	


}