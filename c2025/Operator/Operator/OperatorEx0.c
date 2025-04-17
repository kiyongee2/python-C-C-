#include <stdio.h>

int main()
{
	int a = 99;
	int b = 2;

	printf("a + b의 결과: %d\n", a + b);
	printf("a - b의 결과: %d\n", a - b);
	printf("a * b의 결과: %d\n", a * b);
	printf("a / b의 결과: %.1lf\n", (double)a / b);  //나누기
	printf("a / b의 결과: %d\n", a / b);  //몫
	printf("a %% b의 결과: %d\n", a % b); //나머지

	printf("a++의 값은: %d\n", a++);  //99
	printf("a의 값은: %d\n", a);  //100

	printf("++a의 값은: %d\n", ++a); //101
	printf("a의 값은: %d\n", a); //101

	printf("a--의 값은: %d\n", a--);  //101
	printf("a의 값은: %d\n", a);  //100

	printf("--a의 값은: %d\n", --a); //99
	printf("a의 값은: %d\n", a); //99

	return 0;
}
