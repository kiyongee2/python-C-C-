//#include <stdio.h>
//
//void writeFile();
//void readFile();
//int main() {
//
//    writeFile();  // 파일 쓰기 함수 호출
//
//    readFile();   // 파일 읽기 함수 호출
//
//    return 0;
//}
//
//// 파일 쓰기 함수
//void writeFile() {
//
//    FILE* fp = fopen("data.txt", "w"); // 쓰기 모드로 파일 열기
//    int n = 100;
//
//    if (fp == NULL) {
//        printf("파일을 열 수 없습니다.\n");
//        exit(1);
//    }
//
//    fprintf(fp, "Hello, File I/O!\n"); // 파일에 문자열 쓰기
//    fprintf(fp, "%d\n", n);      // 숫자 쓰기
//
//    fclose(fp); // 파일 닫기
//    printf("파일 쓰기 완료!\n");
//}
//
//// 파일 읽기 함수
//void readFile() {
//    FILE* fp = fopen("data.txt", "r");
//    int ch; //읽은 데이터(코드값) 변수
//    char buffer[100]; // 읽은 데이터 배열
//
//    if (fp == NULL) {
//        printf("파일을 열 수 없습니다.\n");
//        exit(1);
//    }
//
//    printf("===== 파일 내용 출력 =====\n");
//    //문자 1개씩 읽기
//    /* while ((ch = fgetc(fp)) != EOF)
//    {
//        printf("%c", ch);
//    }*/
//    //배열로 읽기
//    while (fgets(buffer, sizeof(buffer), fp) != NULL) { 
//        printf("%s", buffer);
//    }
//    fclose(fp); // 파일 닫기
//}
