//#include <stdio.h>
//
//int main()
//{
//	int a[3][2] = { 
//		75, 80, 
//		85, 95, 
//		90, 100 
//	};
//
//	//Ư�� ��� �˻� 
//	printf("a[0][0] = %d\n", a[0][0]); //75
//	printf("a[1][1] = %d\n", a[1][1]); //95
//	printf("a[2][0] = %d\n", a[2][0]); //90
//	printf("\n");
//
//	//��ü ��� ���1
//	for (int x = 0; x < 3; x++)
//	{
//		printf("a[%d][0]=%d a[%d][1]=%d\n", x, a[x][0], x, a[x][1]);
//	}
//	printf("\n");
//
//	//��ü ��� ���2
//	for (int x = 0; x < 3; x++)
//	{
//		for (int y = 0; y < 2; y++)
//		{
//			printf("a[%d][%d]=%d ", x, y, a[x][y]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}