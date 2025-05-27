//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#include <string.h>  // Added for strcspn and strcmp
//
//#define MAX_WORDS 11
//#define MAX_LENGTH 20
//
//int main()
//{
//    FILE* fp;
//
//    // Open the file
//    if (fopen_s(&fp, "animal.txt", "r") != 0) {
//        perror("파일 열기에 실패했습니다!\n");
//        return 1;
//    }
//
//    char words[MAX_WORDS][MAX_LENGTH]; // Array to store words
//    int count = 0; // Word count
//
//    // Read words from the file
//    while (fgets(words[count], MAX_LENGTH, fp) != NULL) {
//        // Remove newline character
//        //words[count][strcspn(words[count], "\n")] = '\0';
//        count++;
//    }
//    printf("%s\n", words[0]);
//    fclose(fp);
//
//    /*char* question;   // Word to be typed
//    char answer[20];  // User's input
//    int n = 1;  // Question number
//    clock_t start, end;
//    double elapsedTime; // Time taken to complete the game
//
//    srand(time(NULL)); // Seed for random number generation
//    int size = sizeof(words) / sizeof(words[0]);
//
//    printf("영어 타자 게임, 준비되면 엔터>");
//    getchar();
//
//    start = clock();  // Start time
//
//    // Game loop
//    while (n <= 10)
//    {
//        printf("\n문제 %d\n", n);
//        int rndIdx = rand() % size;
//        question = words[rndIdx];
//
//        printf("%s\n", question);  // Display the word
//        scanf_s("%s", answer, sizeof(answer));  // Get user input
//
//        if (strcmp(question, answer) == 0)
//        {
//            printf("통과!\n");
//            n++;   // Move to the next word
//        }
//        else
//        {
//            printf("오타! 다시 도전!\n");
//        }
//    }
//    end = clock(); // End time
//    elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("게임 소요 시간: %.2lf초\n", elapsedTime);
//
//    system("pause");  // Pause for exe files*/
//
//    return 0;
//}