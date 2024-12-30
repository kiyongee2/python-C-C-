//#include <stdio.h>
//
//int main() {
//
//	/*// 문자열 배열 선언
//	char str1[6] = { 'c', 'l', 'o', 'u', 'd', '\0' };
//	char str2[] = "cloud";
//	int i;
//
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//
//	// 문자열 포인터 배열 선언
//	char* p[3] = { "apple", "banana", "orange" };
//
//	//printf("%s\n", p[0]);
//
//	for(i = 0; i < 3; i++)
//		printf("%s\n", p[i]);*/
//
//		// 배열을 포인터로 참조하기
//	int a[10];
//	int* b;
//	int i;
//
//	for (i = 0; i < 10; i++) {
//		a[i] = i + 1;
//		printf("%-2d", a[i]);
//	}
//	printf("\n");
//
//	b = a;   // b=&a[0]
//	/*for (i = 0; i < 10; i++) {
//		printf("%d ", b[i]);
//	}
//	printf("\n");*/
//
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(b + i));
//	}
//	printf("\n");
//
//	// 배열의 각 요소에 2 더하기
//	for (i = 0; i < 10; i++) {
//		*b += 2;
//		b++;
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//
//	return 0;
//}