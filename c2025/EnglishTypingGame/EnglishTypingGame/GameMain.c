//#include <stdio.h>
//#include <string.h>
//#include <time.h>
//#include <stdlib.h>
//
//#define MAX_WORDS 11
//#define MAX_LENGTH 20
//
//int main()
//{
//	FILE* fp;
//
//	if (fopen_s(&fp, "words.txt", "r") != 0) {
//		perror("파일 열기에 실패함!\n");
//		return 1;
//	}
//
//	char words[MAX_WORDS][MAX_LENGTH];
//	int count = 0;
//
//	printf("%s\n", words[0]);
//	/*while (fgets(words[count], MAX_LENGTH, fp) != NULL) {
//		words[count][strcspn(words[count], '\n')] = '\0';
//		count++;
//	}*/
//	printf("단어의 개수: %d\n", count);
//
//
//	fclose(fp);
//
//	/*char* question;
//	char answer[20];
//	int n = 1;
//	clock_t start, end;
//	double elapsedTime;
//
//	srand(time(NULL));
//	int size = sizeof(words) / sizeof(words[0]);
//
//	printf("[영어 타자 게임], 준비되면 엔터>");
//	getchar();
//
//	start = clock();
//	while (n < 11) {
//		printf("\n문제 %d\n", n);
//		int rndIdx = rand() % size;
//		question = words[rndIdx];
//		printf("%s\n", question);
//
//		scanf_s(answer, sizeof(answer));
//	}*/
//
//	
//	return 0;
//}
