#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    char* wordList[] = { "apple", "banana", "cherry", "grape", "orange",
        "melon", "lemon", "peach", "strawberry", "kiwi" };
    char* question;   // ���õ� �ܾ�
    char answer[50];  // ����� �Է��� ������ �迭
    int wordCount;    // �ܾ� ����
        
    wordCount = sizeof(wordList) / sizeof(wordList[0]);  
    srand(time(NULL));  // ���� �õ� ����

    while (1) {
        int rndIdx = rand() % wordCount;  // ���� �ܾ� ����
        question = wordList[rndIdx];

        printf("\n�ܾ� �Է� (exit ����): %s\n", question);
        scanf_s("%s", answer, sizeof(answer));

        if (strcmp(answer, "exit") == 0) {  // 0 �Է� �� ����
            printf("���α׷��� �����մϴ�.\n");
            break;
        }

        if (strcmp(question, answer) == 0) {
            printf("����!\n");
        }
        else {
            printf("��Ÿ! �ٽ� �õ��ϼ���.\n");
        }
    }

    return 0;
}