//#include <stdio.h>
//#include <stdlib.h> //malloc(), free()
//
//int main()
//{
//	/*//�迭 - ���� �Ҵ�(�޸� - ���� ����)
//	int n[5];
//
//	n[0] = 10;
//	n[1] = 20;*/
//
//	//�迭 - ���� �Ҵ�(�޸� - �� ����)
//	int* pn;
//	int i;
//
//	pn = (int *)malloc(sizeof(int) * 5);
//	if (pn == NULL)
//	{
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1); //���� ����
//	}
//
//	/*pn[0] = 2;
//	pn[1] = 4;
//	printf("%d %d\n", pn[0], pn[1]);*/
//
//	//2�� ��� ����
//	for (i = 0; i < 5; i++){
//		pn[i] = (i + 1) * 2;
//	}
//
//	for (i = 0; i < 5; i++){
//		printf("%d ", pn[i]); //2, 4, 6, 8, 10
//	}
//
//	free(pn); //�޸� ����
//
//	return 0;
//}