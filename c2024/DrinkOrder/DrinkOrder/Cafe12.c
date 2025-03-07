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
//// ���� �ֹ� �޴�
//void select()
//{
//	puts("========== WHAT DO YOU WANT ==========");
//	puts("1. ���� �߰�");
//	puts("2. ���� ����");
//	puts("3. ���� ���� Ȯ��");
//	puts("4. ���� ���� �ֹ�");
//	puts("5. ���α׷� ����");
//}
//
//// ���� �߰� �޴�
//void showMenu()
//{
//	puts("========= ADD MENU ==========");
//	puts("1. �Ƹ޸�ī��(4000)");
//	puts("2. ī���(4500)");
//	puts("3. �ֽ�(5000)");
//	puts("4. ���̽�ũ��(5500)");
//	puts("5. ���� ���");
//}
//
//// ���� ���� �޴�
//void showRemoveMenu()
//{
//	puts("========= REMOVE MENU ==========");
//	puts("1. �Ƹ޸�ī��(4000)");
//	puts("2. ī���(4500)");
//	puts("3. �ֽ�(5000)");
//	puts("4. ���̽�ũ��(5500)");
//	puts("5. ���� ���");
//}
//
////���� �߰�
//void addMenu(ItemList* itemList)
//{
//	if (itemList->idxOfFoods >= MAX_LEN)
//	{
//		puts("�� �̻� �߰��� �� �����ϴ�.!");
//		return;
//	}
//
//	int choice;
//	showMenu();
//	printf("����:");
//	scanf_s("%d", &choice);
//	switch (choice)
//	{
//	case AMERICANO:
//		puts("�Ƹ޸�ī�� �߰�");
//		itemList->foods[(itemList->idxOfFoods)++] = "�Ƹ޸�ī��";
//		itemList->totalPrice += AMERICANO_PRICE;
//		break;
//	case CAFELATTE:
//		puts("ī��� �߰�");
//		itemList->foods[(itemList->idxOfFoods)++] = "ī���";
//		itemList->totalPrice += CAFELATTE_PRICE;
//		break;
//	case JUICE:
//		puts("�ֽ� �߰�");
//		itemList->foods[(itemList->idxOfFoods)++] = "�ֽ�";
//		itemList->totalPrice += JUICE_PRICE;
//		break;
//	case ICECREAM:
//		puts("���̽�ũ�� �߰�");
//		itemList->foods[(itemList->idxOfFoods)++] = "���̽�ũ��";
//		itemList->totalPrice += ICECREAM_PRICE;
//		break;
//	case CANCEL:
//		puts("���� ���");
//		break;
//	default:
//		puts("�߸��� �Է��Դϴ�. ������ ����մϴ�.");
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
//		printf("%s �����߽��ϴ�.", itemToRemove);
//		return TRUE;
//	}
//	else
//	{
//		printf("������ ����� �����ϴ�.\n");
//		return FALSE;
//	}
//}
//
////���� ���� ����
//void removeMenu(ItemList* itemList)
//{
//	if (itemList->idxOfFoods <= 0)
//	{
//		puts("�� �̻� ������ �� �����ϴ�.");
//		return;
//	}
//
//	int choice;
//	showRemoveMenu();
//	printf("����:");
//	scanf_s("%d", &choice);
//	switch (choice)
//	{
//	case AMERICANO:
//		if (removeItem(itemList, "�Ƹ޸�ī��"))
//		{
//			itemList->totalPrice -= AMERICANO_PRICE;
//			(itemList->idxOfFoods)--;
//		}
//		break;
//	case CAFELATTE:
//		if (removeItem(itemList, "ī���"))
//		{
//			itemList->totalPrice -= CAFELATTE_PRICE;
//			(itemList->idxOfFoods)--;
//		}
//		break;
//	case JUICE:
//		if (removeItem(itemList, "�ֽ�"))
//		{
//			itemList->totalPrice -= JUICE_PRICE;
//			(itemList->idxOfFoods)--;
//		}
//		break;
//	case ICECREAM:
//		if (removeItem(itemList, "���̽�ũ��"))
//		{
//			itemList->totalPrice -= ICECREAM_PRICE;
//			(itemList->idxOfFoods)--;
//		}
//		break;
//	case CANCEL:
//		puts("���� ���");
//		break;
//	default:
//		puts("�߸��� �Է��Դϴ�. ������ ����մϴ�.");
//		break;
//	}
//}
//
////���� ���� Ȯ��
//void checkMenu(ItemList *itemList)
//{
//	int i = 0;
//	printf("�ֹ����� �Ѿ�: %d��, �ֹ����� ����\n==>", itemList->totalPrice);
//	for (i = 0; i < itemList->idxOfFoods; i++)
//	{
//		printf("%s.", itemList->foods[i]);
//	}
//	printf("\n");
//}
//
////���� ���� �ֹ�
//int order(ItemList* itemList)
//{
//	int choice;
//	checkMenu(itemList);
//	puts("������ �ֹ��Ͻðھ��?");
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
//		printf("����:");
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
//				puts("�ֹ� �Ϸ�! ���α׷��� �����մϴ�.");
//				return 0;  //��� ����
//			}
//			else
//			{
//				puts("�ֹ� ����!");
//				printf("\n\n");
//			}
//			break;
//		case END:
//			puts("���α׷��� �����մϴ�.");
//			break;
//		default:
//			puts("�߸��� �Է��Դϴ�. ������ ����մϴ�.");
//			return 0;
//		}
//	}
//
//	return 0;
//}