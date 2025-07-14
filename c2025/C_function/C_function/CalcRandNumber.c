//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	//srand(100);
//	srand(time(NULL));
//
//	/*int rndVal = rand();
//	printf("%d\n", rndVal);*/
//
//	//동전
//	int coin = rand() % 2;
//	printf("%d\n", coin);
//
//	if (coin % 2 == 0){
//		printf("앞면\n");
//	}
//	else{
//		printf("뒷면\n");
//	}
//
//	//가위 바위 보
//	int n = rand() % 3;
//
//	switch (n)
//	{
//		case 0: printf("가위\n"); break;
//		case 1: printf("바위\n"); break;
//		case 2: printf("보\n"); break;
//		default: printf("없음\n"); break;
//	}
//
//	//주사위 눈
//	/*int dice = rand() % 6 + 1;
//	printf("%d\n", dice);*/
//
//	for (int i = 1; i <= 10; i++)
//	{
//		int dice = rand() % 6 + 1;
//		printf("%d\n", dice);
//	}
//
//
//	//1~10 무작위수
//	/*int rndNum = rand() % 10 + 1;
//	printf("%d\n", rndNum);*/
//
//	return 0;
//}