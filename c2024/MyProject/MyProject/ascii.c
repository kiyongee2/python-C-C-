#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_ascii() {

	// �ƽ�Ű(ASCII) �ڵ� 
	// �̱� ANSI���� ǥ��ȭ�� ���� ��ȯ�� 7��Ʈ ��ȣü�� 
	// 7bit - 128��(0~127)
	/*printf("%c\n", 'A');
	printf("%d\n", 'A');

	printf("%c\n", 'B');
	printf("%d\n", 'B');

	printf("%c\n", '\0');
	printf("%d\n", '\0');

	printf("%c\n", '1');
	printf("%d\n", '1');*/

	for (int i = 0; i < 128; i++) {
		printf("�ƽ�Ű�ڵ� %d %c\n", i, i);
	}

	return 0;
}