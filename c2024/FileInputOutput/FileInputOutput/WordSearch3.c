//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    FILE* fp;
//    char line[256]; // �� ���� ������ ����
//    char target[100]; // �˻��� �ܾ ������ ����
//
//    // ���� ����
//    fp = fopen("word.txt", "r");
//    if (fp == NULL) {
//        printf("���� ���⿡ ������\n");
//        return 1;
//    }
//
//    // �ݺ������� �ܾ� �˻�
//    while (1) {
//        int found = 0; // �ܾ ã�Ҵ��� ���θ� ��Ÿ���� �÷���
//
//        // ����ڷκ��� �˻��� �ܾ� �Է� �ޱ�
//        printf("�˻��� �ܾ �Է��ϼ��� (�����Ϸ��� 'exit' �Է�): ");
//        scanf("%s", target);
//
//        // 'exit' �Է� �� ���α׷� ����
//        if (strcmp(target, "exit") == 0) {
//            printf("���α׷��� �����մϴ�.\n");
//            break;
//        }
//
//        // ���� �����͸� ó������ �̵�
//        //rewind(fp);
//
//        // ������ �� �پ� �����鼭 �˻�
//        while (fgets(line, sizeof(line), fp)) {
//            // �� �ٲ� ���� ����
//            line[strcspn(line, "\n")] = '\0';
//
//            // ���� ���� �ܾ�� �˻��� �ܾ ��Ȯ�� ��ġ�ϴ��� Ȯ��
//            if (strcmp(line, target) == 0) {
//                printf("�ܾ ã�ҽ��ϴ�: %s\n", line);
//                found = 1; // �ܾ ã������ ǥ��
//                break; // �ܾ ã�����Ƿ� �ݺ��� ����
//            }
//        }
//
//        // �ܾ ã�� ���� ���
//        if (!found) {
//            printf("'%s'�� ã�� �� �����ϴ�.\n", target);
//        }
//    }
//
//    // ���� �ݱ�
//    fclose(fp);
//
//    return 0;
//}