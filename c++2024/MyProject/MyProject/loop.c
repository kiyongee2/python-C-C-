#include <stdio.h>

int main(void)
{
	/*int a = 1;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);*/

	/*int b = 10;
	printf("b는 %d\n", ++b);
	printf("b는 %d\n", b++);
	printf("b는 %d\n", b);*/

	/*int i = 1;
	printf("%d\n", i++);
	printf("%d\n", i++);
	printf("%d\n", i++);
	printf("%d\n", i++);
	printf("%d\n", i++);*/

	// while문
	/*int i = 1;
	while (i <= 10) {
		printf("Hello %d\n", i);
		i++;
	}*/

	// do { } while(조건)
	int i = 1;
	do {
		printf("Hello %d\n", i);
		i++;
	} while (i <= 10);

	//// for문
	//for (int i = 1; i <= 10; i++) {
	//	printf("Hello %d\n", i);
	//}

	// 구구단
	int dan = 4;
	for (int i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}

	// 이중 for문
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 4; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}