//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//
//	char str[] = "Hello";
//	int num[] = { 1, 2, 3, 4 };
//
//	printf("문자 배열에 할당된 메모리의 크기 : %d바이트\n", sizeof(str));
//	printf("문자 배열에 할당된 메모리의 크기 : %d바이트\n", sizeof(num));
//
//	//첫번째 요소 출력
//	printf("%c\n", str[0]);  //H
//	printf("%d\n", num[0]);  //H
//
//	//배열의 크기
//	int size1 = sizeof(str) / sizeof(str[0]);  // 6 / 1 = 6
//	int size2 = sizeof(str) / sizeof(num[0]);  // 16 / 4 = 4
//
//	//'\0' NULL문자는 문자열(배열)의 끝을 의미함(필수)
//	//char msg1[9] = "Thank you"; 
//	char msg2[9] = { 'T', 'h', 'a', 'n', 'k', ' ', 'y', 'o', 'u'};
//	char msg3[] = { 'T', 'h', 'a', 'n', 'k', ' ', 'y', 'o', 'u' ,'\0'};
//
//	//printf("%s\n", msg1);
//	printf("%s\n", msg2);
//	printf("%s\n", msg3);
//
//	return 0;
//}