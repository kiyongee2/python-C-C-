//#include <stdio.h>
//
//int main() {
//
//    FILE* fp;
//    char gugu[256]; // 단어를 저장할 버퍼
//
//    if (fopen_s(&fp, "gugudan.txt", "r") != 0)
//    {
//        perror("파일 열기에 실패했습니다.\n");
//        return 1;
//    }
//
//    printf("=== 파일에서 읽은 단어 목록 ===\n");
//    while (fgets(gugu, sizeof(gugu), fp) != NULL) {
//        printf("%s", gugu); // 단어 출력 (줄바꿈 포함)
//    }
//
//    fclose(fp);
//
//    return 0;
//}