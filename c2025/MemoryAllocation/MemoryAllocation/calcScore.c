//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h> //true/false ���
//
//int main()
//{
//	bool run = true;   //���(����) ���� - ����/����
//	int studentNum, choice;  //�л���, �޴� ����
//	int* score = NULL;  //���� (���� �迭)
//	int sum, max;       //�հ�, �ְ�����
//	float avg;          //���
//
//	while (run) {
//		printf("------------------------------------------------------\n");
//		printf("1.�л��� | 2.�����Է� | 3.��������Ʈ | 4.�м� | 5.����\n");
//		printf("------------------------------------------------------\n");
//		printf("����> ");
//		scanf("%d", &choice); //�޴� �Է�
//
//		switch (choice) {
//		case 1:
//			printf("�л��� �Է�: ");
//			scanf("%d", &studentNum);
//			score = (int*)malloc(sizeof(int) * studentNum);
//			if (score == NULL) {
//				printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//				return 1;
//			}
//			break;
//		case 2:
//			for (int i = 0; i < studentNum; i++) { //���� �Է�
//				printf("score[%d]=", i);
//				scanf("%d", &score[i]);
//			}
//			break;
//		case 3:
//			for (int i = 0; i < studentNum; i++) { //���� ����Ʈ
//				printf("score[%d]=%d\n", i, score[i]);
//			}
//			break;
//		case 4:
//			sum = 0; //�հ� �ʱ�ȭ
//			max = score[0]; //�ִ밪 ����
//			for (int i = 0; i < studentNum; i++) {
//				sum += score[i];  //�հ�
//				if (score[i] > max)
//					max = score[i]; //�ִ밪
//			}
//			avg = (float)sum / studentNum;
//			printf("��� ����: %.1f\n", avg);
//			printf("�ְ� ����: %d\n", max);
//			break;
//		case 5:
//			printf("���α׷� ����!");
//			run = false;  //���� ����
//			break;
//		default:
//			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���\n");
//			break;
//		}
//	}
//	free(score); //�޸� �ݳ�
//
//	return 0;
//}