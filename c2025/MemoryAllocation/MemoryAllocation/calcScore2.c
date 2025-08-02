#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h> //true/false ���
#include <stdlib.h>

//���� ���� ����
bool run = true;  //���� ����
int studentNum, choice; //�л���, �޴� ����
int* score;   //���� (������)
int sum, max; //�հ�, �ְ�����
float avg;    //���

void getStudentNum() { //�л���
	if (score != NULL) {
		free(score);   //�޸� ����
		score = NULL;  //������ �ʱ�ȭ
	}

	printf("�л���: ");
	scanf("%d", &studentNum);
	score = (int*)malloc(sizeof(int) * studentNum); //���� ����
	if (score == NULL) {
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		return 1;
	}
}

void inputScore() { //���� �Է�
	if (score == NULL) {
		puts("�л����� ���� �Է��ϼ���.");
		return;
	}
	for (int i = 0; i < studentNum; i++) {
		printf("score[%d]=", i);
		scanf("%d", &score[i]);
	}
}

void getScoreList() { //���� ����Ʈ
	if (score == NULL) {
		puts("�л����� ���� �Է��ϼ���.");
		return;
	}
	for (int i = 0; i < studentNum; i++) {
		printf("score[%d]=%d\n", i, score[i]);
	}
}

void calculate() { //��� �м�
	if (score == NULL) {
		puts("�л����� ���� �Է��ϼ���.");
		return;
	}

	sum = 0; //�հ� �ʱ�ȭ
	max = score[0]; //�ִ밪 ����
	for (int i = 0; i < studentNum; i++) {
		sum += score[i];  //�հ�
		if (score[i] > max)
			max = score[i]; //�ִ밪
	}
	avg = (float)sum / studentNum;
	printf("��� ����: %.2f\n", avg);
	printf("�ְ� ����: %d\n", max);
}

int main()
{
	while (run) {
		printf("------------------------------------------------------\n");
		printf("1.�л��� | 2.�����Է� | 3.��������Ʈ | 4.�м� | 5.����\n");
		printf("------------------------------------------------------\n");
		printf("����> ");
		scanf("%d", &choice); //�޴� �Է�

		switch (choice) {
		case 1:
			getStudentNum();
			break;
		case 2:
			inputScore();
			break;
		case 3:
			getScoreList();
			break;
		case 4:
			calculate();
			break;
		case 5:
			printf("���α׷� ����!");
			run = false;
			break;
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���\n");
			break;
		}
	}

	return 0;
}