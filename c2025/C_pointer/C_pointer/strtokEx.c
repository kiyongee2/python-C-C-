#define _CRT_SECURE_NO_WARNINGS    // strtok ���� ��� - ������ ���� ����
#include <stdio.h>
#include <string.h>    // strtok �Լ��� ����� ��� ����
#include <stdlib.h>    // srand(), rand()
#include <time.h>

#define MAX_WORDS 10  //�ִ� �ܾ� ����
int main()
{
    char words[] = "ant bear chicken pig";
    char* wordList[MAX_WORDS]; // �и��� �ܾ� ����� �迭
    int idxOfWord = 0; // �迭�� �ε���

    // ù ��° �ܾ� �и�
    char* ptr = strtok(words, " ");
    printf("ù ��° �ܾ�: %s\n", ptr);   //���鹮�ڷ� �����Ͽ� ptr�� �ּ� ����

    ptr = strtok(NULL, " ");
    printf("�� ��° �ܾ�: %s\n", ptr); 

    while (ptr != NULL && idxOfWord < MAX_WORDS)
    {
        wordList[idxOfWord++] = ptr;
        //���鹮�ڸ� �����Ѽ� ���� ���� �ڸ���
        ptr = strtok(NULL, " ");  
    }
    //printf("%s\n", wordList[0]);  //ant

    //�����ϰ� �����ϱ�
    srand(time(NULL));

    int rndIdx = rand() % idxOfWord;
    printf("����: %s\n", wordList[rndIdx]); //����: pig

    return 0;
}
