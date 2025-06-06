//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define BUFFER_SIZE 4096 // 4KB 버퍼
//int main() 
//{
//    FILE* fin = fopen("boat.jpg", "rb");  // 읽기 모드
//    FILE* fout = fopen("boat2.jpg", "wb"); // 쓰기 모드
//
//    if (fin == NULL || fout == NULL) {
//        perror("파일 열기 실패");
//        return 1;
//    }
//
//    // 버퍼를 사용한 효율적인 복사
//    int buf[BUFFER_SIZE];
//    int bytesRead; //size_t bytesRead도 가능
//    
//    while ((bytesRead = fread(buf, sizeof(int), BUFFER_SIZE, fin)) > 0) {
//        fwrite(buf, sizeof(int), bytesRead, fout);
//    }
//
//    fclose(fin);
//    fclose(fout);
//
//    printf("파일 복사 완료: boat2.jpg\n");
//
//    return 0;
//}