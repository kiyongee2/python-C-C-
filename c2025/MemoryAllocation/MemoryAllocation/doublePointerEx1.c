//#include <stdio.h>
//#include <stdlib.h> //malloc(), free()
//
//int main()
//{
//	int** pp;  //���� ������ ����
//	int i, j;
//	int k = 0;
//
//	pp = (int **)malloc(sizeof(int*) * 2); //16byte
//	if (pp == NULL){
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1); 
//	}
//
//	//���� �Ҵ�
//	for (i = 0; i < 2; i++){
//		pp[i] = (int*)malloc(sizeof(int) * 2);
//		if (pp[i] == NULL){
//			printf("�� %d�� �޸� �Ҵ� ����\n", i);
//			exit(1);
//		}
//	}
//
//	//�� ����
//	for (i = 0; i < 2; i++){
//		for (j = 0; j < 2; j++){
//			k++;
//			pp[i][j] = k;
//		}
//	}
//
//	for (i = 0; i < 2; i++){
//		for (j = 0; j < 2; j++){
//			printf("%d ", pp[i][j]);
//		}
//		printf("\n");
//	}
//
//	//�޸� ����
//	for (i = 0; i < 2; i++){
//		free(pp[i]); 
//	}
//	free(pp);
//
//	return 0;
//}