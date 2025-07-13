//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//#define MAX_WORDS 100
//#define MAX_LEN 100
//
//// ���� ���� ����
//char* stack[MAX_WORDS];
//int top = -1;
//
//// ���ڿ� �� �ܾ push
//void push(char* word) {
//    if (top >= MAX_WORDS - 1) {
//        printf("������ ���� á���ϴ�.\n");
//        return;
//    }
//    stack[++top] = _strdup(word);  // strdup: ���ڿ� ����
//}
//
//// �ܾ� pop
//char* pop() {
//    if (top < 0) {
//        return NULL;
//    }
//    return stack[top--];
//}
//
//int main() {
//    char str[MAX_LEN];
//    printf("���� �Է�: ");
//    fgets(str, MAX_LEN, stdin);
//
//    // �ٹٲ� ����
//    str[strcspn(str, "\n")] = '\0';
//
//    // �ܾ� �и�
//    char* token = strtok(str, " ");
//    while (token != NULL) {
//        push(token);
//        token = strtok(NULL, " ");
//    }
//
//    // ���ÿ��� pop�ϸ� �ܾ� ���� ������
//    printf("�ܾ� ���� ������: ");
//    while (top >= 0) {
//        printf("%s ", pop());
//    }
//    printf("\n");
//
//    return 0;
//}
