#include <stdio.h>

int main_PointerArray2() {

	// ���ڿ� �迭 ����
	/*char str1[6] = { 'c', 'l', 'o', 'u', 'd', '\0' };
	char str2[] = "cloud";

	printf("%s\n", str1);
	printf("%s\n", str2);*/

	//���ڿ��� 2���� �迭�� ����
	char fruits[][20] = {
		"apple", 
		"banana", 
		"orange"
	};
	// �迭 ��ҿ� ����
	printf("%s\n", fruits[0]);
	printf("%s\n", fruits[1]);
	printf("%s\n", fruits[2]);

	// ���ڿ� ������ �迭 ����
	//char* fruits[3] = { "apple", "banana", "orange" };

	//// �迭 ��ҿ� ����
	//printf("%s\n", fruits[0]);
	//printf("%s\n", fruits[1]);
	//printf("%s\n", fruits[2]);

	//printf("%s\n", *fruits);
	//printf("%s\n", *(fruits + 0));
	//printf("%s\n", *(fruits + 1));
	//printf("%s\n", *(fruits + 2));

	//int length = sizeof(fruits) / sizeof(fruits[0]);  //�迭�� ũ��
	//printf("%d %d %d\n", sizeof(fruits), sizeof(fruits[0]), length);
	//for (int i = 0; i < length; i++) {
	//	printf("%s\n", fruits[i]);
	//	/*printf("%s\n", *(fruits + i));*/
	//}
		
	// �迭�� �����ͷ� �����ϱ�
	int a[10];
	int* b;

	for (int i = 0; i < 10; i++) {
		a[i] = i + 1;
		printf("%-2d", a[i]);
	}
	printf("\n");

	b = a;   // b=&a[0]
	/*for (i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");*/

	for (int i = 0; i < 10; i++) {
		printf("%d ", *(b + i));
	}
	printf("\n");

	// �迭�� �� ��ҿ� 2 ���ϱ�
	for (int i = 0; i < 10; i++) {
		*b += 2;  // *b = *b + 2;
		b++;
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}