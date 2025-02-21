#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//while문은 n을 초기화하지 않으면 오류 발생함.
	//do~while문은 n을 초기화 하지 않아도 됨.
	int n;

	/*do{
		printf("정수 입력 >>");
		scanf("%d", &n);
		printf("입력된 정수는 %d입니다\n", n);
	} while (n != 0);*/

	//break문 사용 - 무한반복(1-true, 0-false)

	do {
		printf("정수 입력 >>");
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		printf("입력된 정수는 %d입니다\n", n);
	} while (1);

	return 0;
}