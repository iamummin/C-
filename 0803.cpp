//#include<stdio.h> 
//void main() {
//	int numArr[5] = { 11, 22, 33, 44, 55 };
//	int* numptrA = &numArr[2];
//	void* ptr = numArr;
//	printf("%d\n", *(numptrA - 1));
//	printf("%d\n", *((int*)ptr+4));
//}

//#include <stdio.h>
//#define N 100
//
//void main() {
//	//const int N = 10;
//	int X[N] = { };
//	for (int i = 0; i < N; i++) {
//		X[i] = i+1;
//	}
//	int* ptr = &X[N-1];
//	for (int j = 0; j < N; j++) {
//		printf("%3d ", *ptr);
//		ptr-=1;
//	}
//}

//#include <stdio.h>
//#define N 100
//
//void main() {
//	//const int N = 10;
//	int X[N] = { };
//	for (int i = 0; i < N; i++) {
//		X[i] = i + 1;
//	}
//
//	int* ptr = &X[50];
//
//	for (; *ptr != N / 2; ptr++)
//	{
//		printf("%3d ", *ptr);
//		if (*ptr == N) {
//			ptr -= N;
//		}
//	}


	//while (1) {
	//	printf("%3d ", *ptr);
	//	ptr++;
	//	if (*ptr >= N) {
	//		printf("%3d ", *ptr);
	//		break;
	//	}
	//}

	//printf("\n");
	//ptr -= N-1;

	//while (1) {
	//	printf("%3d ", *ptr);
	//	ptr++;
	//	if (*ptr == N / 2) { break; }
	//	}
//}

//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() 
//{
//	char arr[2][3] = { '1', '2', '3', '4', '5', '6' };
//	int arr2[2][3] = { {'1', '2', '3'}, {'4', '5', '6'} };
//	cout << setw(3) << sizeof(arr);
//	cout << setw(3) << sizeof(arr2);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
//	int* p = arr[0];
//	for (int i = 0; i < 6; i++) {
//		printf("%d", *p++);
//	}
//	return 0;
//}

//#include <stdio.h>
//void main() {
//	const int M = 5;
//	const int N = 4;
//	int arr2d[M][N] = {
//		{662, 7, 4, 74},
//		{8, 396, 299, 95},
//		{66, 73, 86, 0},
//		{116, 26, 586, 42},
//		{84, 7, 41, 11}, };
//
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			printf("%3d ", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//
//	const int M = 3;
//	const int N = 3;
//	int arr2d[M][N] = {
//		{2, 4, 6},
//		{8, 10, 12},
//		{14, 16, 18}, };
//	int j = 0;
//	while (j < 3) {
//		for (int i = 0; i < M; i++) {
//			printf("%d ", arr2d[i][j]);
//		}
//		printf("\n");
//		j++;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//
//	const int M = 3;
//	const int N = 3;
//	int arr2d[M][N] = {
//		{2, 4, 6},
//		{8, 10, 12},
//		{14, 16, 18}, };
//	int j = 0;
//	for(j=0;j<3;j++){
//		for (int i = 0; i < M; i++) {
//			printf("%d ", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h> //19p 예제 쓰다 말음
//
//void main()
//{
//	int rows = 3, cols = 4;
//	int** data = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		data[i] = new int[cols];
//		for (int j = 0; j < cols; j++) {
//			data[i][j] = 10 * i + j;
//		}
//	}
//
//
//}

