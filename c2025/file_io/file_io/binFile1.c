//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    //���̳ʸ� ���� ���� �б�
//    int buf1[4] = { 0xff, 0x56, 0x78, 0xfa };
//    int buf2[4];
//
//    FILE* fp;
//
//    fp = fopen("data.dat", "wb");
//    if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;
//	}
//
//    //����
//    fwrite(buf1, sizeof(int), 4, fp);
//
//    fclose(fp);  //���� ����
//
//    fp = fopen("data.dat", "rb");
//    if (fp == NULL) {
//        printf("���� ���⿡ ������\n");
//        return 1;
//    }
//
//    //�б�
//    fread(buf2, sizeof(int), 4, fp);
//
//    //����� ���
//    printf("%x %x %x %x\n", buf2[0], buf2[1], buf2[2], buf2[3]); //16����
//    printf("%d %d %d %d\n", buf2[0], buf2[1], buf2[2], buf2[3]); //10����
//
//    fclose(fp);  //���� ����
//    
//    return 0;
//}
//
