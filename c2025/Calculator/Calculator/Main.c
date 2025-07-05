#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//헤더파일 포함 - 쌍따옴표 사용
#include "Calculator.h" 

int main()
{
	int num1, num2;

	printf("===== Simple Calculator =====\n\n");
	printf("1부터 몇 까지 더할까요? ");
	scanf("%d", &num1);
	printf("1부터 %d까지 더한 값은 %d입니다.\n", num1, calcSum(num1));

	printf("---------------------------------------\n");

	printf("1부터 몇 까지 곱할까요? ");
	scanf("%d", &num2);
	printf("1부터 %d까지 곱한 값은 %d입니다.\n", num2, calcGob(num2));

	system("pause");  //exe 파일 실행시 프로세스 유지

	return 0;
}
