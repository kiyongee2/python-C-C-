#include <stdio.h>

int main_Loop(void)
{
	/*int a = 1;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);*/

	/*int b = 10;
	printf("b�� %d\n", ++b);
	printf("b�� %d\n", b++);
	printf("b�� %d\n", b);*/

	/*int i = 1;
	printf("%d\n", i++);
	printf("%d\n", i++);
	printf("%d\n", i++);
	printf("%d\n", i++);
	printf("%d\n", i++);*/

	// while��
	/*int i = 1;
	while (i <= 10) {
		printf("Hello %d\n", i);
		i++;
	}*/

	// do { } while(����)
	int i = 1;
	do {
		printf("Hello %d\n", i);
		i++;
	} while (i <= 10);

	//// for��
	//for (int i = 1; i <= 10; i++) {
	//	printf("Hello %d\n", i);
	//}

	// ������
	/*int dan = 4;
	for (int i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}*/

	// ���� for��
	/*for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	/*for (int i = 2; i <= 9; i++) {
		printf("%d��\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * i);
		}

	}*/

	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	/*for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}*/

	int floor;
	printf("�� �Է�: ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}