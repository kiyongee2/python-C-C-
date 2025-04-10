//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#include <string.h>  // strcspn, strcmp를 위해 추가
//
//#define MAX_WORDS 11
//#define MAX_LENGTH 20
//
//int main()
//{
//    FILE* fp;
//
//    // 파일 열기
//    if (fopen_s(&fp, "words.txt", "r") != 0) {
//        perror("파일 열기에 실패했습니다!\n");
//        return 1;
//    }
//
//    // 동적 메모리 할당: 단어를 저장할 포인터 배열
//    char** words = (char**)malloc(MAX_WORDS * sizeof(char*));
//    for (int i = 0; i < MAX_WORDS; i++) {
//        words[i] = (char*)malloc(MAX_LENGTH * sizeof(char));
//    }
//
//    int count = 0; // 단어 개수
//
//    // 파일에서 단어 읽기
//    while (fgets(words[count], MAX_LENGTH, fp) != NULL) {
//        // 개행 문자 제거
//        words[count][strcspn(words[count], "\n")] = '\0';
//        count++;
//    }
//    fclose(fp);
//
//    char* question;   // 문제 단어
//    char answer[20];  // 사용자 입력
//    int n = 1;  // 문제 번호
//    clock_t start, end;
//    double elapsedTime; // 게임 소요 시간
//
//    srand(time(NULL)); // 랜덤 시드 설정
//    int size = count;  // 실제 단어 개수
//
//    printf("영어 타자 게임, 준비되면 엔터>");
//    getchar();
//
//    start = clock();  // 시작 시간
//
//    // 게임 루프
//    while (n <= 10)
//    {
//        printf("\n문제 %d\n", n);
//        int rndIdx = rand() % size;  // 랜덤 인덱스
//        question = words[rndIdx];
//
//        printf("%s\n", question);  // 문제 출제
//        scanf_s("%s", answer, sizeof(answer));  // 사용자 입력
//
//        if (strcmp(question, answer) == 0)
//        {
//            printf("통과!\n");
//            n++;   // 다음 문제
//        }
//        else
//        {
//            printf("오타! 다시 도전!\n");
//        }
//    }
//    end = clock(); // 종료 시간
//    elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("게임 소요 시간: %.2lf초\n", elapsedTime);
//
//    // 동적 메모리 해제
//    for (int i = 0; i < MAX_WORDS; i++) {
//        free(words[i]);
//    }
//    free(words);
//
//    system("pause");  // exe 파일 실행 시 일시 정지
//
//    return 0;
//}