//#include <iostream>
//using namespace std;
//
//void swapItem(int a, int b) {
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void main() {
//	int player1 = 101, player2 = 305;
//	swapItem(player1, player2);
//	cout << player1 << " " << player2 << endl;
//}

//#include <iostream>
//using namespace std;
//void swapitem(int arr[]) {
//	int tmp = arr[0];
//	arr[0] = arr[1];
//	arr[1] = tmp;
//}
//
//void main() {
//	int X[2] = { 101, 305 };
//	swapitem(X);
//	cout << X[0] << " " << X[1] << endl;
//}

//#include <stdio.h>
//int main() {
//	int ary[] = { 100, 200, 300, 400 };
//	for (int i = 0; i < 3; i++) {
//		printf("%d", ary[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int ary[2][3];
//	int i, k;
//	int num = 10;
//	for (i = 0; i < 2; i++)
//		for (k = 0; k < 3; k++)
//			ary[i][k] = --num;
//
//	for (i = 0; i < 2; i++) {
//		for (k = 0; k < 3; k++) {
//			printf("%3d", ary[i][k]);
//		}
//		printf("\n");
//	}
//}

//#include <iostream>
//using namespace std;
//void printBoard(int board[][3], int rows) {
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < 3; j++)
//			cout << board[i][j] << " ";
//		cout << endl;
//	}
//}
//
//void main() {
//	int board[3][3] = {
//		{1,2,3},
//		{4,5,6},
//		{7,8,9}
//	};
//	printBoard(board, 3);
//}

//#include <iostream>
//#pragma warning(disable:4996)
//
//using namespace std;
//void printBoard(int board[][3], int rows) {
//	int total = 0;
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < 3; j++)
//		{
//			total += board[i][j];
//		}
//	}
//	cout << total << endl;
//}
//
//void main() {
//	int board[2][3] = {};
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++) {
//			cin >> board[i][j];
//		}
//	}
//	printBoard(board, 2);
//}

//#include <iostream>
//#pragma warning(disable:4996)
//
//using namespace std;
//void printBoard(int board[][3], int rows) {
//	int totaly = 0;
//	int totalh = 0;
//	printf("행 합계 : ");
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < 3; j++) {
//			totalh += board[i][j];
//		}
//		printf("%d ", totalh);
//		totalh = 0;
//	}
//	printf("\n");
//	printf("열 합계 : ");
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < rows; j++) {
//			totaly += board[j][i];
//		}
//		printf("%d ", totaly);
//		totaly = 0;
//	}
//}
//
//void main() {
//	int board[3][3] = {};
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> board[i][j];
//		}
//	}
//	printBoard(board, 3);
//}

//#include <iostream>
//#pragma warning(disable:4996)
//
//using namespace std;
//void printBoard(int board[][3], int rows) {
//	int totaly[3] = {};
//	int totalh[3] = {};
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < 3; j++) {
//			totalh[i] += board[i][j];
//		}
//	};
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < rows; j++) {
//			totaly[i] += board[j][i];
//		}
//	}
//	printf("행 합계 : %d %d %d\n", totalh[0], totalh[1], totalh[2]);
//	printf("열 합계 : %d %d %d", totaly[0], totaly[1], totaly[2]);
//}
//
//void main() {
//	int board[3][3] = {};
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> board[i][j];
//		}
//	}
//	printBoard(board, 3);
//}

//#include <iostream>
//using namespace std;
//
//int my_minus(int n)
//{
//	if (n <= 1) return -3;
//	return my_minus(n - 1) - 2;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << my_minus(n);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void printNumber(int n)
//{
//	if (n <= 0) return;
//	printNumber(n - 1);
//	cout << n;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	printNumber(n);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int fibonacci(int n)
//{
//	cout << n;
//	if (n <= 2) return 1;
//
//	cout << n << endl;
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << endl << fibonacci(n) << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int my_plus(int n)
//{	
//	if (n <= 0) return 0;
//	return n + my_plus(n - 1);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << my_plus(n);
//	return 0;
//}

//#include <stdio.h>
//struct BYTE
//{
//	char one;
//	char two;
//};
//void main() 
//{
//	BYTE one;
//	one.one = 10;
//	one.two = 20;
//	printf("%d %d", one.one, one.two);
//}

#include <stdio.h>
#include <string>
using namespace std;
struct student
{
	int id;
	string name;
	float aver;
};
void main() 
{
	student s = { 1, "이샘", 90.5 };
	printf("아이디: %d\n", s.id);
	printf("이름: %s\n", s.name.c_str());   //c_str 안하고 싶으면 cout으로 출력
	printf("백분율: %lf\n", s.aver);
}