//#include <stdio.h>
//
//int main() {
//
//    FILE* fp; // 쓰기 모드 ("w")
//
//    if (fopen_s(&fp,"words.txt", "w") != 0) {
//        perror("파일 열기에 실패했습니다!\n");
//        return 1;
//    }
//
//    // 영어 단어 목록
//    char* words[] = { "ant", "bear", "chicken", "cow", "dog", "elephant",
//            "monkey", "lion", "tiger", "horse", "snake" };
//    int wordCount = sizeof(words) / sizeof(words[0]);
//    //printf("wordCount = %d\n", wordCount);
//
//    for (int i = 0; i < wordCount; i++) {
//        fprintf(fp, "%s\n", words[i]); // 단어를 한 줄씩 저장
//    }
//
//    fclose(fp);
//    printf("영어 단어를 파일에 저장했습니다.\n");
//
//    return 0;
//}
