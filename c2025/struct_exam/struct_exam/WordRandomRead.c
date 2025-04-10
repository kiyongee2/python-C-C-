//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX_WORDS 100  // �ִ� �ܾ� ����
//#define MAX_LENGTH 50  // �ܾ� �ִ� ����
//
//int main() {
//    FILE* file = fopen("words.txt", "r"); // �б� ��� ("r")
//
//    if (file == NULL) {
//        printf("������ �� �� �����ϴ�.\n");
//        return 1;
//    }
//
//    char words[MAX_WORDS][MAX_LENGTH]; // �ܾ ������ �迭
//    int count = 0; // �ܾ� ����
//
//    // ���Ͽ��� �ܾ� �б�
//    while (fgets(words[count], MAX_LENGTH, file) != NULL && count < MAX_WORDS) {
//        // ���� ���� ���� (fgets�� ���� ���ڵ� ������)
//        words[count][strcspn(words[count], "\n")] = '\0';
//        count++;
//    }
//
//    fclose(file); // ���� �ݱ�
//
//    // �ܾ ������ ����
//    if (count == 0) {
//        printf("���Ͽ� �ܾ �����ϴ�.\n");
//        return 1;
//    }
//
//    printf("%d\n", count);
//
//    // ���� �õ� �ʱ�ȭ
//    srand(time(NULL));
//
//    // ������ �ܾ� ����
//    int randomIndex = rand() % count;
//    printf("���� �ܾ�: %s\n", words[randomIndex]);
//
//    return 0;
//}
