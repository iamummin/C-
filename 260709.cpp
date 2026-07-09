//#include <stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int A, B, C, D, E;
//	A = a + b;
//	B = a - b;
//	C = a * b;
//	D = a / b;
//	E = a % b;
//	printf("%d %d %d %d %d", A, B, C, D, E);
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int n;
//	scanf("%d", &n);
//	int k;
//	k = n % 50;
//	printf("%d", k);
//
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	coin = coin % 1000;
//	printf("만원권 %d개\n", coin10000);
//	printf("오천원권 %d개\n", coin5000);
//	printf("천원권 %d개\n", coin1000);
//	printf("나머지는 동전입니다.");
//
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int n, coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &n);
//	coin = 1000 - n;
//
//	int coin500 = coin / 500;
//	coin = coin % 500;
//	int coin100 = coin / 100;
//	coin = coin % 100;
//	int coin50 = coin / 50;
//	coin = coin % 50;
//	int coin10 = coin / 10;
//	coin = coin % 10;
//	printf("오백원 %d개\n", coin500);
//	printf("백원 %d개\n", coin100);
//	printf("오십원 %d개\n", coin50);
//	printf("십원 %d개\n", coin10);
//	printf("나머지는 1원 단위입니다.");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자: %d", nextInt);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	int afterInt = rand() % 10 + 50;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d\n", nextInt);//0~9
//	printf("그다음숫자 : %d\n", afterInt);//50~59
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("그리고 과자의 가격은");
//	printf("%d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
//
//	return 0;
//}

//#include <iostream>
//void main() {
//	int number, count;
//	std::cin >> number >> count;   //cin이 스캔에프
//
//	std::cout << "new : " << number << " " << count << std::endl; //count은 프린트에프
//}

//#include <iostream>
//using namespace std;
//void main() {
//	int number, count;
//	cin >> number >> count;
//
//	cout << "new : " << number << " " << count << std::endl;
//}

//#include <iostream>
//#include <bitset>
//using namespace std;
//void main() {
//	char a = 77; 
//	char b = 8;
//	cout << bitset<8>(a) << "->" << (int)a << endl;
//	cout << bitset<8>(b) << "->" << (int)b << endl;
//
//	cout << "AND : " << bitset<8>(a & b) << endl;
//	cout << "OR : " << bitset<8>(a | b) << endl;
//	cout << "XOR : " << bitset<8>(a ^ b) << endl;
//	cout << "NOT : " << bitset<8>(~a) << endl;
//	cout << "& > ^ : " << bitset<8>(a ^ a & b) << endl;
//}

//#include <iostream>
//#include <bitset>
//using namespace std;
//
//void main()
//{
//	char a = -1;
//	char b = a >> 5;
//	char c = 127 >> 1;
//
//	printf("%x (%d)\n", a, a);
//	printf("%x (%d)\n", a, b);
//	printf("%x %x\n\n", 127, c);
//
//	char d = 1 << 1;
//	char e = 1 << 4;
//	char f = 1 << 7;
//	printf("%x (%d)\n", d, d);
//	printf("%x (%d)\n", e, e);
//	printf("%x (%d)\n", f, f);
//}

//#include <stdio.h>
//void main()
//{
//	char arr[4];
//	printf("%d\n", sizeof(arr));
//}

//#include <stdio.h>
//void main()
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//}


//#include <stdio.h>
//void main()
//{
//	int num[3] = { 3, 6, 9 };
//	printf("num의 안에 들어있는");
//	printf("1번째 숫자는? %d\n", num[1]);
//
//}