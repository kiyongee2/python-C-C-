//#include <stdio.h>
//#include <string.h>
//
//int main() {
//
//    FILE* fp;
//    //fopen_s(&fp, "words.txt", "w"); // 쓰기 모드 ("w")
//    //if (fp == NULL) {
//    //    printf("File opens failed!\n");
//    //    return 1;
//    //}
//
//    if (fopen_s(&fp, "words.txt", "w") != 0)
//    {
//        perror("파일 열기에 실패했습니다.\n");
//        return 1;
//    }
//
//    char* words[] = { "ant", "bear", "chicken", "cow", "dog", "elephant",
//            "monkey", "lion", "tiger", "horse", "snake" };
//    int wordCount = sizeof(words) / sizeof(words[0]);
//    //printf("wordCount = %d\n", wordCount);
//
//    //fprintf(fp, "%s", words[0]);
//     
//    for (int i = 0; i < wordCount; i++) {
//        fprintf(fp, "%s\n", words[i]); // 한 단어씩 파일에 저장
//    }
//
//    fclose(fp);
//
//    return 0;
//}
