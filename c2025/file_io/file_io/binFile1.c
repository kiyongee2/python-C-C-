//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    //바이너리 파일 쓰고 읽기
//
//    int buf1[4] = { 0xff, 0x56, 0x78, 0xfa };
//    int buf2[4];
//
//    FILE* fp;
//
//    fp = fopen("data.dat", "wb");
//    if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 1;
//	}
//
//    //쓰기 - fwrite(배열, 배열의 크기, 요소의 개수, 파일 포인터)
//    fwrite(buf1, sizeof(int), 4, fp);
//
//    fclose(fp);  //파일 종료
//
//    fp = fopen("data.dat", "rb");
//    if (fp == NULL) {
//        printf("파일 열기에 실패함\n");
//        return 1;
//    }
//
//    //읽기
//    fread(buf2, sizeof(int), 4, fp);
//
//    //모니터 출력
//    for (int i = 0; i < 4; i++) {
//        printf("%x %d\n", buf2[i], buf2[i]); //16진수 주소, 값
//    }
//
//    fclose(fp);  //파일 종료
//    
//    return 0;
//}
//
