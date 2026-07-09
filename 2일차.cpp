#include <stdio.h>
//#pragma warning(disable:4996)
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int A, B, C, D, E, F;
	A = a + b;
	B = a - b;
	C = a * b;
	D = a / b;
	E = a % b;
	printf("%d %d %d %d %d", A, B, C, D, E);
	return 0;
}