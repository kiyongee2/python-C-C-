//#include <stdio.h>
//
//void clear_input_buffer() {
//    while (getchar() != '\n'); // �Է� ���� ����
//}
//
//int get_valid_integer() {
//    int num;
//    char ch;
//
//    while (1) {
//        printf("������ �Է��ϼ���: ");
//        if (scanf_s("%d", &num) == 1) {
//            clear_input_buffer();
//            return num;
//        }
//        else {
//            printf("��ȿ�� ������ �Է��ϼ���.\n");
//            clear_input_buffer();
//        }
//    }
//}
//
//int main() {
//    int number = get_valid_integer();
//    printf("�Է��� ����: %d\n", number);
//    return 0;
//}
