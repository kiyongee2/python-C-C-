//#include <stdio.h>
//
//int main() {
//    FILE* fp = fopen("words.txt", "r"); // 읽기 모드 ("r")
//
//    if (fp == NULL) {
//        printf("파일을 열 수 없습니다.\n");
//        return 1;
//    }
//
//    char word[30]; // 단어를 저장할 버퍼
//
//    printf("파일에서 읽은 단어 목록:\n");
//    while (fgets(word, sizeof(word), fp) != NULL) {
//        printf("%s", word); // 단어 출력 (줄바꿈 포함)
//    }
//
//    fclose(fp);
//    return 0;
//}
