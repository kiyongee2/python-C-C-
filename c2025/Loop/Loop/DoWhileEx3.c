//#include <stdio.h>
//
//int main(void) {
//    int num;
//
//    while (1) {
//        printf("-1 �Է½� ����: ");
//
//        // scanf_s�� ���� �Է� �õ�
//        int result = scanf_s("%d", &num);
//
//        // �Է� ���� (���� �Է� ��) �Ǵ� EOF (Ctrl+Z/Ctrl+D)
//        if (result != 1) {
//            if (result == EOF) {
//                printf("\n�Է��� ����Ǿ����ϴ�. ���α׷��� �����մϴ�.\n");
//                break;
//            }
//
//            // �߸��� �Է� ó��
//            while (getchar() != '\n'); // ���� ����
//            printf("�߸��� �Է��Դϴ�. ���ڸ� �Է����ּ���.\n");
//            continue;
//        }
//
//        // -1�� �ԷµǸ� ����
//        if (num == -1) {
//            printf("���α׷��� �����մϴ�.\n");
//            break;
//        }
//
//        // �ٸ� ���ڰ� �Էµ� ���
//        printf("�Էµ� ����: %d\n", num);
//    }
//
//    return 0;
//}