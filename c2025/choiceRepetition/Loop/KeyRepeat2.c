//#include <stdio.h>
//#include <string.h> // For strcmp
//#include <ctype.h>  // For toupper
//
//int main()
//{
//    char key[3]; // Increased size to handle "y\n" or "n\n"
//
//    while (1)
//    {
//        printf("계속 반복할까요?(y/n 입력) ");
//
//        // Read input safely
//        if (scanf_s("%2s", key, (unsigned)sizeof(key)) != 1)
//        {
//            // Clear input buffer on error
//            while (getchar() != '\n');
//            printf("입력 오류! 다시 시도하세요.\n");
//            continue;
//        }
//
//        // Convert to uppercase for simpler comparison
//        char upperKey = toupper(key[0]);
//
//        if (upperKey == 'Y' && key[1] == '\0') // Check only single 'y'/'Y'
//        {
//            printf("계속 반복!\n");
//        }
//        else if (upperKey == 'N' && key[1] == '\0') // Check only single 'n'/'N'
//        {
//            printf("반복 중단!\n");
//            break;
//        }
//        else 
//        {
//            printf("잘못된 입력입니다! 다시 입력하세요\n");
//            // Clear any remaining input
//            while (getchar() != '\n');
//        }
//    }
//
//    printf("프로그램 종료\n");
//    return 0;
//}