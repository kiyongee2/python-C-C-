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
//        printf("��� �ݺ��ұ��?(y/n �Է�) ");
//
//        // Read input safely
//        if (scanf_s("%2s", key, (unsigned)sizeof(key)) != 1)
//        {
//            // Clear input buffer on error
//            while (getchar() != '\n');
//            printf("�Է� ����! �ٽ� �õ��ϼ���.\n");
//            continue;
//        }
//
//        // Convert to uppercase for simpler comparison
//        char upperKey = toupper(key[0]);
//
//        if (upperKey == 'Y' && key[1] == '\0') // Check only single 'y'/'Y'
//        {
//            printf("��� �ݺ�!\n");
//        }
//        else if (upperKey == 'N' && key[1] == '\0') // Check only single 'n'/'N'
//        {
//            printf("�ݺ� �ߴ�!\n");
//            break;
//        }
//        else 
//        {
//            printf("�߸��� �Է��Դϴ�! �ٽ� �Է��ϼ���\n");
//            // Clear any remaining input
//            while (getchar() != '\n');
//        }
//    }
//
//    printf("���α׷� ����\n");
//    return 0;
//}