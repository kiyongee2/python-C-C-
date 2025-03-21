//#include <stdio.h>
//
//int main() {
//
//    FILE* fp;
//    char word[256]; // 단어를 저장할 버퍼
//
//    if (fopen_s(&fp, "words.txt", "r") != 0)
//    {
//        perror("파일 열기에 실패했습니다.\n");
//        return 1;
//    }
//
//    printf("=== 파일에서 읽은 단어 목록 ===\n");
//    
//    while (fgets(word, sizeof(word), fp) != NULL)
//    {
//        printf("%s", word); //단어 출력(줄바꿈 포함)
//    }
//
//    fclose(fp);
//
//    /*while ((ch = fgetc(fp)) != EOF)
//    {
//        printf("%c", ch);
//    }*/
//
//    return 0;
//}
