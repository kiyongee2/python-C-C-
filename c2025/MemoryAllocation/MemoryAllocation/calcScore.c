#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* score = NULL;  //���� (���� �迭)
	int studentNum; //�л���

	while (1) {
		printf("------------------------------------------------------\n");
		printf("1.�л��� | 2.�����Է� | 3.��������Ʈ | 4.�м� | 5.����\n");
		printf("------------------------------------------------------\n");
		printf("����> ");

		int choice;  //�޴� ����
		int sum = 0; //�հ�
		float avg;   //���
		int max;     //�ְ�����

		scanf_s("%d", &choice); //�޴� �Է�
		switch (choice) {
		case 1:
			printf("�л���: ");
			scanf_s("%d", &studentNum);
			score = (int*)malloc(sizeof(int) * studentNum);
			break;
		case 2:
			for (int i = 0; i < studentNum; i++) {
				printf("score[%d]=", i);
				scanf_s("%d", &score[i]);
			}
			break;
		case 3:
			for (int i = 0; i < studentNum; i++) {
				printf("score[%d]=%d\n", i, score[i]);
			}
			break;
		case 4:
			max = score[0];
			for (int i = 0; i < studentNum; i++) {
				sum += score[i];  //�հ�
				if (score[i] > max)
					max = score[i]; //�ִ밪
			}
			avg = (float)sum / studentNum;
			printf("��� ����: %.2f\n", avg);
			printf("�ְ� ����: %d\n", max);
			break;
		case 5:
			printf("���α׷� ����!");
			return;
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���\n");
			break;
		}
	}
	free(score);

	return 0;
}