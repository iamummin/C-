//#include <iostream>
//#pragma warning(disable:4996)
//using namespace std;
//
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//int minus_number(int num1, int num2) {
//	int pegi = num1 - num2;
//	return pegi;
//}
//int gob_number(int num1, int num2) {
//	int gobhagi = num1 * num2;
//	return gobhagi;
//}
//double nanugi_number(int num1, int num2) {
//	double nanugi = (double)num1 / (double)num2;
//	return nanugi;
//}
//void main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int data1 = add_number(a, b);
//	int data2 = minus_number(a, b);
//	int data3 = gob_number(a, b);
//	double data4 = nanugi_number(a, b);
//	printf("더하기 : %d\n", data1);
//	printf("빼기 : %d\n", data2);
//	printf("곱하기 : %d\n", data3);
//	printf("나누기 : %.2f\n", data4);
//}

//#include <iostream>
//#include <string>
//using namespace std;
//#pragma warning(disable:4996)
//
//string title(string name) {
//	return "[검색 중] "
//		+name;
//}
//	
//void main()
//{
//	string bookname;
//	cin >> bookname;
//
//	string result = title(bookname);
//	cout << result << endl;
//}

//#include <iostream>
//#pragma warning(disable:4996)
//using namespace std;
//
//int calcPrice(char type) {
//	if (type == 'A') {
//		cout << "A타입 음료 "; 
//		return 2000;
//	}
//	else if (type == 'B') {
//		cout << "B타입 음료 "; 
//		return 3000;
//	}
//	else if (type == 'C') {
//		cout << "C타입 음료 "; 
//		return 4000;
//	}
//	return 0;
//}
//
//void calcPrice(char type, int count, int price) {
//
//	price += calcPrice(type) * count;
//	cout << count << "잔 주문 받았습니다." << endl;
//	cout << price << "원 입니다." << endl;
//}
//
//int main() {
//	char drink_type;
//	int drink_count;
//	int drink_price=0;
//	cout << "어느타입 음료수를";
//	cout << "주문하시겠습니까?(A or B or C)" << endl;
//	cin >> drink_type;
//
//	cout << "음료 몇 잔 주문하시겠습니까?" << endl;
//	cin >> drink_count;
//	calcPrice(drink_type, drink_count, drink_price);
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int sum(int arr[], int size) {
//	int total = 0;
//	for (int i = 0; i < size; i++)
//		total += arr[i];
//	return total;
//}
//void main() {
//	int nums[] = { 1, 2, 3, 4, 5 };
//	cout << sum(nums, 5) << endl;
//}

//#include <iostream>
//using namespace std;
//
//void swapItem(int& a, int& b) {
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void main() {
//	int player1 = 101, player2 = 305;
//	swapItem(player1, player2);
//	cout << player1 << " " << player2 << endl;
//}

#include <iostream>
using namespace std;
void swapitem(int arr[]) {
	int 
}

void main() {
	//int player1 = 101, player2 = 305;
	int X[2] = {101, 305};
	swapitem(X);
	cout << X[0] << " " << X[1] << endl;
}