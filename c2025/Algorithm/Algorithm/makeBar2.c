//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
///*
//  - �迭�� ��ġ�� ���� �׷����� �׸��� ���α׷�
//	***
//	******
//	****
//	**
//*/
//int main()
//{
//	//���� �޸� �Ҵ�
//	int* arr = NULL; //������ ����
//	int size;  //�迭�� ũ��
//	int i, j;
//
//	printf("�迭�� ũ�� �Է�: ");
//	//scanf("%d", &size);
//	if (scanf("%d", &size) != 1 || size <= 0) {
//		printf("�ùٸ� ���� ������ �Է��ؾ� �մϴ�.\n");
//		return 1;
//	}
//
//	arr = (int*)malloc(sizeof(int) * size);
//	if (arr == NULL) {
//		puts("�޸� �Ҵ翡 �����߽��ϴ�.\n");
//		return 1;
//	}
//
//	//����� �Է�
//	/*for (i = 0; i < size; i++) {
//		printf("arr[%d] �Է�: ", i);
//		scanf("%d", &arr[i]);
//	}*/
//
//	// �� �Է� �� ��ȿ�� �˻�
//	for (i = 0; i < size; i++) {
//		while (true) {
//			printf("arr[%d] �� �Է� (0 �̻� ����): ", i);
//			if (scanf("%d", &arr[i]) != 1 || arr[i] < 0) {
//				printf("�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.\n");
//
//				// �Է� ���� ����
//				while (getchar() != '\n');
//			}
//			else {
//				break;
//			}
//		}
//	}
//
//	//���� �׷��� ���
//	for (i = 0; i < size; i++) {
//		printf("arr[%d]=%d|", i, arr[i]);
//		for (j = 1; j <= arr[i]; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	free(arr);
//
//	return 0;
//}