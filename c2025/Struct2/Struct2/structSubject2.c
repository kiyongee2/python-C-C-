//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 3       //����ü �迭�� ũ��
//#define NAME_LEN 20  //�̸��� ũ��
//
//typedef struct {
//	char subjectName[20];  //�����
//	int scorePoint;        //����
//}Subject;
//
//void printInfo(Subject subject) {
//		printf("�����: %s, ����: %d\n",
//			subject.subjectName, subject.scorePoint);
//}
//
//int main()
//{
//	//����ü �迭 ����
//	Subject subjects[SIZE] = {
//		{"����", 92},
//		{"����", 82},
//		{"����", 86}
//	};
//	int i, sum = 0;
//	float avg;
//
//	//����ü �迭 �˻�(1�� ��ġ)
//	printf("%s, %d\n", subjects[1].subjectName, 
//				subjects[1].scorePoint);
//	printf("-----------------------------\n");
//
//	//��� ���
//	for (int i = 0; i < SIZE; i++) {
//		sum += subjects[i].scorePoint;
//	}
//	avg = (float)sum / SIZE;
//
//	//���� ���
//	for (i = 0; i < SIZE; i++) {
//		printInfo(subjects[i]);
//	}
//	printf("��� ����: %.1f\n", avg);
//
//	return 0;
//}