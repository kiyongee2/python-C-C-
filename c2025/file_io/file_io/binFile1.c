//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    //���̳ʸ� ���� ���� �б�
//
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
//    //���� - fwrite(�迭, �迭�� ũ��, ����� ����, ���� ������)
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
//    for (int i = 0; i < 4; i++) {
//        printf("%x %d\n", buf2[i], buf2[i]); //16���� �ּ�, ��
//    }
//
//    fclose(fp);  //���� ����
//    
//    return 0;
//}
//
