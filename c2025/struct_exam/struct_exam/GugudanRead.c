//#include <stdio.h>
//
//int main() {
//
//    FILE* fp;
//    char gugu[256]; // �ܾ ������ ����
//
//    if (fopen_s(&fp, "gugudan.txt", "r") != 0)
//    {
//        perror("���� ���⿡ �����߽��ϴ�.\n");
//        return 1;
//    }
//
//    printf("=== ���Ͽ��� ���� �ܾ� ��� ===\n");
//    while (fgets(gugu, sizeof(gugu), fp) != NULL) {
//        printf("%s", gugu); // �ܾ� ��� (�ٹٲ� ����)
//    }
//
//    fclose(fp);
//
//    return 0;
//}