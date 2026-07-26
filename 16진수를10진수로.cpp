#include <iostream>
#include <string>
using namespace std;

void main() {
	string s;
	cin >> s;
	int k = 0;
	int result = 0; //결과 10진수
	for (int i = 0;i < s.length();i++) {
		if (s[i] >= '0' && s[i] <= '9') { k = s[i] - '0'; }
		else if (s[i] >= 'A' && s[i] <= 'F') { k = s[i] - 'A' + 10; }
		result = result * 16 + k;
	}
	cout << result << endl;
}


//퀵 정렬(Quick Sort)은 분할 정복(Divide and Conquer) 전략을 사용하는 정렬 알고리즘으로, 평균적으로 가장 빠른 성능을 보입니다. 피벗(pivot)을 기준으로 데이터를 분할하고 재귀적으로 정렬하는 방식으로, 실무에서 가장 많이 사용되는 정렬 알고리즘 중 하나입니다.
//퀵 정렬이란?Permalink
//퀵 정렬은 피벗(pivot)이라는 기준 값을 선택하여 피벗보다 작은 값은 왼쪽, 큰 값은 오른쪽으로 분할(partition) 한 후, 각 부분을 재귀적으로 정렬하는 알고리즘입니다. 찰스 앤터니 리처드 호어(C.A.R. Hoare)가 1960년에 개발했으며, 평균적으로 O(n log n)의 시간 복잡도를 가집니다.
