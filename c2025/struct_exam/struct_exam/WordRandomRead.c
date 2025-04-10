//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX_WORDS 100  // 최대 단어 개수
//#define MAX_LENGTH 50  // 단어 최대 길이
//
//int main() {
//    FILE* file = fopen("words.txt", "r"); // 읽기 모드 ("r")
//
//    if (file == NULL) {
//        printf("파일을 열 수 없습니다.\n");
//        return 1;
//    }
//
//    char words[MAX_WORDS][MAX_LENGTH]; // 단어를 저장할 배열
//    int count = 0; // 단어 개수
//
//    // 파일에서 단어 읽기
//    while (fgets(words[count], MAX_LENGTH, file) != NULL && count < MAX_WORDS) {
//        // 개행 문자 제거 (fgets는 개행 문자도 포함함)
//        words[count][strcspn(words[count], "\n")] = '\0';
//        count++;
//    }
//
//    fclose(file); // 파일 닫기
//
//    // 단어가 없으면 종료
//    if (count == 0) {
//        printf("파일에 단어가 없습니다.\n");
//        return 1;
//    }
//
//    printf("%d\n", count);
//
//    // 랜덤 시드 초기화
//    srand(time(NULL));
//
//    // 랜덤한 단어 선택
//    int randomIndex = rand() % count;
//    printf("랜덤 단어: %s\n", words[randomIndex]);
//
//    return 0;
//}
