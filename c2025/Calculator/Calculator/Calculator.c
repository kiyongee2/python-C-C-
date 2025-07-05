//함수 구현부 - Calculator.c

int calcSum(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++){
		sum += i; //sum = sum + i
	}
	return sum;
}

int calcGob(int n)
{
	int gob = 1;
	for (int i = 1; i <= n; i++){
		gob *= i; //gob = gob * i
	}
	return gob;
}

