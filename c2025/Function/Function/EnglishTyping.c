//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//int main(){
//    char* wordList[] = { "apple", "banana", "cherry", "grape", "orange",
//        "melon", "lemon", "peach", "strawberry", "kiwi" };
//    int wordCount = sizeof(wordList) / sizeof(wordList[0]);  // �ܾ� ����
//
//    char input[50];  // ����� �Է��� ������ �迭
//
//    srand(time(NULL));  // ���� �õ� ����
//
//    while (1) {
//        int randomIndex = rand() % wordCount;  // ���� �ܾ� ����
//        char* targetWord = wordList[randomIndex];
//
//        printf("\n���� �ܾ �Է��ϼ��� (exit �Է� �� ����): %s\n", targetWord);
//        scanf("%s", input);
//
//        if (strcmp(input, "exit") == 0) {  // 0 �Է� �� ����
//            printf("���α׷��� �����մϴ�.\n");
//            break;
//        }
//
//        if (strcmp(input, targetWord) == 0) {
//            printf("����!\n");
//        }
//        else {
//            printf("��Ÿ! �ٽ� �õ��ϼ���.\n");
//        }
//    }
//
//    return 0;
//}