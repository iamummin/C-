//#include <stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int num = 100;
//	if (num != 100)
//		printf("100이 아니네요.\n");
//		printf("아쉽네요\n");
//	
//
//		printf("프로그램을 종료합니다.");
//
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////#pragma warning(disable:4996)
//int main() {
//	int age = 21;
//	switch (age / 10)
//	{
//	case 0: printf("어린이 \n");
//	case 1: printf("10대 \n");
//	case 2: printf("20대 \n");
//	case 3: printf("30대 \n");
//	case 4: printf("40대 \n");
//	default: printf("50대 \n");
//	}
//
//}

//184p 연습문제 9
//#include <stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	char ch;
//	printf("A, B, C 키 중 하나를 누르고 Enter를 누르세요 : ");
//	scanf(" %c", &ch);
//
//	switch(ch)
//	{
//	case 'a':  
//	case 'A': 
//		printf("A 키를 눌렀습니다. \n"); 
//		break;
//	case 'b': 
//	case 'B': printf("B 키를 눌렀습니다. \n"); break;
//	case 'c': 
//	case 'C': printf("C 키를 눌렀습니다. \n"); break;
//	default: printf("잘못 눌렀습니다. \n"); break;
//
//	}
//	return 0;
//
//}

//#define CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	for (int i = 0; i < 3; i++) 
//		printf("IT ");
//		printf("CookBook ");
//	
//}

//#include <stdio.h>
//int main() {
//	int a[10] = { 1, 1, 4, 5, 6, 2, 3, 3, 4, 1 };
//	int b[7] = {};//0,1-6
//	for (int i = 0; i < 10; i++) {
//		b[a[i]] += 1;
//	}
//	for (int k = 1; k <= 6; k++) {
//		printf("%d >> %d\n", k, b[k]);
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//void main() {
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	cout << "left = " << left << ", ";
//	cout << "right = " << right << endl;
//}

//#include <iostream>;
//using namespace std;
//void main() {
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	left = right;
//	right = temp;
//	cout << "left = " << left << ", ";
//	cout << "right = " << right << endl;
//
//}

//#include <iostream>
//using namespace std;
//void main() {
//	int num[2] = { 10, 3 };
//	int temp;
//
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//
//	cout << "num[0] = " << num[0] << ", ";
//	cout << "num[1] = " << num[1] << endl;
//
//}

//#include <iostream>
//using namespace std;
//void main() {
//	int num[4] = {4, 3, 1, 2};
//	int swap;
//	swap = num[0];
//	num[0] = num[2];
//	num[2] = swap;
//
//	swap = num[1];
//	num[1] = num[3];
//	num[3] = swap;
//
//	swap = num[2];
//	num[2] = num[3];
//	num[3]= swap;
//	
//	for (int i = 0; i < 4; i++) {
//		cout << num[i];
//	}
//
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int arr[4] = { 0 };
//	for (int i = 0; i < 4; i++) { scanf("%d", &arr[i]); }
//	int temp;
//	for (int k = 3; k > 0; k--) {
//		for (int j = 0; j < k; j++) {
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int p = 0; p < 4; p++) { printf("%d", arr[p]); }
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//	int *buff;
//	buff = new int[2];
//	cin >> buff[0] >> buff[1];
//	cout << "new : " << buff[0] << " " << buff[1] << endl;
//	delete buff;
//}

//#include <iostream>
//using namespace std;
//void main() 
//{
//	int n;
//	cin >> n;
//	int* buff = new int[n];
//	for (int i = 0; i < n; i++)
//		cin >> buff[i];
//	for (int i = 0; i < n; i++)
//		cout << buff[i] << " ";
//	delete buff;
//}

//#include <iostream>
//#include<ctime>
//using namespace std;
//void main()
//{
//	srand((unsigned int)time(NULL));
//
//	int n;
//	cin >> n;
//
//	int* buff = new int[n];
//	for (int i = 0; i < n; i++) {
//		buff[i] = rand() % 5 + 5;
//	}
//
//	cout << "new : ";
//	for (int i = 0; i < n; i++) {
//		cout << buff[i] << " ";
//	}
//	cout << endl;
//	delete buff;
//
//}


