/*
* �ۼ��� : 2025-03-20
* ��  �� : ����ü�� ������
*/

/*
* ����ü�� �ּҸ� �����ϰ� ����ϴ� ���
* 
* ����ü�� ������ TYPE : Player
* 
* Ÿ���̸�*    �̸�
* Player*     playerptr;
*/

/*
* ����ü �������� ���� �����ϴ� ���
* 
* void ShowPlayerInfo(Player* playerPtr)
* 
*  1. playerPtr �ּ��̱� ������ ���� ������ �ؾ��Ѵ�. �����������ڸ� ���(*playerPtr)
*  2. ����ü�� �������� �����Ϳ� �����ϴ� ������ (���� ������ '.') (*playerPtr).playerName;
*  3. *playerPtr.playerName �������� �켱������ �����ϱ� ������ *(playerPtr.playerName)
*     => playerPtr �ּҿ��� playerName�� ������ �Ŀ� �� �ּ��� ���� �������ض�.
*  4. ȭ��ǥ ������ : ����ü�� �ּ� ���� ->  *(playerPtr.������ ������)
* {
*   (*playerPtr).playerName
* }
*/


#include <stdio.h>
#include "GameUi.h"

int main()
{
	//Ch6Example();
	GameStart();
}