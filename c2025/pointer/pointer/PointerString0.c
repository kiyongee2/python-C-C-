//#include <stdio.h>
//
//int main()
//{
//	//문자열과 포인터
//	char msg[] = "Good Luck";
//	char* p = msg;  //&를 쓰지 않음
//	int i;
//
//	printf("%s\n", msg);
//
//	printf("문자열 배열의 크기: %d\n", sizeof(msg));
//	printf("문자형 포인터의 크기: %d\n", sizeof(p));
//
//	printf("문자열 배열이 가리키는 메모리 주소: %x\n", msg);
//	printf("문자형 포인터가 가리키는 메모리 주소: %x\n", p);
//
//	for (i = 0; msg[i] != NULL; i++) //문자열 배열 이름 사용
//	{
//		printf("%c", msg[i]);
//	}
//	printf("\n");
//
//	for (i = 0; p[i] != NULL; i++) //문자열 포인터 변수 사용
//	{
//		printf("%c", p[i]);
//	}
//	printf("\n");
//
//	for (i = 0; *(p + i) != NULL; i++)
//	{
//		printf("%c", *(p + i));
//	}
//	printf("\n");
//
//	return 0;
//}