//#include <stdio.h>
//
//int main() {
//
//    FILE* fp; // ���� ��� ("w")
//
//    if (fopen_s(&fp,"words.txt", "w") != 0) {
//        perror("���� ���⿡ �����߽��ϴ�!\n");
//        return 1;
//    }
//
//    // ���� �ܾ� ���
//    char* words[] = { "ant", "bear", "chicken", "cow", "dog", "elephant",
//            "monkey", "lion", "tiger", "horse", "snake" };
//    int wordCount = sizeof(words) / sizeof(words[0]);
//    //printf("wordCount = %d\n", wordCount);
//
//    for (int i = 0; i < wordCount; i++) {
//        fprintf(fp, "%s\n", words[i]); // �ܾ �� �پ� ����
//    }
//
//    fclose(fp);
//    printf("���� �ܾ ���Ͽ� �����߽��ϴ�.\n");
//
//    return 0;
//}
