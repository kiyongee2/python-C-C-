#define _CRT_SECURE_NO_WARNINGS //strtok() ���� ���
#include <stdio.h>
#include <string.h> //strtok() ���
#include <stdlib.h> //srand(), rand() ���
#include <time.h> //time() ���

#define MAX_WORDS 10  //�ִ� �ܾ� ����

int main()
{
	char words[] = "I am a student";
	char* wordList[MAX_WORDS]; //�и��� �ܾ ������ �迭
	int idxOfWords = 0; //�迭�� �ε���

	//ù° �ܾ� �и�
	//���鹮�ڷ� �����Ͽ� ptr �����Ϳ� ����
	char* ptr = strtok(words, " ");
	printf("%s\n", ptr); //I

	/*
	  �ι�° �ܾ� �и� - I am a student
	  NULL�� �ִ� ���� - ���� ȣ�⿡�� ������ ��ġ���� ��� ��ū�� �ڸ��� ����
	  ���ڿ��� ���� '\0'(�ι���) ����*/
	/*ptr = strtok(NULL, " ");
	printf("%s\n", ptr); //am */
	printf("--------------------------\n");

	//��ü �ܾ� �и�
	while (ptr != NULL && idxOfWords < MAX_WORDS) {
		wordList[idxOfWords++] = ptr;
		ptr = strtok(NULL, " ");
	}
	printf("%d\n", idxOfWords); //�ε����� ũ��

	//�и��� �ܾ� ���
	for (int i = 0; i < idxOfWords; i++) {
		printf("%s ", wordList[i]);
	}
	printf("\n");

	printf("\n== ���ڿ� ����(random) ===\n");
	srand(time(NULL));
	int rndIdx;

	rndIdx = rand() % idxOfWords; //���� ����
	printf("%s\n", wordList[rndIdx]);

	return 0;
}

