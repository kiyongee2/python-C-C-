//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//bool run = true;  //���� ����
//int* score;  //���� (������)
//int studentNum, choice; //�л���, �޴� ����
//int sum, max; //�հ�, �ְ�����
//float avg;   //���
//
////�л���
//void getStudentNum() {
//	if (score != NULL) {
//		free(score); //�޸� ����
//		score = NULL;
//	}
//
//	printf("�л���: ");
//	scanf("%d", &studentNum);
//	score = (int*)malloc(sizeof(int) * studentNum); //���� ����
//}
//
////���� �Է�
//void inputScore() {
//	if (score == NULL) {
//		puts("�л����� ���� �Է��ϼ���.");
//		return;
//	}
//	for (int i = 0; i < studentNum; i++) {
//		printf("score[%d]=", i);
//		scanf("%d", &score[i]);
//	}
//}
//
////���� ����Ʈ
//void getScoreList() {
//	if (score == NULL) {
//		puts("�л����� ���� �Է��ϼ���.");
//		return;
//	}
//	for (int i = 0; i < studentNum; i++) {
//		printf("score[%d]=%d\n", i, score[i]);
//	}
//}
//
////�м�
//void calculate() {
//	if (score == NULL) {
//		puts("�л����� ���� �Է��ϼ���.");
//		return;
//	}
//
//	sum = 0; //�հ� �ʱ�ȭ
//	max = score[0]; //�ִ밪 ����
//	for (int i = 0; i < studentNum; i++) {
//		sum += score[i];  //�հ�
//		if (score[i] > max)
//			max = score[i]; //�ִ밪
//	}
//	avg = (float)sum / studentNum;
//	printf("��� ����: %.2f\n", avg);
//	printf("�ְ� ����: %d\n", max);
//}
//
//int main()
//{
//	while (run) {
//		printf("------------------------------------------------------\n");
//		printf("1.�л��� | 2.�����Է� | 3.��������Ʈ | 4.�м� | 5.����\n");
//		printf("------------------------------------------------------\n");
//		printf("����> ");
//
//		scanf_s("%d", &choice); //�޴� �Է�
//		switch (choice) {
//		case 1:
//			getStudentNum();
//			break;
//		case 2:
//			inputScore();
//			break;
//		case 3:
//			getScoreList();
//			break;
//		case 4:
//			calculate();
//			break;
//		case 5:
//			printf("���α׷� ����!");
//			run = false;
//			break;
//		default:
//			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���\n");
//			break;
//		}
//	}
//
//	return 0;
//}