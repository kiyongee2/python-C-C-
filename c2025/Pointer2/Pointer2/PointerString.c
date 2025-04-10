//#include <stdio.h>
//
//int main()
//{
//	//문자열과 포인터
//	char msg[] = "Good Luck";
//	char* p = msg;
//	int i;
//
//	printf("%s\n", msg);
//
//	printf("문자열의 크기: %dByte\n", sizeof(msg));
//	printf("문자열 포인터의 크기: %dByte\n", sizeof(p));
//
//	printf("문자열 배열이 가리키는 메모리 번지: %x\n", msg);
//	printf("문자열 포인터가 가리키는 메모리 번지: %x\n", p);
//
//	printf("%s\n", p);
//	printf("%s\n", p + 1);  //다음 문자 출력
//	printf("%s\n", p + 2);
//	printf("%s\n", p + 3);
//
//	printf("======================\n");
//
//	//문자열의 크기
//	printf("%d %d\n", sizeof(msg), sizeof(msg[0]));
//	int size = sizeof(msg) / sizeof(msg[0]);
//	printf("%d\n", size);
//
//	// 포인터 역참조 출력
//	printf("%c\n", *p);  //*(p + 0)
//	printf("%c\n", *(p + 1));
//	printf("%c\n", *(p + 2));
//	printf("%c\n", *(p + 3));
//
//	for (i = 0; i < size; i++)
//	{
//		printf("%c", *(p + i));
//	}
//
//	printf("\n\n");
//
//	return 0;
//}