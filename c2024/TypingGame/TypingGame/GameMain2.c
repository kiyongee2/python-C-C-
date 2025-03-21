//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#include <string.h>  // strcspn, strcmp�� ���� �߰�
//
//#define MAX_WORDS 11
//#define MAX_LENGTH 20
//
//int main()
//{
//    FILE* fp;
//
//    // ���� ����
//    if (fopen_s(&fp, "words.txt", "r") != 0) {
//        perror("���� ���⿡ �����߽��ϴ�!\n");
//        return 1;
//    }
//
//    // ���� �޸� �Ҵ�: �ܾ ������ ������ �迭
//    char** words = (char**)malloc(MAX_WORDS * sizeof(char*));
//    for (int i = 0; i < MAX_WORDS; i++) {
//        words[i] = (char*)malloc(MAX_LENGTH * sizeof(char));
//    }
//
//    int count = 0; // �ܾ� ����
//
//    // ���Ͽ��� �ܾ� �б�
//    while (fgets(words[count], MAX_LENGTH, fp) != NULL) {
//        // ���� ���� ����
//        words[count][strcspn(words[count], "\n")] = '\0';
//        count++;
//    }
//    fclose(fp);
//
//    char* question;   // ���� �ܾ�
//    char answer[20];  // ����� �Է�
//    int n = 1;  // ���� ��ȣ
//    clock_t start, end;
//    double elapsedTime; // ���� �ҿ� �ð�
//
//    srand(time(NULL)); // ���� �õ� ����
//    int size = count;  // ���� �ܾ� ����
//
//    printf("���� Ÿ�� ����, �غ�Ǹ� ����>");
//    getchar();
//
//    start = clock();  // ���� �ð�
//
//    // ���� ����
//    while (n <= 10)
//    {
//        printf("\n���� %d\n", n);
//        int rndIdx = rand() % size;  // ���� �ε���
//        question = words[rndIdx];
//
//        printf("%s\n", question);  // ���� ����
//        scanf_s("%s", answer, sizeof(answer));  // ����� �Է�
//
//        if (strcmp(question, answer) == 0)
//        {
//            printf("���!\n");
//            n++;   // ���� ����
//        }
//        else
//        {
//            printf("��Ÿ! �ٽ� ����!\n");
//        }
//    }
//    end = clock(); // ���� �ð�
//    elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("���� �ҿ� �ð�: %.2lf��\n", elapsedTime);
//
//    // ���� �޸� ����
//    for (int i = 0; i < MAX_WORDS; i++) {
//        free(words[i]);
//    }
//    free(words);
//
//    system("pause");  // exe ���� ���� �� �Ͻ� ����
//
//    return 0;
//}