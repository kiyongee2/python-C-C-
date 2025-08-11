#include <stdio.h>

// �������� �������� ��ȯ�ϱ�

int memo[50] = { 0 }; // ��� ��� ����

int fibo(int n) {
	if (memo[n] != 0) 
		return memo[n]; // �̹� ��������� �ٷ� ��ȯ

	if (n <= 2) 
		return memo[n] = 1;   // ���� �� ��ȯ
	return memo[n] = fibo(n - 1) + fibo(n - 2);
}
	

/*
     n=4, fibo(4), fibo(2) + fibo(3) = 1 + 2 = 3
     n=3, fibo(3), fibo(1) + fibo(2) = 1 + 1 = 2
     n=2, fibo(2), 1
     n=2, fibo(1), 1
	 
*/

int main()
{
	/*
	printf("%d\n", fibo(1)); //1
	printf("%d\n", fibo(2)); //1
	printf("%d\n", fibo(3)); //2
	printf("%d\n", fibo(4)); //3
	*/
	
	//1�⵿�� �䳢�� ��ü�� ���
	for (int i = 1; i <= 12; i++) {
		printf("%d ", fibo(i));
	}
	
	return 0;
}






/*
int memo[50] = { 0 }; // ��� ��� ����

int fibo(int n) {
    if (memo[n] != 0) return memo[n]; // �̹� ��������� �ٷ� ��ȯ
    if (n <= 2) return memo[n] = 1;   // ���� �� ��ȯ
    return memo[n] = fibo(n - 1) + fibo(n - 2);
}
*/