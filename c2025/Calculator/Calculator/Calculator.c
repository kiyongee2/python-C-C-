//함수 구현부 - Calculator.c
int add(int x, int y)
{
	int sum;
	sum = x + y;
	return sum;
}

int factorial(int n)
{
	int facto = 1;
	for (int i = 1; i <= n; i++)
		facto = facto * i; //facto *= i;
	/*
	  n = 4인 경우
	  i = 1, facto = 1 * 1
	  i = 2, facto = 1 * 2
	  i = 3, facto = 2 * 3
	  i = 4, facto = 6 * 4
	*/
	return facto;
}