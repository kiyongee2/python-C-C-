//#include <stdio.h>
//#include <stdlib.h> //malloc(), free()
//
//int main()
//{
//	//�迭 - ���� �Ҵ�(�޸� - �� ����)
//	int* ip = (int*)malloc(sizeof(int) * 4);
//	int i;
//
//	if (ip == NULL)
//	{
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1); //���� ����
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		ip[i] = (i + 1) * 10;
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", ip[i]);
//	}
//	printf("\n");
//
//	//�������� ���
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(ip + i));
//	}
//	printf("\n");
//
//	//�� ����
//	*ip = 50;
//	*(ip + 1) = 60;
//	*(ip + 2) = 70;
//	*(ip + 3) = 80;
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d %d\n", ip[i], *(ip + i));
//	}
//	
//	free(ip); //�޸� ����
//
//	return 0;
//}