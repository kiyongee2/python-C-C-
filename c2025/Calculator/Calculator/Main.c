#include <stdio.h>
//헤더파일 포함 - 쌍따옴표 사용
#include "Calculator.h" 

int main()
{
	int x = 3, y = 4, value1, value2;

	count++;  //count 1증가
	value1 = add(x, y);  //add() 호출
	value2 = factorial(y); //factorial() 호출

	printf("count = %d\n", count);
	printf("value1 = %d\n", value1);
	printf("%d! = %d\n", y, value2);
	printf("5! = %d\n", factorial(5));

	system("pause");  //exe 파일 실행시 프로세스 유지

	return 0;
}
