#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
  - 역순으로 읽기
    배열의 첨자 주의
*/
int main()
{
	int i, n;
	char a[] = "DOG";
	char b[10];

	n = strlen(a);

	for (i = n - 1; i >= 0; i--) {
		b[n - 1 - i] = a[i];
	}
	b[n] = '\0';

	printf("%s를 거꾸로 읽으면 %s\n", a, b);

	return 0;
}