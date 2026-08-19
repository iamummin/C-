//#include <iostream>
//#include <string>
//using namespace std;
//
//struct GUN
//{
//	string name;
//	float bullet_type;
//	bool scope;
//};
//void main() 
//{
//	GUN M416 = { "M416", 5.56, true };
//	cout << "화기명 : " << M416.name << endl;
//	printf("탄 종류 : %.2f\n", M416.bullet_type);
//	cout << "스코프유무: " <<
//		(M416.scope ? "true" : "false") << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//struct HUMAN
//{
//	string name;
//	float height;
//	float weight;
//};
//void main()
//{
//	HUMAN s = { "엄민서", 160.7, 48.2};
//	printf("이름: %s\n", s.name.c_str());
//	printf("키: %.1f\n", s.height);
//	printf("몸무게: %.1f\n", s.weight);
//}

//#include <iostream>
//#include <string>
//using namespace std;
//struct BOOK 
//{
//	string book_title;
//};
//struct LIBRARY 
//{
//	BOOK s[3] = { "소년이 온다", "The Five People You Meet In Heaven", "C언어 For Beginner" };
//};
//void main() {
//	LIBRARY lib;
//	cout << lib.s[0].book_title << endl << lib.s[1].book_title << endl << lib.s[2].book_title << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//struct BOOK
//{
//	string book_title;
//};
//
//struct LIBRARY
//{
//	BOOK s[3] = { "소년이 온다", "The Five People You Meet In Heaven", "C언어 For Beginner" };
//};
//
//void DEF(LIBRARY lib, int n)
//{
//	if (n >= 1 && n <= 3)
//	{
//		cout << lib.s[n - 1].book_title << endl;
//	}
//}
//
//void main()
//{
//	LIBRARY lib;
//	int n;
//	cin >> n;
//	DEF(lib, n);
//}

//#include <iostream>
//using namespace std;
//void main() 
//{
//	short pt1;
//	cout << "입력>>";
//	cin >> pt1;
//	cout << "값 : " << pt1 << endl;
//}

//#include <iostream>
//using namespace std;
//
//short getDefaultData()
//{
//	short pt1;
//	cout << "입력>>";
//	cin >> pt1;
//	return pt1;
//}
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	cout << "값 : " << pt << endl;
//}

//#include <iostream>
//using namespace std;
//
//short getDefaultData();
//void printData(short pt2);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//}
//
//short getDefaultData()
//{
//	short pt1;
//	cout << "입력>>";
//	cin >> pt1;
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	cout << "값 : " << pt2 << endl;
//}


//#include <iostream>
//using namespace std;
//
//short getDefaultData();
//void printData(short pt2);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt += 5;
//	printData(pt);
//}
//
//short getDefaultData()
//{
//	short pt1;
//	cout << "입력>>";
//	cin >> pt1;
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	cout << "값 : " << pt2 << endl;
//}
//
//#include <iostream>
//using namespace std;
//
//short getDefaultData();
//void printData(short pt2);
//short add_five(short pt3);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt=add_five(pt);
//	printData(pt);
//}
//
//short getDefaultData()
//{
//	short pt1;
//	cout << "입력>>";
//	cin >> pt1;
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	cout << "값 : " << pt2 << endl;
//}
//short add_five(short pt3)
//{
//	pt3 += 5;
//	return pt3;
//}


#include <iostream>
using namespace std;

struct POINT { short x, y; };

POINT getDefaultData();
void printData(POINT pt2);
void add_five(POINT &pt3);

void main()
{
	POINT pt;
	pt=getDefaultData();

	printData(pt);
	add_five(pt);
	printData(pt);

}

POINT getDefaultData()
{
	POINT pt1;
	cout << "입력>>";
	cin >> pt1.x>>pt1.y;
	return pt1;
}

void printData(POINT pt2)
{
	cout << "값x : " << pt2.x << endl;
	cout << "값y : " << pt2.y << endl;
}
void add_five(POINT &pt3)
{
	pt3.x += 5;
	pt3.y += 5;
}