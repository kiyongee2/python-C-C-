//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning (disable : 4996)
//
//int main() {
//	// ������ �迭 10�� ���� - ���� �Ҵ�
//	//int pn[10];
//
//	// ������ �迭 10�� ���� - ���� �Ҵ�
//	int* pn = (int *)malloc(sizeof(int) * 10);
//	int i;
//
//	for (i = 0; i < 10; i++)
//	{
//		pn[i] = i * 2;
//	}
//	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d %p\n", pn[i], pn[i]);
//	}
//
//	free(pn);  //�Ҵ�� �޸� ����(�ݳ�)
//
//	return 0;
//}
