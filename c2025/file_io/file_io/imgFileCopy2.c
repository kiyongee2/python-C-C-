//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define BUFFER_SIZE 4096 // 4KB ����
//int main() 
//{
//    FILE* fin = fopen("boat.jpg", "rb");  // �б� ���
//    FILE* fout = fopen("boat2.jpg", "wb"); // ���� ���
//
//    if (fin == NULL || fout == NULL) {
//        perror("���� ���� ����");
//        return 1;
//    }
//
//    // ���۸� ����� ȿ������ ����
//    int buf[BUFFER_SIZE];
//    int bytesRead; //size_t bytesRead�� ����
//    
//    while ((bytesRead = fread(buf, sizeof(int), BUFFER_SIZE, fin)) > 0) {
//        fwrite(buf, sizeof(int), bytesRead, fout);
//    }
//
//    fclose(fin);
//    fclose(fout);
//
//    printf("���� ���� �Ϸ�: boat2.jpg\n");
//
//    return 0;
//}