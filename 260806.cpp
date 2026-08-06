//#include <stdio.h>
//#include <stdlib.h>
//#include <ctime>
//#pragma warning(disable:4996)
//
//void main() {
//	srand(time(NULL));
//	int n;
//	scanf("%d", &n);
//
//	int** data = new int* [n];
//	for (int i = 0; i < n; i++) {
//		data[i]=new int[n];
//		for (int j = 0; j < n; j++) {
//			data[i][j] = rand() % 900+100;
//			printf("%d ", data[i][j]);
//		}
//		printf("\n");
//	}
//	int** data2 = new int* [n];
//	for (int i = 0; i < n; i++) {
//		data2[i] = new int[n];
//		for (int j = 0; j < n; j++) {
//			if (data[i][j] % 2 == 0) { data2[i][j] = '.'; }
//			else { data2[i][j] = '*'; }
//			printf("%c ", data2[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < n; i++) {
//		delete data[i];
//		delete data2[i];
//	}
//	delete data;
//	delete data2;
//}

#include <stdio.h>
void main() {

	//x++;
	//arr[y][x] = n; //0 1 2
	//n++;

	//x++;
	//arr[y][x] = n; //0 2 3
	//n++;

	//x++;
	//arr[y][x] = n;//0 3 4
	//n++;

	//x++;
	//arr[y][x] = n;//0 4 5
	//n++;
	// 
	//y++;
	//arr[y][x] = n;//2 4 7
	//n++;

	//y++;
	//arr[y][x] = n;//3 4 8
	//n++;

	//y++;
	//arr[y][x] = n;//4 4 9
	//n++;

	int arr[5][5] = { 0 };
	int n = 1, cnt = 5;
	int y = 0, x = -1;


	for (int i = 0; i < cnt; i++) {
		x++;
		arr[y][x] = n; //1 2 3 4 5
		n++;
	}

	cnt--;
	for (int i = 0; i < cnt; i++) {
		y++;
		arr[y][x] = n; //6 7 8 9
		n++;
	}


	for (int i = 0; i < cnt; i++) {
		x--;
		arr[y][x] = n; //10 11 12 13
		n++;
	}

	cnt--;
	for (int i = 0; i < cnt; i++) {
		y--;
		arr[y][x] = n; //14 15 16
		n++;
	}

	for (int i = 0; i < cnt; i++) {
		x++;
		arr[y][x] = n; //17 18 19
		n++;
	}

	cnt--;
	for (int i = 0; i < cnt; i++) {
		y++;
		arr[y][x] = n; //20 21
		n++;
	}

	for (int i = 0; i < cnt; i++) {
		x--;
		arr[y][x] = n; //22 23
		n++;
	}


	cnt--;
	for (int i = 0; i < cnt; i++) {
		y--;
		arr[y][x] = n; //24
		n++;
	}

	for (int i = 0; i < cnt; i++) {
		x++;
		arr[y][x] = n; //25
		n++;
	}



	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}

}
