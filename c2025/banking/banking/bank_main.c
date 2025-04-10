//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//
//// 은행 업무
//
//int main() {
//
//	bool run = true;
//	int balance = 0;
//
//	while (run) {
//		printf("\n==========================================\n");
//		printf("1. 예금 | 2. 출금 | 3. 잔고 | 4. 종료\n");
//		printf("============================================\n");
//		printf("선택>");
//
//		int selectNo = 0;
//		int money = 0;
//		scanf_s("%d", &selectNo);
//
//		switch (selectNo) {
//		case 1:
//			printf("예금액>");
//			scanf_s("%d", &money);
//			balance += money;
//			break;
//		case 2:
//			printf("출금액>");
//			scanf_s("%d", &money);
//			if (money > balance) {
//				printf("한도 초과입니다. 현재 잔액 : %d", balance);
//			}
//			else {
//				balance -= money;
//			}
//			break;
//		case 3:
//			printf("잔고 : %d\n", balance);
//			break;
//		case 4:
//			run = false;
//			break;
//		default:
//			printf("지원되지 않는 기능입니다.");
//			break;
//		}
//	}
//	printf("프로그램을 종료합니다.");
//
//	return 0;
//}