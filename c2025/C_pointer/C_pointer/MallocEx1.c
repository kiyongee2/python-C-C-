//#include <stdio.h>
//#include <stdlib.h> //malloc(), free() �Լ�
//
//int main()
//{
//	//ũ�Ⱑ 5�� ������ �迭 ���� - ���� �Ҵ�
//	int n[5];
//
//	//ũ�Ⱑ 5�� ������ �迭 ���� - ���� �Ҵ�
//	int* pn = (int *)malloc(sizeof(int) * 5);
//	if (pn == NULL){
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1);
//	}
//
//	/*pn[0] = 2;
//	pn[1] = 4;*/
//
//	//2�� ��� ����
//	for (int i = 0; i < 5; i++){
//		pn[i] = (i + 1) * 2;
//	}
//
//	for (int i = 0; i < 5; i++){
//		printf("%d ", pn[i]); //2 4 6 8 10
//	}
//
//	free(pn); //�޸� �ݳ�
//
//	return 0;
//}
//
