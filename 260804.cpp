//#include <stdio.h> 
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
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			printf(" %3d", data[i][j]);
//		}
//		printf("\n");
//		delete data[i];
//	}
//	delete data;
//}

//#include <stdio.h> 
//
//void main()
//{
//	int rows = 5, cols = 5;
//	int** data = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		for (int k = 0; k <= 25; k++) {
//			data[i] = new int[cols];
//			for (int j = 0; j < cols; j++) {
//				data[i][j] = 5 * i + j + 1;
//			}
//		}
//	}
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			printf(" %3d", data[i][j]);
//		}
//		printf("\n");
//		delete data[i];
//	}
//	delete data;
//}


//#include <stdio.h> 
//
//void main()
//{
//	int rows = 5, cols = 5;
//	int** data = new int* [rows];
//	int k=1;
//		for (int i = 0; i < rows; i++)
//		{
//			data[i] = new int[cols];
//			for (int j = 0; j < cols; j++) {
//				data[i][j] = k;
//				k++;
//			}
//		}
//	for (int i =0; i <rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			printf(" %3d", data[i][j]);
//		}
//		printf("\n");
//		delete data[i];
//	}
//	delete data;
//}


//#include <stdio.h> 
//
//void main()
//{
//	int rows = 5, cols = 5;
//	int** data = new int* [rows];
//	int k=1;
//		for (int i = 0; i < rows; i++)
//		{
//			data[i] = new int[cols];
//			for (int j = 0; j < cols; j++) {
//				data[i][j] = k;
//				k++;
//			}
//		}
//	for (int i = rows-1; i >=0; i--) {
//		for (int j =cols-1; j >=0; j--) {
//			printf(" %3d", data[i][j]);
//		}
//		printf("\n");
//		delete data[i];
//	}
//	delete data;
//}


//#include <stdio.h> 
//
//void main()
//{
//	int rows = 5, cols = 5;
//	int** data = new int* [rows];
//	int arr[25] = { 0 };
//	int k = 1;
//	for (int i = 0; i < rows; i++)
//	{
//		data[i] = new int[cols];
//		for (int j = 0; j < cols; j++) {
//			data[i][j] = k;
//			k++;
//		}
//	}
//	int m = 0;
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			arr[m] = data[i][j];
//			m++;
//		}
//		delete data[i];
//	}
//	delete data;
//	for (int q = 0; q < 25; q++) {
//		printf("%3d ", arr[q]);
//	}
//}


//#include <stdio.h> 
//#pragma warning(disable:4996)
//void main()
//{
//	int x[10] = { 0 };
//	int n;
//	char arr[10][10] = {}; //배열 초기화
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &x[i]);
//	}
//	for (int j = 0; j < n; j++) {
//		for (int p = 0; p < x[j]; p++) {
//			arr[j][p] = '*';     
//		}
//	}
//	for (int j = 0; j < n; j++) {
//		for (int p = 0; p < x[j]; p++) {
//			printf( "%c", arr[j][p]); //"%c"
//		}
//		printf("\n");
//	}
//}

#include <stdio.h>
#pragma warning(disable:4996)
void main() {
	int n;
	scanf("%d", &n);
	char 
}


