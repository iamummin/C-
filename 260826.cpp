//#include <stdio.h>
//#pragma warning(disable:4996)
//struct JUICE {
//	int price;
//	int stock;
//	char name[20];
//};
//int main()
//{
//	const int N = 2;
//	JUICE juice[N] = {
//		{1500, 3, "포도주스"}, {1000, 2, "오렌지주스"}
//	};
//
//	printf("<<음료자판기!>>\n");
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d.[%6s] %4d원 (%d개남음)\n", (i + 1),
//			juice[i].name, juice[i].price, juice[i].stock);
//	}
//	printf("금액을 입금해주세요.");
//	int price;
//	scanf("%d", &price);
//	printf("%d원 받았습니다.\n", price);
//	while (price < 1000) {
//		printf("음료를 구매할 수 없습니다. 돈을 더 넣으세요.\n");
//		int addprice;
//		scanf("%d", &addprice);
//		printf("%d원 받았습니다.\n", addprice);
//		price += addprice;
//		printf("총 %d원 받았습니다.", price);
//	}
//
//	printf("원하는 음료를 입력해주세요.(1/2)");
//	int choice;
//
//	while (1) {
//		int total_stock = 0;
//		for (int i = 0; i < N; i++) {
//			total_stock += juice[i].stock;
//		}
//		if (total_stock == 0) {
//			printf("\n모든 음료의 재고가 소진되었습니다. 자판기 이용을 종료합니다.\n");
//			break;
//		}
//		scanf("%d", &choice);
//		if (choice >2 ||choice<1) {
//			printf("잘못된 번호입니다. 다시 선택해주세요");
//			printf("\n원하는 음료를 선택해주세요.(1/2)");
//			continue;
//		}
//		if (price < juice[choice - 1].price) {
//			printf("잔액이 부족합니다. 다른 메뉴를 선택해주세요.");
//			printf("\n원하는 음료를 선택해주세요.(1/2)");
//			continue;
//		}
//		if (juice[choice - 1].stock > 0) {
//			printf("%s가 나왔습니다.\n", juice[choice - 1].name);
//			juice[choice - 1].stock--;
//			printf("%s의 재고 : %d\n", juice[choice - 1].name,juice[choice - 1].stock);
//			price -= juice[choice - 1].price;
//			printf("잔액 : %d원\n", price);
//			}
//		else {
//			printf("재고가 없습니다. 다른 메뉴를 선택해주세요.");
//			printf("\n원하는 음료를 선택해주세요.(1/2)");
//			continue;
//		}
//
//		if (price >= 1000) {
//			char yn;
//			printf("추가 구매 하시겠습니까?(y/n)\n");
//			scanf(" %c", &yn);
//
//			if (yn == 'Y' || yn == 'y') {
//				printf("원하는 음료를 입력해주세요.(1/2)");
//			}
//			else if (yn == 'n' || yn == 'N') { break; }
//			else {
//				printf("잘못된 입력입니다. 구매를 종료합니다.\n");
//				break;
//			}
//		}
//		else {
//			printf("잔액이 부족하여 추가 구매가 불가능합니다.\n");
//			printf("추가 입금을 하시겠습니까?(y/n)\n");
//			char yn2;
//			scanf(" %c", &yn2);
//			if (yn2 == 'Y' || yn2 == 'y') {
//				printf("얼마 넣으실건가요?\n");
//				int addmoney;
//				scanf("%d", &addmoney);
//				price += addmoney;
//				if (price >= 1000) { printf("어떤 메뉴를 고르실건가요?" ); }
//			}
//			else if (yn2 == 'N' || yn2 == 'n') { break; }
//			else { break; }
//		}
//	}
//	printf("거스름돈은 %d원 입니다.\n", price);
//	printf("이용해 주셔서 감사합니다.");
//	return 0;
//}

/*
* 가격, 재고, 음료종류 띄워주기
1. 금액을 입금해주세요
2. 얼마 받았습니다.
금액이 가장 싼 음료 미만일 경우: 음료를 구매할 수 없습니다.(반복)
돈을 더 넣으세요
얼마 받았습니다.
총 금액 띄우기
3. 원하는 음료를 선택해주세요.
선택한 음료의 재고가 0이라면, 재고가 없습니다. 다른 메뉴를 선택해주세요. 라고 하고 3번으로 돌아가기
4. 선택한 음료 재고 -1 하고 띄워주기
5. (돈이 최소금액 이상 남았다면)추가 구매 하시겠습니까?
6. 아니면 끝내기
7. 맞으면 3번으로 돌아가서 7번까지 실행하기 반복
8. 끝내면 거스름돈 얼마라고 띄워주기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct DATA {

	int N, * pNum;
};

void func_swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void func_sort(DATA *pData)
{
	for (int i = 0; i < (*pData).N; ++i) {
		for (int j = i; j < pData->N; ++j) {
			if (pData->pNum[i] > pData->pNum[j])
				func_swap(pData->pNum[i], pData->pNum[j]);
		}
	}
}

void main()
{
	DATA data;
	scanf("%d", &data.N);
	data.pNum = (int*)malloc(sizeof(int) * data.N);
	srand((unsigned int)time(NULL));
	printf("<랜덤으로 입력받은 수 출력>\n");
	for (int i = 0; i < data.N; i++) {
		*(data.pNum + i) = (rand() % data.N) + 1;
		printf("%2d", data.pNum[i]);
	}
	func_sort(pNum, N);
	printf("\n<오름차순 정렬된 수 출력>\n");
	for (int i = 0; i < N; i++) {
		printf("%2d", pNum[i]);
		if (i % 10 == 9) printf("\n");
	}
	free(pNum);
}