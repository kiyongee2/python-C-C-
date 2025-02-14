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

	//문자형 배열
	char ch = 'A';
	printf("%c\n", ch);

	//char word[4] = "moon";  //오류
	//char word[5] = "moon";
	//char word[] = "moon";
	char word[] = { 'm', 'o', 'o', 'n', '\0' };
	printf("%s\n", word);
	//printf("%d\n", sizeof(word));
	for (int i = 0; i < sizeof(word); i++) {
		//printf("%c\n", word[i]);
		printf("%d\n", word[i]);  //아스키 코드값
	}

	//영어 한글자 - 1Byte, 한글 한글자 - 2Byte
	char korea[] = "대한민국";
	printf("%s\n",  korea);
	printf("%d\n", sizeof(korea));

	//문자열 입력받기
	/*char name[20];
	printf("이름 입력: ");
	scanf("%s", name);
	printf("%s\n", name);*/

	return 0;
}