#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c1, c2, c3;

	//scanf("%c", &c1);

	/*c1 = getchar();
	c2 = getchar();
	c3 = getchar();*/

	while (getchar() != '\n');
	
	printf("%c %c %c\n", c1, c2, c3);

	return 0;
}