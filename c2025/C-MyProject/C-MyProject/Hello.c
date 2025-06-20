#include <stdio.h>

int main()
{
	//문자
	printf("Hello~ C!\n");
	printf("안녕~ C!\n");

	//숫자
	printf("%d\t", 10);  //정수
	printf("%f\n", 3.3); //실수

	//문자 - 서식 문자 사용
	printf("%c\t", 'A');  //한 문자 - 홑따옴표
	printf("%s\n", "Good Luck!"); //문자열 - 쌍따옴표

	//산술 연산
	printf("%d\n", 2 + 5);
	printf("%d\n", 2 - 5);
	printf("%d\n", 2 * 5);
	printf("%f\n", 2.0 / 5.0); //나누기는 실수

	return 0;
}

