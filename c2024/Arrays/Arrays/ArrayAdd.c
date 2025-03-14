//#include <stdio.h>
//#define MAX_LEN 4
//
//int main()
//{
//	int carts[MAX_LEN];
//	int idxOfCarts = 0;
//
//	// 요소 추가
//	if (idxOfCarts >= MAX_LEN)
//	{
//		return;
//	}
//	
//	carts[idxOfCarts++] = 80;
//	carts[idxOfCarts++] = 70;
//	carts[idxOfCarts++] = 95;
//	carts[idxOfCarts++] = 90;
//	//carts[idxOfCarts++] = 100;
//
//	for (int i = 0; i < idxOfCarts; i++)
//	{
//		printf("%-4d", carts[i]);
//	}
//
//	//printf("%d\n", idxOfCarts);
//
//	printf("\n====================\n");
//
//	//요소 삭제
//	carts[idxOfCarts--];
//	carts[idxOfCarts--];
//	carts[idxOfCarts--];
//	carts[idxOfCarts--];
//	//carts[idxOfCarts--];
//
//	if (idxOfCarts < 0)
//	{
//		printf("더 이상 삭제할 수 없습니다.\n");
//	}
//
//
//	for (int i = 0; i < idxOfCarts; i++)
//	{
//		printf("%-4d", carts[i]);
//	//}
//
//
//	//입력 
//	/*while (1)
//	{
//		printf("점수 입력: ");
//		scanf_s("%d", &carts[idxOfCarts++]);
//
//		if (idxOfCarts >= MAX_LEN)
//		{
//			puts("더 이상 추가할 수 없음!");
//			break;
//		}
//	}*/
//
//	/*for (int i = 0; i < idxOfCarts; i++)
//	{
//		printf("%-4d", carts[i]);
//	}*/
//	return 0;
//}
