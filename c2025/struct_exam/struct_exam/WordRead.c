//#include <stdio.h>
//
//int main() {
//
//    FILE* fp;
//    char word[256]; // �ܾ ������ ����
//
//    if (fopen_s(&fp, "words.txt", "r") != 0)
//    {
//        perror("���� ���⿡ �����߽��ϴ�.\n");
//        return 1;
//    }
//
//    printf("=== ���Ͽ��� ���� �ܾ� ��� ===\n");
//    
//    while (fgets(word, sizeof(word), fp) != NULL)
//    {
//        printf("%s", word); //�ܾ� ���(�ٹٲ� ����)
//    }
//
//    fclose(fp);
//
//    /*while ((ch = fgetc(fp)) != EOF)
//    {
//        printf("%c", ch);
//    }*/
//
//    return 0;
//}
