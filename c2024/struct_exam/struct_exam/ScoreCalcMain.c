//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////���� ����ü
//typedef struct
//{
//	int math;
//	int eng;
//}Score;
//
////�л� ����ü
//typedef struct
//{
//	int number;    //�й�
//	char name[20]; //�̸�
//	Score score;   //����
//}Student;
//
//void showStudentInfo(Student student);
//int main()
//{
//	Student s[3];
//	int i;
//	int total[2] = { 0, 0 };
//	double avg[2] = { 0.0, 0.0 };
//
//	printf("===== ���� ���� ���α׷� ===== \n");
//	//�Է�
//	for (i = 0; i < 3; i++)
//	{
//		printf("�й� �Է�: ");
//		scanf("%d", &s[i].number);
//
//		printf("%d��° �л��� �̸� �Է�: ", i+1);
//		scanf("%s", s[i].name);
//
//		printf("�������� �Է�: ");
//		scanf("%d", &s[i].score.math);
//
//		printf("�������� �Է�: ");
//		scanf("%d", &s[i].score.eng);
//	}
//
//	printf("======================================\n");
//	//���
//	printf("�й�\t�̸�\t ����\t����\n");
//	for (i = 0; i < 3; i++)
//	{
//		total[0] += s[i].score.math;   //���� �հ�
//		total[1] += s[i].score.eng;    //���� �հ�
//
//		showStudentInfo(s[i]); //�л� ���� ȣ��
//	}
//	//��� ���
//	avg[0] = (double)total[0] / 3;  //���� ���
//	avg[1] = (double)total[1] / 3;  //���� ���
// 	printf("======================================\n");
//
//	printf("���� ���: %.1f, ���� ���: %.1f\n", avg[0], avg[1]);
//
//	return 0;
//}
//
//void showStudentInfo(Student student)
//{
//	printf("%d\t%s\t%d\t%d\n", 
//		student.number, student.name, student.score.math, student.score.eng);
//}