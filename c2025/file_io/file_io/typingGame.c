#define _CRT_SECURE_NO_WARNINGS //strtok()
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_WORDS 10    //�ܾ��� ����
#define MAX_LENGTH 20   //�ܾ��� ����
int main()
{
    //���� ����� - �б�
    FILE* fp; 
    char words[256];
    
    fp = fopen("word.txt", "r"); 
    if (fp == NULL) {
    	printf("���� ���⿡ ������\n");
    	return 1;  
    }

    //���ڿ� ��������
    while (fgets(words, sizeof(words), fp) != NULL) {
	    //printf("%s", words);
	}

    // 1. �ܾ� �и� �� ����
    char* wordList[MAX_WORDS]; // �и��� �ܾ� ����� �迭
    int idxOfWords = 0;

    char* ptr = strtok(words, " "); //������ ���б�ȣ�� ���ڿ� �ڸ���
    while (ptr != NULL && idxOfWords < MAX_WORDS) {
        wordList[idxOfWords++] = ptr;
        ptr = strtok(NULL, " ");
    }

    // 2. Ÿ�� ���� �غ�
    char* question;
    char* answer = (char*)malloc(MAX_LENGTH * sizeof(char));
    int n = 1;
    clock_t start, end;
    double elapsedTime;

    srand(time(NULL));

    printf("���� Ÿ�� ����, �غ�Ǹ� ����> ");
    getchar();
    start = clock();

    while (n <= 10) {
        printf("\n���� %d\n", n);
        int rndIdx = rand() % idxOfWords; //���� �ܾ� ���� ���
        question = wordList[rndIdx];  //������ �ܾ� ����
        printf("%s\n", question); //���� ����

        scanf("%s", answer);  //����� �Է�
        if (strcmp(question, answer) == 0) {
            printf("���!\n");
            n++;
        }
        else {
            printf("��Ÿ! �ٽ� ����!\n");
        }
    }
    end = clock();
    elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("���� �ҿ� �ð�: %.2f��\n", elapsedTime);

    free(answer); // �޸� ����
    return 0;
}