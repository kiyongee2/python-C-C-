//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
///*
//  - 두 개의 문자열을 연결하여 하나의 문자열로 만들기
//    a 배열은 충분히 커야 합니다. 
//	"smart"(5자) + "phone"(5자) + '\0' = 총 11바이트가 필요
//*/
//int main()
//{
//	int i = 0, j = 0;
//	char a[12] = "smart";  //충분한 크기 확보
//	char b[] = "phone";
//
//	printf("%s+%s=", a, b);
//	while (a[i] != '\0')
//		i++;
//	//printf("\ni=%d\n", i); //5
//
//	while (b[j] != '\0') {
//		a[i] = b[j];
//		i++;
//		j++;
//	}
//	a[i] = '\0';
//	printf("%s\n", a);
//
//	/*
//	   i=5, a[5]=b[0], smartp
//	   i=6, a[6]=b[1], smartph
//	   i=7, a[7]=b[2], smartpho
//	   i=8, a[8]=b[3], smartphon
//	   i=9, a[9]=b[4], smartphone
//	   i=10, a[10] = '\0'
//	*/
//
//	/*
//	  strcart() 함수
//	  문자열 끝('\0')을 찾아 자동으로 뒤에 붙여주며, 
//	  복사 후 마지막에 '\0'도 추가합니다.
//	*/
//	char str1[20] = "smart";  //충분한 크기 확보
//	char str2[] = "phone";
//
//	strcat(str1, str2);
//	printf("%s\n", str1);
//
//	return 0;
//}