//#include <stdio.h>
//#include <string.h>
//
//#define MAX_LEN 10
//#define TRUE 1
//#define FALSE 0
//
//#define ADD 1
//#define REMOVE 2
//#define CHECK 3
//#define ORDER 4
//#define END 5
//
//#define AMERICANO 1
//#define CAFELATTE 2
//#define JUICE 3
//#define ICECREAM 4
//#define CANCEL 5
//
//#define AMERICANO_PRICE 4000
//#define CAFELATTE_PRICE 4500
//#define JUICE_PRICE 5000
//#define ICECREAM_PRICE 5500
//
//typedef struct
//{
//	char* foods[MAX_LEN];
//	int idxOfFoods;
//	int totalPrice;
//}ItemList;
//
//// 음료 주문 메뉴
//void select()
//{
//	puts("========== WHAT DO YOU WANT ==========");
//	puts("1. 음료 추가");
//	puts("2. 음료 삭제");
//	puts("3. 선택 음료 확인");
//	puts("4. 선택 음료 주문");
//	puts("5. 프로그램 종료");
//}
//
//// 음료 추가 메뉴
//void showMenu()
//{
//	puts("========= ADD MENU ==========");
//	puts("1. 아메리카노(4000)");
//	puts("2. 카페라떼(4500)");
//	puts("3. 주스(5000)");
//	puts("4. 아이스크림(5500)");
//	puts("5. 동작 취소");
//}
//
//// 음료 삭제 메뉴
//void showRemoveMenu()
//{
//	puts("========= REMOVE MENU ==========");
//	puts("1. 아메리카노(4000)");
//	puts("2. 카페라떼(4500)");
//	puts("3. 주스(5000)");
//	puts("4. 아이스크림(5500)");
//	puts("5. 동작 취소");
//}
//
////음료 추가
//void addMenu(ItemList* itemList)
//{
//	if (itemList->idxOfFoods >= MAX_LEN)
//	{
//		puts("더 이상 추가할 수 없습니다.!");
//		return;
//	}
//
//	int choice;
//	showMenu();
//	printf("선택:");
//	scanf_s("%d", &choice);
//	switch (choice)
//	{
//	case AMERICANO:
//		puts("아메리카노 추가");
//		itemList->foods[(itemList->idxOfFoods)++] = "아메리카노";
//		itemList->totalPrice += AMERICANO_PRICE;
//		break;
//	case CAFELATTE:
//		puts("카페라떼 추가");
//		itemList->foods[(itemList->idxOfFoods)++] = "카페라떼";
//		itemList->totalPrice += CAFELATTE_PRICE;
//		break;
//	case JUICE:
//		puts("주스 추가");
//		itemList->foods[(itemList->idxOfFoods)++] = "주스";
//		itemList->totalPrice += JUICE_PRICE;
//		break;
//	case ICECREAM:
//		puts("아이스크림 추가");
//		itemList->foods[(itemList->idxOfFoods)++] = "아이스크림";
//		itemList->totalPrice += ICECREAM_PRICE;
//		break;
//	case CANCEL:
//		puts("동작 취소");
//		break;
//	default:
//		puts("잘못된 입력입니다. 동작을 취소합니다.");
//		break;
//	}
//}
//
//int removeItem(ItemList* itemList, char* itemToRemove)
//{
//	int i, rmIdx = -1;
//	for (i = 0; i < itemList->idxOfFoods; i++)
//	{
//		if (!strcmp(itemList->foods[i], itemToRemove))
//		{
//			rmIdx = i;
//			break;
//		}
//	}
//	if (rmIdx >= 0)
//	{
//		for (i = rmIdx; i < itemList->idxOfFoods; i++)
//		{
//			itemList->foods[i] = itemList->foods[i + 1];
//		}
//		if (rmIdx == 0 && itemList->idxOfFoods == 1)
//		{
//			itemList->foods[0] = NULL;
//		}
//		printf("%s 삭제했습니다.", itemToRemove);
//		return TRUE;
//	}
//	else
//	{
//		printf("삭제할 대상이 없습니다.\n");
//		return FALSE;
//	}
//}
//
////선택 음료 삭제
//void removeMenu(ItemList* itemList)
//{
//	if (itemList->idxOfFoods <= 0)
//	{
//		puts("더 이상 삭제할 수 없습니다.");
//		return;
//	}
//
//	int choice;
//	showRemoveMenu();
//	printf("선택:");
//	scanf_s("%d", &choice);
//	switch (choice)
//	{
//	case AMERICANO:
//		if (removeItem(itemList, "아메리카노"))
//		{
//			itemList->totalPrice -= AMERICANO_PRICE;
//			(itemList->idxOfFoods)--;
//		}
//		break;
//	case CAFELATTE:
//		if (removeItem(itemList, "카페라떼"))
//		{
//			itemList->totalPrice -= CAFELATTE_PRICE;
//			(itemList->idxOfFoods)--;
//		}
//		break;
//	case JUICE:
//		if (removeItem(itemList, "주스"))
//		{
//			itemList->totalPrice -= JUICE_PRICE;
//			(itemList->idxOfFoods)--;
//		}
//		break;
//	case ICECREAM:
//		if (removeItem(itemList, "아이스크림"))
//		{
//			itemList->totalPrice -= ICECREAM_PRICE;
//			(itemList->idxOfFoods)--;
//		}
//		break;
//	case CANCEL:
//		puts("동작 취소");
//		break;
//	default:
//		puts("잘못된 입력입니다. 동작을 취소합니다.");
//		break;
//	}
//}
//
////선택 음료 확인
//void checkMenu(ItemList *itemList)
//{
//	int i = 0;
//	printf("주문음료 총액: %d원, 주문음료 내역\n==>", itemList->totalPrice);
//	for (i = 0; i < itemList->idxOfFoods; i++)
//	{
//		printf("%s.", itemList->foods[i]);
//	}
//	printf("\n");
//}
//
////선택 음료 주문
//int order(ItemList* itemList)
//{
//	int choice;
//	checkMenu(itemList);
//	puts("정말로 주문하시겠어요?");
//	printf("yes (1), no (2):");
//	scanf_s("%d", &choice);
//
//	if (choice == 1)
//	{
//		return TRUE;
//	}
//	else
//	{
//		return FALSE;
//	}
//}
//
//int main()
//{
//	ItemList itemList;
//	itemList.idxOfFoods = 0;
//	itemList.totalPrice = 0;
//	int choice;
//
//	while (1)
//	{
//		select();
//		printf("선택:");
//		scanf_s("%d", &choice);
//		printf("\n\n");
//
//		switch (choice)
//		{
//		case ADD:
//			addMenu(&itemList);
//			printf("\n\n");
//			break;
//		case REMOVE:
//			removeMenu(&itemList);
//			printf("\n\n");
//			break;
//		case CHECK:
//			checkMenu(&itemList);
//			printf("\n\n");
//			break;
//		case ORDER:
//			if (order(&itemList))
//			{
//				puts("주문 완료! 프로그램을 종료합니다.");
//				return 0;  //즉시 종료
//			}
//			else
//			{
//				puts("주문 보류!");
//				printf("\n\n");
//			}
//			break;
//		case END:
//			puts("프로그램을 종료합니다.");
//			break;
//		default:
//			puts("잘못된 입력입니다. 동작을 취소합니다.");
//			return 0;
//		}
//	}
//
//	return 0;
//}