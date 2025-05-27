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
//        perror("���� ���⿡ �����߽��ϴ�!\n");
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
//    printf("���� Ÿ�� ����, �غ�Ǹ� ����>");
//    getchar();
//
//    start = clock();  // Start time
//
//    // Game loop
//    while (n <= 10)
//    {
//        printf("\n���� %d\n", n);
//        int rndIdx = rand() % size;
//        question = words[rndIdx];
//
//        printf("%s\n", question);  // Display the word
//        scanf_s("%s", answer, sizeof(answer));  // Get user input
//
//        if (strcmp(question, answer) == 0)
//        {
//            printf("���!\n");
//            n++;   // Move to the next word
//        }
//        else
//        {
//            printf("��Ÿ! �ٽ� ����!\n");
//        }
//    }
//    end = clock(); // End time
//    elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("���� �ҿ� �ð�: %.2lf��\n", elapsedTime);
//
//    system("pause");  // Pause for exe files*/
//
//    return 0;
//}