//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////Up And Down 게임
//int main()
//{
//	srand(time(NULL));
//	int randNum = rand() % 50 + 1;
//	
//	int guessNum = 0;
//	int count = 5;
//	//printf("숫자: %d\n", randNum);
//
//	while (1)  //1-true, 0-false
//	{
//		printf("남은 횟수 %d 번\n", count--);
//
//		printf("맞혀보세요(1~50): ");
//		scanf("%d", &guessNum);
//
//		if (guessNum == randNum)
//		{
//			printf("정답이에요!\n");
//			break;
//		}
//		else if (guessNum > randNum)
//		{
//			printf("너무 커요!\n");
//		}
//		else 
//		{
//			printf("너무 작아요!\n");
//		}
//
//		if (count == 0)
//		{
//			printf("남은 횟수가 0입니다. 아쉽게 실패했어요ㅠ.ㅠ.\n");
//			break;
//		}
//	}
//	return 0;
//}
