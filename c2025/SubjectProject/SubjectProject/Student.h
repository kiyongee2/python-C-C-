#ifndef STUDENT_H  //���Ǻ� ������ ��
#define STUDENT_H  //��ũ�� �̸� ����(����ü �ߺ� ���� ���� �뵵)

#include <stdio.h>
#define NAME_LEN 20  //�̸��� ũ��
#define SIZE 3       //��� ��

typedef struct {
	int kor;   //����
	int math;  //����
	int eng;   //����
	float avg;  //���
}Subject;

typedef struct {
	int number;      //�й�
	char name[NAME_LEN];   //�̸�
	Subject subject; //���� ����ü ����(����)
}Student;

void printInfo(Student* st);  //�л��� ���� ��� �Լ� ����
#endif 

