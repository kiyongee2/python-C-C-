#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_ascii() {

	// 아스키(ASCII) 코드 
	// 미국 ANSI에서 표준화한 정보 교환용 7비트 부호체계 
	// 7bit - 128개(0~127)
	/*printf("%c\n", 'A');
	printf("%d\n", 'A');

	printf("%c\n", 'B');
	printf("%d\n", 'B');

	printf("%c\n", '\0');
	printf("%d\n", '\0');

	printf("%c\n", '1');
	printf("%d\n", '1');*/

	for (int i = 0; i < 128; i++) {
		printf("아스키코드 %d %c\n", i, i);
	}

	return 0;
}