 //#include <stdio.h>
//#include <string.h>
//
//int main() {
//    FILE* fp = fopen("words.txt", "w"); // ���� ��� ("w")
//
//    if (fp == NULL) {
//        printf("File opens failed!\n");
//        return 1;
//    }
//
//    // ���� �ܾ� ���
//    char* words[] = { "ant", "bear", "chicken", "cow", "dog", "elephant",
//            "monkey", "lion", "tiger", "horse", "snake" };
//    int wordCount = sizeof(words) / sizeof(words[0]);
//    printf("wordCount = %d\n", wordCount);
//
//    for (int i = 0; i < wordCount; i++) {
//        fprintf(fp, "%s\n", words[i]); // �� �ܾ ���Ͽ� ����
//    }
//
//    fclose(fp);
//    printf("���� �ܾ ���Ͽ� �����߽��ϴ�.\n");
//
//    return 0;
//}
