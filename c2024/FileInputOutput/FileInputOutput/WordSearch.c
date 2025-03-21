//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    FILE* fp;
//    char line[256]; // 각 줄을 저장할 버퍼
//    char target[32]; // 검색할 단어를 저장할 변수
//    int isFind = 0; // 단어를 찾았는지 여부를 나타내는 플래그
//
//    // 사용자로부터 검색할 단어 입력 받기
//    printf("검색할 단어를 입력하세요: ");
//    scanf("%s", target);
//
//    fp = fopen("word.txt", "r");
//    if (fp == NULL) {
//        printf("파일 열기에 실패함\n");
//        return 1;
//    }
//
//    // 파일을 한 줄씩 읽으면서 검색
//    while (fgets(line, sizeof(line), fp)) {
//        // 줄 바꿈 문자 제거
//        line[strcspn(line, "\n")] = '\0';
//
//        // 현재 줄에 검색할 단어가 있는지 확인
//        //if (strstr(line, target) != NULL) {
//        //    printf("단어를 찾았습니다: %s\n", line);
//        //    isFind = 1; // 단어를 찾았음을 표시
//        //}
//
//        // 현재 줄의 단어와 검색할 단어가 정확히 일치하는지 확인
//        if (strcmp(line, target) == 0) {
//            printf("단어를 찾았습니다: %s\n", line);
//            isFind = 1; // 단어를 찾았음을 표시
//            break; // 단어를 찾았으므로 반복문 종료
//        }
//    }
//
//    // 단어를 찾지 못한 경우
//    if (!isFind) {
//        printf("'%s'를 찾을 수 없습니다.\n", target);
//    }
//
//    // 파일 닫기
//    fclose(fp);
//
//    return 0;
//}