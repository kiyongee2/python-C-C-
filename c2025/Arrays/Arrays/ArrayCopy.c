//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	char a1[] = "NET";
//	char a2[4];
//
//	printf("%c\n", a1[0]);
//	printf("%c\n", a1[1]);
//	printf("%c\n", a1[3]); //NULL 문자
//	printf("%c\n", a1[2]);
//	
//	for (int i = 0; i < 4; i++) {
//		a2[i] = a1[i];
//	}
//	printf("%s\n", a2);
//	printf("==========\n");
//
//	//NET -> TEN으로 거꾸로 복사
//	for (int i = 0; i < 4; i++) {
//		a2[i] = a1[2-i];
//	}
//	a2[3] = '\0';
//	printf("%s\n", a2);
//
//	return 0;
//}