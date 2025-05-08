//#define _CRT_SECURE_NO_WARNINGS //strcpy() 처리
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char msg1[] = "Good Luck!";
//	char msg2[20];
//	int len;
//
//	//문자열의 개수
//	len = strlen(msg1);
//	printf("%d\n", len);
//
//	//문자열의 복사
//	//strcpy(msg2, msg1); //strcpy(복사본, 원본)
//	//sizeof(msg2) - 버퍼 오버플로우 방지
//	strcpy_s(msg2, sizeof(msg2), msg1);  
//	printf("%s\n", msg2);
//
//	//문자열의 비교
//	char greet1[] = "hello";
//	char greet2[] = "Hello";
//	int result;
//
//	//0 - 일치, 1 - 불일치
//	//대소문자 구분함
//	result = strcmp(greet1, greet2);
//	printf("%d\n", result);
//
//	if (result == 0)
//	{
//		puts("문자열이 일치합니다.");
//	}
//	else
//	{
//		puts("문자열이 일치하지 않습니다.");
//	}
//
//	return 0;
//}
