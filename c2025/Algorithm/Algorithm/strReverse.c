#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
  - �������� �б�
    �迭�� ÷�� ����
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

	printf("%s�� �Ųٷ� ������ %s\n", a, b);

	return 0;
}