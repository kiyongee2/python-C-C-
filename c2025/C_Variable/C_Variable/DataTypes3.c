#include <stdio.h>

int main()
{
	//숫자 표기 - 아스키 코드값
	char ch = '0';

	printf("%c %d\n", ch, ch);
	printf("%c %d\n", ch+1, ch+1);
	printf("%c %d\n", ch+2, ch+2);

	//한글은 배열로 저장
	char han[] = "가";
	char uniCode[] = "\uAC00";

	printf("%s\n", han);
	printf("%s\n", uniCode);

	//진수 표기 - 10진수, 2진수, 16진수
	int num = 10;
	int bNum = 0b1010;  //2진수는 접두어 0b를 붙임
	int hNum = 0xA;     //16진수는 접두어 0x를 붙임

	printf("%d\n", num);
	printf("%d\n", bNum);
	printf("%d\n", hNum);

	//음의 정수 표기
	//1의 보수 - 0을 1로, 1을 0으로 바꿈
	//2의 보수 - 1의 보수의 결과에 1을 더함
	int num1 = 0b00000000000000000000000000000101;  //5
	int num2 = 0b11111111111111111111111111111011;  //-5 

	printf("%d %d\n", num1, num2);

	return 0;
}