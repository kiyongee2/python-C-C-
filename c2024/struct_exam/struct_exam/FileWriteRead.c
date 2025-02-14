//#include <stdio.h>
//#include <stdlib.h>
//
//void writeFile();
//void readFile();
//
//int main() {
//    writeFile();  // ���� ���� �Լ� ȣ��
//    readFile();   // ���� �б� �Լ� ȣ��
//    return 0;
//}
//
//// ���� ���� �Լ�
//void writeFile() {
//    FILE* file = fopen("data.txt", "w"); // ���� ���� ���� ����
//    if (file == NULL) {
//        printf("������ �� �� �����ϴ�.\n");
//        exit(1);
//    }
//
//    fprintf(file, "Hello, File I/O!\n"); // ���Ͽ� ���ڿ� ����
//    fprintf(file, "12345 67890\n");      // ���� ����
//    fprintf(file, "C��� ���� ����� ����\n");
//
//    fclose(file); // ���� �ݱ�
//    printf("���� ���� �Ϸ�!\n");
//}
//
//// ���� �б� �Լ�
//void readFile() {
//    FILE* file = fopen("data.txt", "r"); // �б� ���� ���� ����
//    if (file == NULL) {
//        printf("������ �� �� �����ϴ�.\n");
//        exit(1);
//    }
//
//    char buffer[100]; // �� �پ� ���� ����
//    printf("���� ���� ���:\n");
//    while (fgets(buffer, sizeof(buffer), file) != NULL) { // ���Ͽ��� �� �پ� �б�
//        printf("%s", buffer);
//    }
//
//    fclose(file); // ���� �ݱ�
//}
