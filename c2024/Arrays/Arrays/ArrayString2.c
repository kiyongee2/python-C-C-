#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//���ڿ��� 2���� �迭�� ����
	char fruits[][20] = {
		"apple",
		"banana",
		"orange"
	};

	printf("%x\n", fruits[0]);
	printf("%s\n", fruits[0]);
	printf("%s\n", fruits);

	// �迭 ��ҿ� ����
	/*printf("%s\n", fruits[0]);
	printf("%s\n", fruits[1]);
	printf("%s\n", fruits[2]);*/

	for (int i = 0; i < 3; i++) {
		printf("%s\n", fruits[i]);
	}

	return 0;
}