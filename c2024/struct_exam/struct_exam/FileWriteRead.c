//#include <stdio.h>
//#include <stdlib.h>
//
//void writeFile();
//void readFile();
//
//int main() {
//    writeFile();  // 파일 쓰기 함수 호출
//    readFile();   // 파일 읽기 함수 호출
//    return 0;
//}
//
//// 파일 쓰기 함수
//void writeFile() {
//    FILE* file = fopen("data.txt", "w"); // 쓰기 모드로 파일 열기
//    if (file == NULL) {
//        printf("파일을 열 수 없습니다.\n");
//        exit(1);
//    }
//
//    fprintf(file, "Hello, File I/O!\n"); // 파일에 문자열 쓰기
//    fprintf(file, "12345 67890\n");      // 숫자 쓰기
//    fprintf(file, "C언어 파일 입출력 예제\n");
//
//    fclose(file); // 파일 닫기
//    printf("파일 쓰기 완료!\n");
//}
//
//// 파일 읽기 함수
//void readFile() {
//    FILE* file = fopen("data.txt", "r"); // 읽기 모드로 파일 열기
//    if (file == NULL) {
//        printf("파일을 열 수 없습니다.\n");
//        exit(1);
//    }
//
//    char buffer[100]; // 한 줄씩 읽을 버퍼
//    printf("파일 내용 출력:\n");
//    while (fgets(buffer, sizeof(buffer), file) != NULL) { // 파일에서 한 줄씩 읽기
//        printf("%s", buffer);
//    }
//
//    fclose(file); // 파일 닫기
//}
