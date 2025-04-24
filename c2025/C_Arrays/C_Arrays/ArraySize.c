//#include <stdio.h>
//
//int main()
//{
//	/*//정수형 배열의 크기 및 출력
//	int num[] = { 1, 2, 3, 4 };
//
//	printf("배열 num의 메모리 크기: %dByte\n", sizeof(num));
//	printf("첫째 요소의 메모리 크기: %dByte\n", sizeof(num[0]));
//
//	//배열의 크기
//	int size = sizeof(num) / sizeof(num[0]);
//	printf("배열의 크기: %d\n", size);
//
//	//출력
//	for (int i = 0; i < size; i++) {
//		printf("%-2d", num[i]);
//	}
//	printf("\n=================================\n");*/
//
//	//문자형 배열의 크기 및 출력
//	char msg[] = "Good Luck";
//
//	printf("배열 msg의 메모리 크기: %dByte\n", sizeof(msg));
//	printf("첫째 요소의 메모리 크기: %dByte\n", sizeof(msg[0]));
//
//	//배열의 크기
//	int size = sizeof(msg) / sizeof(msg[0]);
//	printf("배열의 크기: %d\n", size);
//
//	//msg를 문자로 출력
//	for (int i = 0; i < size; i++) {
//		printf("%c", msg[i]);
//	}
//	printf("\n");
//
//	//msg를 문자열로 출력
//	printf("%s", msg);
//
//	return 0;
//}