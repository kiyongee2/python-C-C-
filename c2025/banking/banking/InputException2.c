//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <string.h>
//
//#define MAX_LEN 20  // ���¹�ȣ �ִ� ����
//
//// �������� Ȯ���ϴ� �Լ�
//int isNumber(const char* str) {
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (!isdigit(str[i])) {
//            return 0;  // ���ڰ� �ƴ� ���ڰ� ���Ե�
//        }
//    }
//    return 1;  // ���ڸ� ���Ե�
//}
//
//int main() {
//    char accountNumber[MAX_LEN];
//
//    while (1) {
//        printf("���¹�ȣ�� �Է��ϼ���: ");
//        scanf_s("%s", accountNumber, sizeof(accountNumber));
//
//        // �������� Ȯ��
//        if (isNumber(accountNumber)) {
//            printf("�Էµ� ���¹�ȣ: %s\n", accountNumber);
//            break;  // �ùٸ� �Է��̸� ���� ����
//        }
//        else {
//            printf("���ڸ� �Է��ؾ� �մϴ�. �ٽ� �Է��ϼ���.\n");
//        }
//    }
//
//    return 0;
//}
