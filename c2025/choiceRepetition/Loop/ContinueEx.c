//#include <stdio.h>
//
//int main()
//{
//	//1~10������ �ڿ��� �� 5�� 8�� �����ϰ� ����ϱ�
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i == 5 || i == 8)
//			continue;
//		printf("%d ", i);
//	}
//	printf("\n");
//
//	//1~10������ �ڿ��� �� ¦���� �� ���ϱ�
//	int n, sum;
//	for (n = 1, sum = 0; n <= 10; n++)
//	{
//		if (n % 2 == 1)
//			continue;
//		sum += n;
//		printf("%d ", n);
//	}
//	printf("\n1���� 10������ ¦���� ��: %d\n", sum);
//
//	//1~10������ �ڿ��� �� 4�� ����� ������ �հ� 
//	int i = 0, hap = 0;
//	while (1)
//	{
//		i++;
//		if (i > 10)
//			break;
//		if (i % 4 == 0)
//			continue;
//		hap += i;
//		printf("%d ", i);
//	}
//	printf("\n");
//	printf("I = %d\n", i);
//	printf("HAP = %d\n", hap);
//
//	return 0;
//}
