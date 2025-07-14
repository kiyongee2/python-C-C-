//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//// 은행 업무 시스템
//int main() {
//	int choice = 0;   //메뉴 선택
//	int amount = 0;   //금액
//	int balance = 0;  //잔고
//
//	while (1) {
//		printf("==========================================\n");
//		printf("1.예금 | 2.출금 | 3.잔액조회 | 4.종료\n");
//		printf("==========================================\n");
//		printf("선택> ");
//		scanf("%d", &choice);
//
//		switch (choice) {
//		case 1:
//			printf("예금액> ");
//			scanf("%d", &amount);
//			balance += amount;
//			printf("%d원이 정상 입금 처리되었습니다.\n", amount);
//			break;
//		case 2:
//			printf("출금액> ");
//			scanf("%d", &amount);
//			if (amount > balance) {
//				printf("한도 초과입니다. 현재 잔액 : %d원\n", balance);
//			}
//			else {
//				balance -= amount;
//				printf("%d원이 정상 출금 처리되었습니다.\n", amount);
//			}
//			break;
//		case 3:
//			printf("잔고 : %d원\n", balance);
//			break;
//		case 4:
//			printf("프로그램을 종료합니다.");
//			return;
//		default:
//			printf("지원되지 않는 기능입니다.");
//			break;
//		}
//	}
//	
//	return 0;
//}