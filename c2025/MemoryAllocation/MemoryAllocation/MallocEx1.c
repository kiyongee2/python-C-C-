//#include <stdio.h>
//#include <stdlib.h> //malloc(), free()
//
//int main()
//{
//	//�迭 - ���� �Ҵ�(�޸� - ���� ����)
//	int n[4];
//
//	/*n[0] = 10;
//	n[1] = 20;*/
//
//	//�迭 - ���� �Ҵ�(�޸� - �� ����)
//	int* pn = (int *)malloc(sizeof(int) * 4);
//	int i;
//
//	if (pn == NULL)
//	{
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1); //���� ����
//	}
//
//	/*pn[0] = 10;
//	pn[1] = 20;
//	printf("%d %d\n", pn[0], pn[1]);*/
//
//	//2�� ����� ����
//	for (i = 0; i < 4; i++)
//	{
//		pn[i] = (i + 1) * 2;
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", pn[i]);
//	}
//
//	free(pn); //�޸� ����
//
//	return 0;
//}