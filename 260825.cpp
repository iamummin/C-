//#include <iostream>
//using namespace std;
//
//struct Point {
//	short x, y;
//};
//Point makePoint(short x, short y) {
//	Point p = { x, y };
//	return p;
//}
//void main() 
//{
//	Point p = makePoint(4, 9);
//	cout << p.x << " " << p.y << endl;
//	cout << sizeof(Point) << endl;
//}

//#include <stdio.h>
//#include <string.h>
//struct MYDATA { int a; char b[25]; };
//void main()
//{
//	char buf[5];
//	memset(buf, '1', 5);
//	printf("%s\n", buf);
//
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//
//	struct MYDATA data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'A';
//	printf("%d - %s\n", data.a, data.b);
//	printf("%d", sizeof(MYDATA));
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//struct GM {
//	int no;
//	string name;
//	string part;
//	int salary;
//};
//struct COMPANY {
//	GM gms[5];
//	int gmCount;
//};
//COMPANY HireGM_once(COMPANY n) {
//	n.gms[n.gmCount].no = n.gmCount + 1;
//	cout << "이름을 입력하세요: " << endl;
//	cin>>n.gms[n.gmCount].name;
//	cout << "부서를 입력하세요: " << endl;
//	cin>>n.gms[n.gmCount].part;
//	cout << "급여를 입력하세요: " << endl;
//	cin>>n.gms[n.gmCount].salary;
//	n.gmCount++;
//	return n;
//}
//void main() 
//{
//	cout << "게임을 출시해보자!" << endl;
//	COMPANY gameCo;
//	gameCo.gmCount = 0;
//	cout << "먼저 GM부터 고용할까?" << endl;
//	while (1) {
//		gameCo = HireGM_once(gameCo);
//		cout << ("더 고용할까?(y/n) : ");
//		string chice;
//		cin >> chice;
//		if (chice == "n") break;
//	}
//	cout << "GM " << gameCo.gmCount <<"명을 뽑았다!";
//	cout << sizeof(GM) << endl;
//	cout << sizeof(COMPANY) << endl;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//struct SNACK {
//	int price;
//	int stock;
//	char name[20];
//};
//void main()
//{
//	const int N = 2;
//	SNACK snacks[N] = {
//		{1500, 3, "레몬칩"}, {1000, 2, "달고나"}
//	};
//
//	printf("<<과자자판기!>>\n");
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d.[%6s] %4d원 (%d개남음)\n", (i + 1),
//			snacks[i].name, snacks[i].price, snacks[i].stock);
//	}
//	int choice;
//	scanf("%d", &choice);
//	printf("%s가 나왔습니다.\n", snacks[choice - 1].name);
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

//#include <stdio.h>
//#pragma warning(disable:4996)
//struct JUICE {
//	int price;
//	int stock;
//	char name[20];
//};
//void main()
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
//	int choice;
//	scanf("%d", &choice);
//	printf("%s가 나왔습니다.\n", juice[choice - 1].name);
//}

#include <stdio.h>
#pragma warning(disable:4996)
struct JUICE {
	int price;
	int stock;
	char name[20];
};
void main()
{
	const int N = 2;
	JUICE juice[N] = {
		{1500, 3, "포도주스"}, {1000, 2, "오렌지주스"}
	};

	printf("<<음료자판기!>>\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d.[%6s] %4d원 (%d개남음)\n", (i + 1),
			juice[i].name, juice[i].price, juice[i].stock);
	}
	printf("금액을 입금해주세요.");
	int price;
	scanf("%d", &price);
	printf("%d원 받았습니다.\n", price);
	while (price < 1000) {
			printf("음료를 구매할 수 없습니다. 돈을 더 넣으세요.\n");
			int addprice;
			scanf("%d", &addprice);
			printf("%d원 받았습니다.\n", addprice);
			price += addprice;
			printf("총 %d원 받았습니다.", price);
	}
	int choice;
	scanf("%d", &choice);
	printf("%s가 나왔습니다.\n", juice[choice - 1].name);
}

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