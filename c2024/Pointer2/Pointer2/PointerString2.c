//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_WORDS 11
//#define MAX_LENGTH 20
//
//int main() {
//    // char* Ÿ���� ������ �迭 ���� �Ҵ�
//    char** words = (char**)malloc(MAX_WORDS * sizeof(char*));
//
//    // �� �����Ϳ� ���ڿ� ������ ���� �޸� �Ҵ�
//    for (int i = 0; i < MAX_WORDS; i++) {
//        words[i] = (char*)malloc(MAX_LENGTH * sizeof(char));
//    }
//
//    // ����: �ܾ� ����
//    strcpy(words[0], "ant");
//    strcpy(words[1], "bear");
//
//    // ���
//    printf("%s\n", words[0]);  // "ant"
//    printf("%s\n", words[1]);  // "bear"
//
//    // �޸� ����
//    for (int i = 0; i < MAX_WORDS; i++) {
//        free(words[i]);
//    }
//    free(words);
//
//    return 0;
//}