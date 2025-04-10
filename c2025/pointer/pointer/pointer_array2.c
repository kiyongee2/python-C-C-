#include <stdio.h>

int main_PointerArray2() {

	// 문자열 배열 선언
	/*char str1[6] = { 'c', 'l', 'o', 'u', 'd', '\0' };
	char str2[] = "cloud";

	printf("%s\n", str1);
	printf("%s\n", str2);*/

	//문자열을 2차원 배열로 선언
	char fruits[][20] = {
		"apple", 
		"banana", 
		"orange"
	};
	// 배열 요소에 접근
	printf("%s\n", fruits[0]);
	printf("%s\n", fruits[1]);
	printf("%s\n", fruits[2]);

	// 문자열 포인터 배열 선언
	//char* fruits[3] = { "apple", "banana", "orange" };

	//// 배열 요소에 접근
	//printf("%s\n", fruits[0]);
	//printf("%s\n", fruits[1]);
	//printf("%s\n", fruits[2]);

	//printf("%s\n", *fruits);
	//printf("%s\n", *(fruits + 0));
	//printf("%s\n", *(fruits + 1));
	//printf("%s\n", *(fruits + 2));

	//int length = sizeof(fruits) / sizeof(fruits[0]);  //배열의 크기
	//printf("%d %d %d\n", sizeof(fruits), sizeof(fruits[0]), length);
	//for (int i = 0; i < length; i++) {
	//	printf("%s\n", fruits[i]);
	//	/*printf("%s\n", *(fruits + i));*/
	//}
		
	// 배열을 포인터로 참조하기
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

	// 배열의 각 요소에 2 더하기
	for (int i = 0; i < 10; i++) {
		*b += 2;  // *b = *b + 2;
		b++;
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}