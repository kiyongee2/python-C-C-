//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    FILE* fp;
//    char line[256]; // 각 줄을 저장할 버퍼
//    char target[100]; // 검색할 단어를 저장할 변수
//
//    // 파일 열기
//    fp = fopen("word.txt", "r");
//    if (fp == NULL) {
//        printf("파일 열기에 실패함\n");
//        return 1;
//    }
//
//    // 반복적으로 단어 검색
//    while (1) {
//        int found = 0; // 단어를 찾았는지 여부를 나타내는 플래그
//
//        // 사용자로부터 검색할 단어 입력 받기
//        printf("검색할 단어를 입력하세요 (종료하려면 'exit' 입력): ");
//        scanf("%s", target);
//
//        // 'exit' 입력 시 프로그램 종료
//        if (strcmp(target, "exit") == 0) {
//            printf("프로그램을 종료합니다.\n");
//            break;
//        }
//
//        // 파일 포인터를 처음으로 이동
//        //rewind(fp);
//
//        // 파일을 한 줄씩 읽으면서 검색
//        while (fgets(line, sizeof(line), fp)) {
//            // 줄 바꿈 문자 제거
//            line[strcspn(line, "\n")] = '\0';
//
//            // 현재 줄의 단어와 검색할 단어가 정확히 일치하는지 확인
//            if (strcmp(line, target) == 0) {
//                printf("단어를 찾았습니다: %s\n", line);
//                found = 1; // 단어를 찾았음을 표시
//                break; // 단어를 찾았으므로 반복문 종료
//            }
//        }
//
//        // 단어를 찾지 못한 경우
//        if (!found) {
//            printf("'%s'를 찾을 수 없습니다.\n", target);
//        }
//    }
//
//    // 파일 닫기
//    fclose(fp);
//
//    return 0;
//}