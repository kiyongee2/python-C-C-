#define _CRT_SECURE_NO_WARNINGS 
#include "Student.h"

int main()
{
	Student students[SIZE]; //����ü �迭 ����
	int i, j;
	int subject_sum[3] = { 0, 0, 0 };  //����, ����, ���� ����
	double subject_avg[3]; //����, ����, ���� ��� 
	const char* subjects[3] = { "����", "����", "����" };

	//����� �Է�
	for (i = 0; i < SIZE; i++) {

		printf("�й� �Է�: ");
		scanf("%d", &students[i].number);

		printf("�̸� �Է�: ");
		scanf("%s", students[i].name);

		//���� ���� ������ �迭
		int* scores[3] = { &students[i].subject.kor,
			&students[i].subject.math,&students[i].subject.eng };

		for (j = 0; j < SIZE; j++) {
			printf("%s���� �Է�: ", subjects[j]);
			scanf("%d", scores[j]);
		}

		//���κ� ��� ���
		students[i].subject.avg = (float)(students[i].subject.kor +
			students[i].subject.math + students[i].subject.eng) / 3;
	}

	//���� ���� ���
	for (i = 0; i < SIZE; i++) {
		subject_sum[0] += students[i].subject.kor;  //���� ����
		subject_sum[1] += students[i].subject.math; //���� ���� 
		subject_sum[2] += students[i].subject.eng;  //���� ���� 
	}

	//���� ��� ���
	for (i = 0; i < SIZE; i++) {
		subject_avg[i] = (double)subject_sum[i] / SIZE;
	}

	//�л� ���� ���
	printf("\n================= �� �� ǥ =================\n");
	printf("�й�\t�̸�\t����\t����\t����\t���\n");
	for (i = 0; i < SIZE; i++) {
		printInfo(&students[i]);
	}

	printf("\n========== ���� ��� ���� ==========\n");
	for (i = 0; i < SIZE; i++) {
		printf("%s ���: %.1lf\n", subjects[i], subject_avg[i]);
	}

	return 0;
}