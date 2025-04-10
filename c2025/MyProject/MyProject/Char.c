//#include <stdio.h>
//
//int main()
//{
//	//C언어는 아스키(Ascii) 코드 체계이므로 한글을 표현할 수
//	//없어서 배열로 표현해야 함
//	//char ch = '한';  //문자(2Byte)
//	char ch2[] = "한";  //문자(2Byte), 맨 뒤에 '\0' -널문자 포함
//	char str[] = "한글";  //문자열(5Byte)
//
//	//printf("%u\n", ch);
//	printf("%s %d\n", ch2, sizeof(ch2));
//	printf("%s %d\n", str, sizeof(str));
//
//	char c1, c2, c3, c4;
//
//	c1 = 'B';
//	c2 = c1 + 1;
//	c3 = c1 - 1;
//	c4 = c1 + ('a' - 'A');  //소문자로 변환
//
//	printf("%c\n", c1);
//	printf("%c\n", c2);
//	printf("%c\n", c3);
//	printf("%c\n", c4);
//
//	//int, char
//	int n = 321;  //110000001 -> 9비트
//	char c = 'A';
//
//	printf("%d\n", n);
//	printf("%c\n", n);  //'A' -> 65 앞의 1비트가 사라짐.
//
//	printf("%d\n", c);
//	printf("%c\n", c);
//
//	//unsigned
//	char cc = 128;  //부호 있는 문자형
//	unsigned char ccc = 128; //부호 없는 문자형
//
//	printf("%c\n", cc);
//	printf("%d\n", cc);
//
//	printf("%c\n", ccc); 
//	printf("%d\n", ccc); 
//
//
//	return 0;
//}