//#include <stdio.h>
//
//int main()
//{
//	/*
//		커피 자동 판매기 프로그램
//	*/
//
//	int money;
//	int coffee = 5;
//	
//	while (1) {
//		printf("동전을 넣어주세요: ");
//		scanf_s("%d", &money);
//
//		if (money == 500)
//		{
//			printf("커피가 나옵니다.\n");
//			coffee -= 1;
//		}
//		else if (money > 500)
//		{
//			printf("커피가 나오고, 거스름돈 %d원을 돌려받습니다.\n", (money - 500));
//			coffee -= 1;
//		}
//		else {
//			printf("커피가 나오지 않고, 돈을 돌려줍니다.\n");
//		}
//
//		if (coffee == 0)
//		{
//			printf("커피가 모두 소진되어 판매를 중단합니다.\n");
//			break;
//		}
//	}
//
//	return 0;
//}
