//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s;
//	cin >> s;
//	for (int i = s.length()-1; i >= 0; i--) {
//		cout << s[i];
//	}
//
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//void main() {
//	string s;
//	cin >> s;
//	char search;
//	cin >> search;
//	size_t at = s.find(search); //size_t는 unsigned int임
//	if (at == string::npos)
//		cout << "없음" << endl;
//	else cout << search << " is at " << at << "" << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main() {
//	string s;
//	cin >> s;
//	cout << s.substr(7, 5) << endl;
//	cout << s << endl;
//
//	s.insert(5, "??");
//	cout << s << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main() {
//	string s = "Hello, World!";
//	s.replace(7, 5, "C++");
//	cout << s << endl;
//	cout << s << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main() {
//	string s = "apple";
//	cout << s.compare("apple") << endl;
//	cout << s.compare("banana") << endl;
//	cout << s.compare("aaa") << endl;
//	}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main() {
//	string s = "42";
//	int n = stoi(s);
//	double d = stod("3.14");
//	string t = to_string(n * 2);
//	cout << n << " " << d << " " << t << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void main() {
//	string s = "apple,banana,cherry";
//	string delim = ",";
//	size_t pos = 0;
//	while ((pos = s.find(delim))
//		!= string::npos) {
//		cout << s.substr(0, pos)<< " ";
//		s.erase(0, pos + delim.length());
//	}
//}

//#include<iostream>
//#include <string>
//using namespace std;
//
//void main() {
//	string s = "This is a sample string";
//	string k = "sample";
//	s.replace(s.find(k), k.length(), "useful");
//	cout << s << endl;
//}

#include <iostream>
#include <string>
using namespace std;
int main() {
	string s = "11";
	//cin >> s;
	
	int len = s.length();
	int sixt=1;
	int n = 0;
	for (int j = len - 1; j >= 0; j--) {
		sixt *= 16;
		for (int i = 0; i < len; i++) {
			n += (s[i] - '0') * sixt;

		}
	}


	//for (int i = 0; i < len ; i++) {
	//	for (int j = len - 1; j >= 0; j--){
	//		if (s[i] >= '0' && s[i] <= '9') {
	//			d[i] = s[i] * 16;
	//		}
	//	}
	//	//else if (s[i] >= 'A' && s[i] <= 'F') { d[i]+=s[i]*16 }
	//}
	cout << n << endl;//17
}




