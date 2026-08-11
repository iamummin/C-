//#include <stdio.h>
//void main() {
//
//	int arr[5][5] = { 0 };
//	int n = 1, cnt = 5;
//	int y = 0, x = -1;
//
//	for (int i = 0; i < cnt; i++) {
//		x++;
//		arr[y][x] = n; //1 2 3 4 5
//		n++;
//		}
//	cnt--;
//
//	while (1) {
//		if (cnt == 0) { break; }
//
//		for (int p = 1; p <= 4; p++) {
//			for (int i = 0; i < cnt; i++) {
//				if (p % 4 == 1) { y++; }
//				else if (p % 4 == 2) { x--; }
//				else if (p % 4 == 3) { y--; }
//				else { x++; }
//				arr[y][x] = n; //6 7 8 9
//				n++;
//			}
//			if (p % 2 == 0) { cnt--; }
//		}
//
//	}
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}

//#include <stdio.h>
//#define N 5
//
//void main() {
//
//	int arr[N][N] = { 0 };
//	int n = 1, cnt = N;
//	int y = 0, x = -1;
//	int ord = 1;
//
//	while (1) {
//		//ord++;
//		//int rest;
//		//if (ord % 4 < 3) { rest = 1; }
//		//else { rest = -1; }
//
//		for (int i = 0; i < cnt; i++) {
//			x += ord;
//			arr[y][x] = n; //1 2 3 4 5
//			n++;
//		}
//
//		cnt--;
//		if (cnt == 0) { break; }
//
//		for (int i = 0; i < cnt; i++) {
//			y+= ord;
//			arr[y][x] = n; //6 7 8 9
//			n++;
//		}
//		ord = -ord;
//	}
//
//
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}


//#include <iostream>
//using namespace std;
//void hello() {
//	cout << "안녕하세요!";
//}
//int main() {
//	hello();
//	hello();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//void function_test1() {
//	cout << "function_Test1()";
//	cout << "함수 안에서 실행" << endl;
//}
//void main() {
//	cout << "실행 전" << endl;
//	function_test1();
//	cout << "실행 후" << endl;
//}

//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//void eatFood()
//{
//	string contents = "밥먹기";
//	cout << contents << endl;
//}
//void goSleep()
//{
//	string contents = "잠자기";
//	cout << contents << endl;
//}
//void main()
//{
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 6; i++) {
//		if (rand() % 2 == 0) {
//			eatFood();
//		}
//		else {
//			goSleep();
//		}
//	}
//}

//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <ctime>
//#pragma warning(disable:4996)
//using namespace std;
//void doStudy()
//{
//	string contents = "공부하기";
//	cout << contents << endl;
//}
//void watchPhone()
//{
//	string contents = "폰보기";
//	cout << contents << endl;
//}
//void main()
//{
//	int N;
//	scanf("%d", &N);
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < N; i++) {
//		printf("%d시: ", i + 1);
//		if (rand() % 2 == 0) {
//			doStudy();
//		}
//		else {
//			watchPhone();
//		}
//	}
//}

//#include <iostream>
//using namespace std;
//
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//int main() 
//{
//	cout << "벌을 영어로?" << endl;
//	cout << getB() << getE() << getE() << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int function_test2()
//{
//	int testNumber = 5;
//	return testNumber;
//}
//
//void main() {
//	int getNumber = function_test2();
//	cout << "function_test2()에서 ";
//	cout << "가져온 값 : " << getNumber;
//}

//#include <iostream>
//#pragma warning(disable:4996)
//using namespace std;
//
//float sendCard()
//{
//	cout << "<크리스마스 카드>" << endl;
//	cout << "비용: 0.7만원" << endl;
//	cout << "지불하기(단위:만원) : ";
//
//	int manwon;
//	scanf("%d", &manwon);
//	float change = manwon - 0.7;
//	return change;
//}
//
//int main() {
//	float result = sendCard();
//	cout << result << "만원 받음" << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//char getA() { return'A'; }
//char getP() { return 'P'; }
//char getL() { return 'L'; }
//char getE() { return 'E'; }
//
//int main() {
//	cout << "사과를 영어로?" << endl;
//	cout << getA() << getP() << getP() << getL() << getE() << endl;
//	return 0;
//}

//#include <stdio.h>
//int gobhagi() {
//	int total=1;
//	for (int i = 2; i <= 8; i++) {
//		total *= i;
//	}
//	return total;
//}
//int main() {
//	int result = gobhagi();
//	printf("%d", result);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int square(int n) { return n * n; }
//int main() {
//	cout << square(5) << endl;
//}

//#include<iostream>
//#include <string>
//using namespace std;
//
//string printMenu(string name) {
//	return name;
//}
//string printMenu(string name, int ml) {
//	return name
//		+ "(우유" + to_string(ml) + "ml)";
//}
//void main() {
//	string menus[2] = {
//		printMenu("아메리카노"),
//		printMenu("라떼", 50) };
//	for (int i = 0; i < 2; i++) {
//		cout << menus[i] << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//int square(int n);
//int main() {
//	cout << square(5) << endl;
//}
//int square(int n) {
//	return n * n;
//}

//#include <iostream>
//#include<string>
//using namespace std;
//
//string printMenu(string name);
//string printMenu(string name, int ml);
//
//void main() {
//	string menus[2] = {
//		printMenu("아메리카노"),
//		printMenu("라떼", 50) };
//	for (int i = 0; i < 2; i++) 
//		cout << menus[i] << endl;
//	}
//string printMenu(string name) {
//	return name;
//}
//string printMenu(string name, int ml) {
//	return name
//		+ "(우유" + to_string(ml) + "ml)";
//}

//#include <iostream>
//using namespace std;
//char rightType(char type) {
//	if (type != 'A' && type != 'B') {
//		cout << "주문할 수 없는 햄버거입니다.\n";
//		return 'C';
//	}
//	return type;
//}
//void makeHamburger(char type, int count) {
//	if (type == 'A') {
//		cout << "A타입 햄버거";
//	}
//	else {
//		cout << "B타입 햄버거";
//	}
//	cout << count << "개 나왔습니다." << endl;
//}
//int main() {
//	char ham_type;
//	int ham_count;
//	cout << "어느타입 햄버거를";
//	cout << "주문하시겠습니까?(AorB)" << endl;
//	cin >> ham_type;
//	if (rightType(ham_type) == 'C') {
//		return -1;
//	}
//	cout << "햄버거 몇 개 주문하시겠습니까?." << endl;
//	cin >> ham_count;
//	makeHamburger(ham_type, ham_count);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//
//void main() {
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	cout << "결과 : " << data1 << endl;
//}

#include <iostream>
#pragma warning(disable:4996)
using namespace std;

int add_number(int num1, int num2)
{
	int retVal = num1 + num2;
	return retVal;
}
int minus_number(int num1, int num2) {
	int pegi = num1 - num2;
	return pegi;
}
int gob_number(int num1, int num2) {
	int gobhagi = num1 * num2;
	return gobhagi;
}
int nanugi_number(int num1, int num2) {
	double nanugi = num1 / num2;
	return nanugi;
}
void main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int data1 = add_number(a, b);
	int data2 = minus_number(a, b);
	int data3 = gob_number(a, b);
	int data4 = nanugi_number(a, b);
	printf("더하기 : %d\n", data1);
	printf("빼기 : %d\n", data2);
	printf("곱하기 : %d\n", data3);
	printf("나누기 : %.lf\n", data4);
}