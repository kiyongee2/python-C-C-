//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    //바이너리 파일 쓰고 읽기
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
//    //쓰기
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
//    printf("%x %x %x %x\n", buf2[0], buf2[1], buf2[2], buf2[3]); //16진수
//    printf("%d %d %d %d\n", buf2[0], buf2[1], buf2[2], buf2[3]); //10진수
//
//    fclose(fp);  //파일 종료
//    
//    return 0;
//}
//
