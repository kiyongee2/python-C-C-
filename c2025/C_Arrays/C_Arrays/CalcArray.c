#include <stdio.h>

int main()
{
	// 1부터 10까지 더하기
	int i, a[10];
	int total = 0;  //합계

	// 1 ~ 10 저장 및 계산
	for (i = 0; i < 10; i++)
	{
		a[i] = i + 1;
		total += a[i]; 
		printf("a[%d]=%d, total=%d\n", i, a[i], total);
	}
	printf("합계: %d\n", total);

	//홀수 저장 및 합계
	int oddTotal = 0;
	for (i = 0; i < 10; i = i + 2)
	{
		a[i] = i + 1;
		oddTotal += a[i];
		printf("a[%d]=%d, total=%d\n", i, a[i], oddTotal);
	}
	printf("홀수의 합계: %d\n", oddTotal);

	//짝수 저장 및 합계
	int evenTotal = 0;
	for (i = 0; i < 10; i += 2)
	{
		a[i] = i + 2;
		evenTotal += a[i];
		printf("a[%d]=%d, total=%d\n", i, a[i], evenTotal);
	}
	printf("짝수의 합계: %d\n", evenTotal);

	return 0;
}