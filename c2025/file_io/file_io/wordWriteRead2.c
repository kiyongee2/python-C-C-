//#define _CRT_SECURE_NO_WARNINGS //strtok()
//#include <stdio.h>
//#include <string.h> //strtok()
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX_WORDS 20  //�ܾ��� ���� 
//int main()
//{
//	//���� ����
//	FILE* fp; 
//	if (fopen_s(&fp, "word2.txt", "w") != 0) {
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
//	fclose(fp);
//
//    //���� �б�
//	char word[256]; //���� ���ڿ��� ������ �迭 ����
//	char wordList[MAX_WORDS]; //�и��� �ܾ ������ �迭
//	int idxOfWordList = 0;
//
//	if (fopen_s(&fp, "word2.txt", "r") != 0) {
//		perror("���� ���⿡ ������\n");
//		return 1;  //������ 1 or -1
//	}
//
//	//���� �б�
//	printf("***** ���� ���� *****\n");
//	while (fgets(word, sizeof(word), fp) != NULL) {
//		printf("%s", word);
//	}
//	printf("\n");
//
//	//���� ����
//	printf("***** �ܾ� ����(����) *****\n");
//	char* ptr = strtok(word, " ");
//	printf("ù��° �ܾ�: %s\n", ptr);
//
//	while (ptr != NULL && idxOfWordList < MAX_WORDS) {
//		wordList[idxOfWordList++] = ptr;
//		ptr = strtok(NULL, " ");
//	}
//	printf("\n�ܾ�: %s\n", wordList[0]);
//
//	/*srand(time(NULL));
//
//	int randIdx = rand() % idxOfWordList;
//	printf("���� �ܾ�: %s\n", wordList[randIdx]);*/
//
//	fclose(fp);
//
//	return 0;
//}
//
//
