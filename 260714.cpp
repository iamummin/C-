//#include <stdio.h>
//int main()
//{
//	int a = 0x41, b = 0x61;
//	int tol;
//	tol = b - a;
//	printf("%c를 소문자로 표시하면 %c이며 \n", 'K', 'K' + tol);
//	printf("%c를 대문자로 표시하면 %c이며 \n", 'z', 'z' - tol);
//
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int num=100;
//	num++;
//	printf("%d\n", num);
//	++num;
//	printf("%d\n", num);
//	printf("%d\n", num++);
//	printf("%d\n", ++num);
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//void main() {
//	float a = 2.0f, b = 3.0f, c = 4.0f;
//	float result;
//
//	result = a + b + c;
//	printf("%5.2f + %5.2f = %5.2f \n", a, b, result);
//	result = a - b - c;
//	printf("%5.2f - %5.2f = %5.2f \n", a, b, result);
//	result = a * b * c;
//	printf("%5.2f * %5.2f = %5.2f \n", a, b, result);
//}

//#include <stdio.h>
//void main() {
//	char arr[4];
//	printf("%d\n", sizeof(arr));
//}

//#include <stdio.h>
//void main() {
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int num = 100;
//	printf("%d\n", ++num);
//	printf("%d\n", num++);
//	printf("%d\n", --num);
//	return 0;
//}

//#include <stdio.h>
//void main(){
//	char alpah[4] = {'a', 'b', 'c', 'd'};
//	printf("%c%c%c%c\n", alpah[0],
//		alpah[1], alpah[2], alpah[3]);
//}

//#include <stdio.h>
//void main() {
//	int num[3] = { 3, 6, 9 };
//	printf("num의 안에 들어있는");
//	printf("1 번째 숫자는? %d\n", num[1]);
//}

//#include <iostream>
//using namespace std;
//void main() {
//	int num[3] = { 3, 6, 9 };
//	cout << "num의 안에 들어있는 ";
//	cout << "1 번째 숫자는? " << num[1];
//}

//#include <stdio.h>
//int main() {
//	int num[3] = { 3, 6, 9 };
//	printf("%d번째에 %d 저장\n", 0, num[0]);
//	printf("%d번째에 %d 저장\n", 1, num[1]);
//	printf("%d번째에 %d 저장\n", 2, num[2]);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int num[3] = { 3, 6, 9 };
//	int k = 0;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int num[3] = { 3, 6, 9 };
//	for (int k = 0; k < 3; k++) {
//		printf("%d번째에 %d 저장\n", k, num[k]);
//	}
//return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int arr[3];
//	for (int i = 0; i < 3; i++) {
//		cin >> arr[i];
//		cout << arr[i] << endl;
//	}
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int arr[5];
//	for (int i = 0 ; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//	printf("\n\n");
//	for (int j = 0; j < 5; j++) {
//		printf("%d\n", arr[j]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int arr[10];
//	int n;
//
//	printf("10개 입력 >> ");
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int flag = 1;
//	while (flag) {
//		printf("찾을 숫자 입력 >> ");
//		scanf("%d", &n);
//		for (int k = 0; k < 10; k++) {
//			if (n == arr[k]) {
//				printf("exist");
//				flag = 0;
//				break;
//			}
//		}
//	}
//	printf("end");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//void main() {
//	int one, two;
//	int max = 0;
//	cin >> one >> two;
//	
//	if (one > two) max = one;
//	else max = two;
//	cout << "max = " << max << endl;
//}

//#include <iostream>
//using namespace std;
//void main() {
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//
//	if (one > two) {
//		if (one > three) max = one;
//		else max = three;
//	}
//	else {
//		if (two > three) max = two;
//		else max = three;
//	}
//	cout << "max = " << max << endl;
//}

//#include <iostream>
//using namespace std;
//void main() {
//	int a[3] = { 1, 3, 2 };
//	int max = a[0];
//	for (int i = 1; i < 3; i++) {
//		if (max < a[i]) max = a[i];
//	}
//	cout << "max = " << max << endl;
//}


//#include <stdio.h>
//int main() {
//	int a[5] = { 1, 3, 6, 4, 2 };
//	int min = a[0];
//	int max = a[0];
//	int total= a[0];
//	for (int i = 1; i < 5; i++) {
//		if (min > a[i]) min = a[i];
//		if (max < a[i]) max = a[i];
//		total += a[i];
//	}
//	printf("min = %d\n", min);
//	printf("max = %d\n", max);
//	printf("total = %d\n", total);
//
//	double avg;
//	avg = total / 5.0;
//	printf("avg = %.1f\n", avg);
//
//	return 0;
//}

//아직 더 풀어야함(수정필요)
#include <stdio.h>
int main() {
	int a[10] = { 1, 1, 4, 5, 6, 2, 3, 3, 4, 1 };
	int b[6] = {0};
	for (int i = 0; i < 10; i++) {
		for (int j = 1; j <= 6; j++) {
			if (a[i] == j) b[j - 1] += 1;
		}
	}
	for (int k = 0; k < 6; k++) {
		printf("%d >> %d", k + 1, b[k]);
	}
	return 0;
}




