//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//#include <string.h>
//
////Subject ����ü
//typedef struct {
//	char subjectName[20];  //�����
//	int scorePoint;        //����
//}Subject;
//
////���� ��� �Լ�
//void printInfo(Subject subject) {
//	printf("�����: %s, ����: %d\n",
//		subject.subjectName, subject.scorePoint);
//}
//
//int main()
//{
//	//����ü ���� ����, ����, ���� ����
//	Subject kor, math, eng;
//	int sum;
//	float avg;  
//
//	//���� �Է�
//	strcpy(kor.subjectName, "����");
//	kor.scorePoint = 92;
//
//	strcpy(math.subjectName, "����");
//	math.scorePoint = 82;
//
//	strcpy(eng.subjectName, "����");
//	eng.scorePoint = 86;
//
//	//��� ���
//	sum = kor.scorePoint + math.scorePoint + eng.scorePoint;
//	avg = (float)sum / 3;
//
//	//���� ���
//	printInfo(kor);
//	printInfo(math);
//	printInfo(eng);
//	printf("��� ����: %.1f\n", avg);
//
//	return 0;
//}
