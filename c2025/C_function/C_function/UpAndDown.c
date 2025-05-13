//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand(time(NULL));
//	int randNum = rand() % 50 + 1; //컴퓨터 난수
//	int guessNum = 0; //사용자 추측한 수
//	int count = 5;    //시도한 회수
//
//	//printf("%d\n", randNum);
//
//	while (1)
//	{
//		printf("남은 횟수 %d번\n", count--);
//
//		printf("맞혀보세요(1~50 입력): ");
//		scanf_s("%d", &guessNum);
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
//			printf("남은 횟수가 0이에요! 아쉽게 실패했어요.\n");
//			break;
//		}
//	}
//
//	return 0;
//}