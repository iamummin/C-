//#include <stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int i, j;
//	printf("시작값 ==> ");
//	scanf("%d", &i);
//	printf("\n");
//	printf("끝 값 ==> ");
//	scanf("%d", &j);
//
//	int start = i;
//	int end = j;
//
//	if (i > j) {
//		start = j;
//		end = i;
//	}
//	while (start <= end) {
//		if (start % 2 != 0) {
//			printf("%d ", start);
//		}
//		start++;
//	}
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int num;
//	printf("숫자를 여러 개 입력 : ");
//	scanf("%d", &num);
//	int ori_num = num;
//	int place = 1;
//	while (num > 10) {
//		num /= 10;
//		place = place * 10;
//	}
//	num = ori_num;
//	while (num > 0) {
//		int current = num / place;
//		int i = 0;
//		while (i < current * 2) {
//			printf("\u2665");
//			i++;
//		}
//		printf("\n");
//		num %= place;
//		place /= 10;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//void main() {
//	srand((unsigned int)time(NULL));
//
//	int n;
//	cin >> n;
//
//	int* buff = new int[n];
//	for (int i = 0; i < n; i++) {
//		buff[i] = rand() % ;
//	}
//
//}

#include <iostream>
#include<ctime>
using namespace std;
void main()
{
	srand((unsigned int)time(NULL));

	int n;
	cin >> n;

	int* buff = new int[n];
	for (int i = 0; i < n; i++) {
		buff[i] = rand() % 101 ;
	}

	for (int i = 0; i < n; i++) {
		cout << i+1;
		cout << "번째 학생(";
		cout << buff[i] << "점)";
		if (buff[i] >= 80) printf(" - A");
		else if (buff[i] >= 60) printf(" - B");
		else if (buff[i] >= 40) printf(" - C");
		else if (buff[i] >= 20) printf(" - D");
		else printf(" - F");
		cout << "\n";
	}
	cout << endl;
	delete buff;

}