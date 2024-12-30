#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ����ü ����
typedef struct Student {
    int id;              // �й�
    char name[50];       // �̸�
    float grade;         // ����
}Student;

// �Լ� ����
void printStudent(Student student);
Student createStudent(int id, const char* name, float grade);

int main() {
    // ����ü ���� ���� �� �ʱ�ȭ �Լ� ȣ��
    Student s1 = createStudent(1, "ȫ�浿", 4.2);
    Student s2 = createStudent(2, "��ö��", 3.8);

    // �л� ���� ���
    printf("�л� 1 ����:\n");
    printStudent(s1);

    printf("\n�л� 2 ����:\n");
    printStudent(s2);

    return 0;
}

// �л� ������ ����ϴ� �Լ�
void printStudent(Student student) {
    printf("�й�: %d\n", student.id);
    printf("�̸�: %s\n", student.name);
    printf("����: %.2f\n", student.grade);
}

// �л� ������ �����ϴ� �Լ�
Student createStudent(int id, const char* name, float grade) {
    Student newStudent;
    newStudent.id = id;
    strcpy(newStudent.name, name); // ���ڿ� ����
    newStudent.grade = grade;
    return newStudent;
}
