//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////Person ����ü 
//typedef struct {
//    char name[20];  //�̸�
//    int age;        //����
//} Person;
//
//int main() {
//
//    FILE* fp; //���� ������
//    Person p1 = { "������", 26 }; //�ʱ�ȭ
//    Person p2;
//
//    // 1. ���� ���� ����
//    fp = fopen("person.txt", "w");
//    if (fp == NULL) {
//        printf("���� ���� ����!\n");
//        return 1;
//    }
//
//    fprintf(fp, "%s %d\n", p1.name, p1.age); // �ؽ�Ʈ �������� ����
//    fclose(fp);
//
//    // 2. �б� ���� ����
//    fp = fopen("person.txt", "r");
//    if (fp == NULL) {
//        printf("���� ���� ����!\n");
//        return 1;
//    }
//    fscanf(fp, "%s %d", p2.name, &p2.age); // �ؽ�Ʈ �������� �б�
//    fclose(fp);
//
//    printf("�̸�: %s, ����: %d\n", p2.name, p2.age);
//    return 0;
//}
