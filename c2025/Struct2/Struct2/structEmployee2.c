//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//
////��� ����ü ����
//typedef struct {
//	int id;
//	char name[20];
//	int salary;
//}Employee;
//
////��� ���� ���
//void printInfo(Employee e) {
//	printf("��� ID: %d, �̸�: %s, �޿�: %d\n",
//		e.id, e.name, e.salary);
//}
//
//int main()
//{
//	//����ü ���� ����
//	Employee emp1;
//
//	//�Է�
//	emp1.id = 1001;
//	strcpy(emp1.name, "�ڻ���");
//	emp1.salary = 3000000;
//
//	//���
//	printInfo(emp1);
//
//	//����ü �迭 ����
//	Employee employees[3] = {
//		{1001, "�ӽÿ�", 2500000},
//		{1002, "���", 2000000},
//		{1003, "������", 3000000}
//	};
//
//	printf("=============== ��� ��� ===============\n");
//	for (int i = 0; i < 3; i++) {
//		printInfo(employees[i]);
//	}
//
//	return 0;
//}
