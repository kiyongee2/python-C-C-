//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//typedef struct {
//    char name[20];
//    int age;
//} Person;
//
//int main() {
//    FILE* fp;
//    Person p1 = { "������", 26 };
//    Person p2;
//
//    // 1. ���� ���� ���� (���̳ʸ�)
//    fp = fopen("person.dat", "wb");
//    if (fp == NULL) {
//        printf("���� ���� ����!\n");
//        return 1;
//    }
//
//    fwrite(&p1, sizeof(Person), 1, fp); // ����ü �״�� ����
//    fclose(fp);
//
//    // 2. �б� ���� ���� (���̳ʸ�)
//    fp = fopen("person.dat", "rb");
//    if (fp == NULL) {
//        printf("���� ���� ����!\n");
//        return 1;
//    }
//    fread(&p2, sizeof(Person), 1, fp); // ����ü �״�� �б�
//    fclose(fp);
//
//    printf("���� ������ �� �̸�: %s, ����: %d\n", p2.name, p2.age);
//    return 0;
//}
