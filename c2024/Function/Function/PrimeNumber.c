//#include <stdio.h>
//
//int isPrimeNumber(int);
//
//int main()
//{
//	//�Ҽ�(1�� �ڽŸ����� ������ �������� ����) �Ǻ��ϱ� 
//	int n;
//
//	for (n = 2; n <= 30; n++)
//	{
//		if (isPrimeNumber(n))  //isPrimeNumber(n) == 1�̸� �Ҽ�
//		{
//			printf("%-3d", n);
//		}
//	}
//
//	return 0;
//}
//
//int isPrimeNumber(int n)
//{
//	int i, prime = 1;     //�Ҽ� ����(1�̸� �Ҽ���)
//
//	for (i = 2; i <= n - 1; i++)
//	{
//		//2 ~ n-1 ���� ������ ������ �������� �Ҽ��� �ƴ�
//		if (n % i == 0)
//		{
//			prime = 0;
//		}
//	}
//
//	return prime;
//}