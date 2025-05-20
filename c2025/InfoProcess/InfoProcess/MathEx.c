#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
	printf("%.2f\n", M_PI);

	int ans = pow(2, ceil(M_PI));
	printf("%d\n", ans);

	return 0;
}