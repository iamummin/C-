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
