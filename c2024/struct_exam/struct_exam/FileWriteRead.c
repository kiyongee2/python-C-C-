//#include <stdio.h>
//
//void writeFile();
//void readFile();
//int main() {
//
//    writeFile();  // ���� ���� �Լ� ȣ��
//
//    readFile();   // ���� �б� �Լ� ȣ��
//
//    return 0;
//}
//
//// ���� ���� �Լ�
//void writeFile() {
//
//    FILE* fp = fopen("data.txt", "w"); // ���� ���� ���� ����
//    int n = 100;
//
//    if (fp == NULL) {
//        printf("������ �� �� �����ϴ�.\n");
//        exit(1);
//    }
//
//    fprintf(fp, "Hello, File I/O!\n"); // ���Ͽ� ���ڿ� ����
//    fprintf(fp, "%d\n", n);      // ���� ����
//
//    fclose(fp); // ���� �ݱ�
//    printf("���� ���� �Ϸ�!\n");
//}
//
//// ���� �б� �Լ�
//void readFile() {
//    FILE* fp = fopen("data.txt", "r");
//    int ch; //���� ������(�ڵ尪) ����
//    char buffer[100]; // ���� ������ �迭
//
//    if (fp == NULL) {
//        printf("������ �� �� �����ϴ�.\n");
//        exit(1);
//    }
//
//    printf("===== ���� ���� ��� =====\n");
//    //���� 1���� �б�
//    /* while ((ch = fgetc(fp)) != EOF)
//    {
//        printf("%c", ch);
//    }*/
//    //�迭�� �б�
//    while (fgets(buffer, sizeof(buffer), fp) != NULL) { 
//        printf("%s", buffer);
//    }
//    fclose(fp); // ���� �ݱ�
//}
