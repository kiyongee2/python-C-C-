//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    FILE* fp;
//    char line[256]; // Buffer to store each line
//    const char* target = "BANANA"; // The string to search for
//    int found = 0; // Flag to indicate if the string was found
//
//    // Open the file for reading
//    fp = fopen("seek.txt", "r");
//    if (fp == NULL) {
//        printf("���� ���⿡ ������\n");
//        return 1;
//    }
//
//    // Read the file line by line
//    while (fgets(line, sizeof(line), fp)) {
//        // Remove the newline character at the end of the line (if present)
//        line[strcspn(line, "\n")] = '\0';
//
//        // Check if the target string is in the current line
//        if (strstr(line, target) != NULL) {
//            printf("'%s'�� ã�ҽ��ϴ�: %s\n", target, line);
//            found = 1;
//            break; // Stop searching after finding the string
//        }
//    }
//
//    // If the string was not found
//    if (!found) {
//        printf("'%s'�� ã�� �� �����ϴ�.\n", target);
//    }
//
//    // Close the file
//    fclose(fp);
//
//    return 0;
//}