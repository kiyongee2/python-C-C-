//#include <stdio.h>
//
//int main() {
//    FILE* fp = fopen("words.txt", "r"); // �б� ��� ("r")
//
//    if (fp == NULL) {
//        printf("������ �� �� �����ϴ�.\n");
//        return 1;
//    }
//
//    char word[30]; // �ܾ ������ ����
//
//    printf("���Ͽ��� ���� �ܾ� ���:\n");
//    while (fgets(word, sizeof(word), fp) != NULL) {
//        printf("%s", word); // �ܾ� ��� (�ٹٲ� ����)
//    }
//
//    fclose(fp);
//    return 0;
//}
