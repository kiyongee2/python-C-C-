#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /* scanf() 
      ����(space) �Ǵ� ����(\n)�� ������ �Է��� ����.
      ���� ���Թ��ڸ� �Է¹��� �� ����
    */
    /*char name[20];
    printf("�̸��� �Է��ϼ���: ");
    scanf("%s", name);
    printf("�Էµ� �̸�: %s\n", name);*/

    /* fgets()
    * ������ ������ ���ڿ� �Է� ����
      ����(\n)���� �����Ͽ� �����
    */
    /*char message[30];
    printf("������ �Է��ϼ���: ");
    fgets(message, sizeof(message), stdin);
    printf("�Էµ� ����: %s", message);*/

    /*char paragraph[200];
    printf("���� ���� ������ �Է��ϼ��� :\n");
    while (fgets(paragraph, sizeof(paragraph), stdin) != NULL) {
        printf("�Էµ� ����: %s", paragraph);
    }*/

    char name[20];
    int age;

    printf("�̸��� �Է��ϼ���: ");
    scanf("%s", name);

    getchar();
    //while (getchar() != '\n');  // �Է� ���� ����

    printf("���̸� �Է��ϼ���: ");
    scanf("%d", &age);

    printf("�̸�: %s, ����: %d\n", name, age);

    return 0;
}