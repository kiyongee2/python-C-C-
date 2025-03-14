//#include <stdio.h>
//
//int main() {
//
//    FILE* fin, * fout;
//    char line[100];  // 파일에서 한 줄을 저장할 버퍼
//
//    if (fopen_s(&fin, "scorelist.txt", "r") != 0) {
//        perror("scorelist1.txt 파일 열기에 실패함");
//        return 1;
//    }
//
//    if (fopen_s(&fout, "scorelist2.txt", "w") != 0) {
//        perror("scorelist2.txt 파일 열기에 실패함");
//        fclose(fin);  // 입력 파일 닫기
//        return 1;
//    }
//
//    // 파일 내용 한 줄씩 읽어서 다른 파일에 쓰기
//    while (fgets(line, sizeof(line), fin) != NULL) {
//        // 줄바꿈 문자는 line에 포함되어 있으므로 따로 추가하지 않음
//        fprintf(fout, "%s", line); 
//    }
//    fclose(fin);
//    fclose(fout);
//    printf("scorelist1.txt의 내용이 scorelist2.txt에 저장되었습니다.\n");
//
//    return 0;
//}
