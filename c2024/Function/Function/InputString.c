////#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//
//    /* scanf()
//      ����(space) �Ǵ� ����(\n)�� ������ �Է��� ����.
//      �Է� ���ۿ��� '\n'�� ��������.
//      ��, ���� ���Թ��ڸ� �Է¹��� �� ����
//    */
//    //char name[20];
//    //printf("�̸��� �Է��ϼ���: ");  //name - apple 
//    ////scanf_s("%s", name, sizeof(name));
//    ////gets(name);  //���� ������� ����
//    //fgets(name, sizeof(name), stdin);
//    //
//    ////printf("�Էµ� �̸�: %s\n", name);
//    //printf("�Էµ� �̸�:");
//    //puts(name);
//
//    /* fgets()
//    * ������ ������ ���ڿ� �Է� ����
//      ����(\n)���� �����Ͽ� �����
//    */
// 
//    /*char paragraph[200];
//    printf("���� ���� ������ �Է��ϼ��� :\n");
//    while (fgets(paragraph, sizeof(paragraph), stdin) != NULL) {
//        printf("�Էµ� ����: %s", paragraph);
//    }*/
//
//    //���1
//    char name[20];
//    int age;
//
//    printf("�̸��� �Է��ϼ���: ");
//    scanf_s("%s", name, sizeof(name));
//
//    //getchar()�� �� ���� ���ڸ� �о���� �Լ�.
//    while (getchar() != '\n') continue;  // �Է� ���� ����
//
//    printf("���̸� �Է��ϼ���: ");
//    scanf_s("%d", &age);
//
//    printf("�̸�: %s, ����: %d\n", name, age);
//
//    
//    return 0;
//}