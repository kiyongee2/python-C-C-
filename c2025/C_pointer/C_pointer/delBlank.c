//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void delBlank(char a[]);
//int main()
//{
//	char arr[] = "A B c D e F !";
//
//	delBlank(arr); //공백문자 제거 함수 호출
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//void delBlank(char a[]) {
//	  
//	char* str;  //포인터 선언(동적 할당)
//	int len;    //배열의 크기
//	int k = 0;
//
//	len = strlen(a);
//	str = (char*)malloc(sizeof(char) * len);
//	if (str == NULL) {
//		printf("동적 메모리 할당에 실패함\n");
//		exit(1);
//	}
//
//	//공백문자 제거후 저장
//	for (int i = 0; i < len; i++) {
//		if (a[i] != ' ')
//			str[k++] = a[i];
//	}
//	str[k] = '\0'; //문자열 맨 뒤에 널문자 포함
//
//	strcpy(a, str); //str을 배열 a에 복사
//	free(str);
//}
