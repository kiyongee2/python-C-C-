//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////Employee ����ü ����
//typedef struct {
//	int id;
//	char name[20];
//	int salary;
//}Employee;
//
////��� ���� ��� �Լ�
//void displayInfo(Employee* e, int len) {
//	for (int i = 0; i < len; i++) {
//		printf("��� ID: %d, �̸�: %s, �޿�: %d\n",
//			e[i].id, e[i].name, e[i].salary);
//	}
//}
//
//int main()
//{
//	//����ü �迭 ���� �Ҵ�
//	Employee* emp;
//	emp = (Employee*)malloc(sizeof(Employee) * 3);
//	if (emp == NULL) {
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1);
//	}
//
//	//emp 1�� ����
//	emp[0].id = 1001;
//	strcpy_s(emp[0].name, sizeof(emp[0].name), "�����");
//	emp[0].salary = 2000000;
//
//	//emp 2�� ����
//	emp[1].id = 1002;
//	strcpy_s(emp[1].name, sizeof(emp[1].name), "�ڴ븮");
//	emp[1].salary = 3000000;
//
//	//emp 3�� ����
//	emp[2].id = 1003;
//	strcpy_s(emp[2].name, sizeof(emp[2].name), "�Ѱ���");
//	emp[2].salary = 4000000;
//	
//	displayInfo(emp, 3); //displayInfo() ȣ��
//
//	free(emp); //�޸� ����
//	return 0;
//}
