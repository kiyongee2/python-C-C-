//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int len;
//	int* p;
//	int i, sum = 0;
//	float avg;
//	
//	printf("*** ������ ��� ��� ***\n");
//	printf("�Է��� ������ ����: ");
//	scanf("%d", &len);
//	
//	p = (int*)malloc(sizeof(int) * len); //���� �Ҵ�
//
//	//���� �Է�
//	for (i = 0; i < len; i++) {
//		printf("%d��° ����: ", i + 1);
//		scanf("%d", &p[i]);
//	}
//
//	//�հ� ���
//	for (i = 0; i < len; i++) {
//		sum += p[i];
//	}
//	//printf("%d\n", sum); //�հ�
//
//	//��� ���
//	avg = (float)sum / len;
//	printf("��� ����: %.1f\n", avg);
//
//	free(p);  //�޸� �ݳ�
//
//	return 0;
//}
