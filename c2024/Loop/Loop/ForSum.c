#include <stdio.h>

int main()
{
	int i = 0, sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum = sum + i;
	}

	printf("sum = %d\n", sum);

	return 0;
}