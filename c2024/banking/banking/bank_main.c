//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//
//// ���� ����
//
//int main() {
//
//	bool run = true;
//	int balance = 0;
//
//	while (run) {
//		printf("\n==========================================\n");
//		printf("1. ���� | 2. ��� | 3. �ܰ� | 4. ����\n");
//		printf("============================================\n");
//		printf("����>");
//
//		int selectNo = 0;
//		int money = 0;
//		scanf_s("%d", &selectNo);
//
//		switch (selectNo) {
//		case 1:
//			printf("���ݾ�>");
//			scanf_s("%d", &money);
//			balance += money;
//			break;
//		case 2:
//			printf("��ݾ�>");
//			scanf_s("%d", &money);
//			if (money > balance) {
//				printf("�ѵ� �ʰ��Դϴ�. ���� �ܾ� : %d", balance);
//			}
//			else {
//				balance -= money;
//			}
//			break;
//		case 3:
//			printf("�ܰ� : %d\n", balance);
//			break;
//		case 4:
//			run = false;
//			break;
//		default:
//			printf("�������� �ʴ� ����Դϴ�.");
//			break;
//		}
//	}
//	printf("���α׷��� �����մϴ�.");
//
//	return 0;
//}