#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4

int main_Array() {

	//int arr[SIZE] = { 10, 20, 30, 40 };
	int arr[4] = { 10, 20 };

	for (int i = 0; i < 4; i++) {
		printf("%d\n", arr[i]);
	}

	float arr2[4] = { 10.0f, 20.0f };

	for (int i = 0; i < 4; i++) {
		printf("%.1f\n", arr2[i]);
	}

	//������ �迭
	char ch = 'A';
	printf("%c\n", ch);

	//char word[4] = "moon";  //����
	//char word[5] = "moon";
	//char word[] = "moon";
	char word[] = { 'm', 'o', 'o', 'n', '\0' };
	printf("%s\n", word);
	//printf("%d\n", sizeof(word));
	for (int i = 0; i < sizeof(word); i++) {
		//printf("%c\n", word[i]);
		printf("%d\n", word[i]);  //�ƽ�Ű �ڵ尪
	}

	//���� �ѱ��� - 1Byte, �ѱ� �ѱ��� - 2Byte
	char korea[] = "���ѹα�";
	printf("%s\n",  korea);
	printf("%d\n", sizeof(korea));

	//���ڿ� �Է¹ޱ�
	/*char name[20];
	printf("�̸� �Է�: ");
	scanf("%s", name);
	printf("%s\n", name);*/

	return 0;
}