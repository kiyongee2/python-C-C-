//#define _CRT_SECURE_NO_WARNINGS //strtok()
//#include <stdio.h>
//#include <string.h> //strtok()
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX_WORDS 20  //�ܾ��� ���� 
//void wordWrite();
//void wordRead();
//int main()
//{
//	//���� �ܾ� ����
//	wordWrite();
//
//	//���� �ܾ� �б�
//	wordRead();
//
//	return 0;
//}
//
//void wordWrite()
//{
//	FILE* fp; //���� ������ ���� 
//
//	if (fopen_s(&fp, "word.txt", "w") != 0) {
//		perror("���� ���⿡ ������\n");
//		return 1;  //������ 1 or -1
//	}
//
//	//������ �迭
//	char* words[] = { "ant", "bear", "chicken", "cow", "dog", "elephant",
//		"monkey", "lion", "tiger", "horse", "snake" };
//
//	int wordCount = sizeof(words) / sizeof(words[0]);
//	//printf("%d\n", wordCount);
//
//	for (int i = 0; i < wordCount; i++) {
//		fprintf(fp, "%s ", words[i]);
//	}
//
//	fclose(fp);
//}
//
//void wordRead()
//{
//	FILE* fp; //���� ������ ���� 
//	char str[256]; //���� ���ڿ��� ������ �迭 ����
//	char* wordList[MAX_WORDS]; //�и��� �ܾ ������ �迭
//	int idxOfWordList = 0;
//
//	if (fopen_s(&fp, "word.txt", "r") != 0) {
//		perror("���� ���⿡ ������\n");
//		return 1;  //������ 1 or -1
//	}
//
//	//���� �б�
//	printf("***** ���� ���� *****\n");
//	while (fgets(str, sizeof(str), fp) != NULL) {
//		printf("%s", str);
//	}
//	printf("\n");
//
//	//���� ����
//	printf("***** �ܾ� ����(����) *****\n");
//	char* word = strtok(str, " ");
//	printf("ù��° �ܾ�: %s\n", word);
//
//	while (word != NULL && idxOfWordList < MAX_WORDS ) {
//		wordList[idxOfWordList++] = word;
//		word = strtok(NULL, " ");
//	}
//	//printf("%d\n", idxOfWordList);
//	//printf("������ �ܾ�: %s\n", wordList[--idxOfWordList]);
//
//	srand(time(NULL));
//	
//	int randIdx = rand() % idxOfWordList;
//	printf("���� �ܾ�: %s\n", wordList[randIdx]);
//
//	fclose(fp);
//}
