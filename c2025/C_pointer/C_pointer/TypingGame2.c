//#define _CRT_SECURE_NO_WARNINGS //strtok()
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX_WORDS 10    //�ܾ��� ����
//#define MAX_LENGTH 20   //�ܾ��� ����
//int main()
//{
//    // 1. �ܾ� �и� �� ����
//    char words[] = "ant bear chicken cow dog elephant monkey lion tiger horse";
//    char* wordList[MAX_WORDS]; // �и��� �ܾ� ����� �迭
//    int idxOfWords = 0;
//
//    char* ptr = strtok(words, " "); //������ ���б�ȣ�� ���ڿ� �ڸ���
//    while (ptr != NULL && idxOfWords < MAX_WORDS){
//        wordList[idxOfWords++] = ptr;
//        ptr = strtok(NULL, " ");
//    }
//
//    // 2. Ÿ�� ���� �غ�
//    char* question;
//    char* answer = NULL; //���� �迭�� �Ҵ�
//    int n = 1;
//    clock_t start, end;
//    double elapsedTime;
//
//    srand(time(NULL)); //���� ������ ���� �õ� ����
//
//    printf("���� Ÿ�� ����, �غ�Ǹ� ����> ");
//    getchar();
//    start = clock();
//    while (n <= 10){
//        printf("\n���� %d\n", n);
//        int rndIdx = rand() % idxOfWords; //���� �ܾ� ���� ���
//        question = wordList[rndIdx];  //������ �ܾ� ����
//        printf("%s\n", question); //���� ����
//
//        answer = (char*)malloc(MAX_LENGTH * sizeof(char));
//        if (answer == NULL) {
//			puts("���� �޸� �Ҵ翡 �����߽��ϴ�.");
//			exit(0);
//		}
//
//        scanf("%s", answer);  //����� �Է�
//        if (strcmp(question, answer) == 0){
//            printf("���!\n");
//            n++;
//        }else{
//            printf("��Ÿ! �ٽ� ����!\n");
//        }
//    }
//    end = clock();
//    elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("���� �ҿ� �ð�: %.2f��\n", elapsedTime);
//    free(answer); // �޸� ����
//    return 0;
//}
