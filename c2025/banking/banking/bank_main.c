//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//// ���� ���� �ý���
//int main() {
//	int choice = 0;   //�޴� ����
//	int amount = 0;   //�ݾ�
//	int balance = 0;  //�ܰ�
//
//	while (1) {
//		printf("==========================================\n");
//		printf("1.���� | 2.��� | 3.�ܾ���ȸ | 4.����\n");
//		printf("==========================================\n");
//		printf("����> ");
//		scanf("%d", &choice);
//
//		switch (choice) {
//		case 1:
//			printf("���ݾ�> ");
//			scanf("%d", &amount);
//			balance += amount;
//			printf("%d���� ���� �Ա� ó���Ǿ����ϴ�.\n", amount);
//			break;
//		case 2:
//			printf("��ݾ�> ");
//			scanf("%d", &amount);
//			if (amount > balance) {
//				printf("�ѵ� �ʰ��Դϴ�. ���� �ܾ� : %d��\n", balance);
//			}
//			else {
//				balance -= amount;
//				printf("%d���� ���� ��� ó���Ǿ����ϴ�.\n", amount);
//			}
//			break;
//		case 3:
//			printf("�ܰ� : %d��\n", balance);
//			break;
//		case 4:
//			printf("���α׷��� �����մϴ�.");
//			return;
//		default:
//			printf("�������� �ʴ� ����Դϴ�.");
//			break;
//		}
//	}
//	
//	return 0;
//}