//#include <stdio.h>
//#include <time.h>
//
//int main()
//{
//    // srand(10); //seed값 설정(고정)
//    srand(time(NULL));  //seed값 설정(변경)
//
//    int rndVal = rand();
//    printf("%d\n", rndVal);
//    printf("============\n");
//
//    //동전(2가지 경우)
//    int coin = rand() % 2;
//    printf("%d\n", coin);
//
//    // 0-앞면, 1-뒷면
//    if (coin % 2 == 0)
//    {
//        printf("앞면\n");
//    }
//    else
//    {
//        printf("뒷면\n");
//    }
//    printf("============\n");
//
//    //주사위(1~6)
//    int dice = rand() % 6 + 1;
//    printf("주사위 눈: %d\n", dice);
//
//    //실습 - 주사위 10번 던지기
//    for (int i = 0; i < 10; i++)
//    {
//        dice = rand() % 6 + 1;
//        printf("%d\n", dice);
//    }
//
//	//가위 바위 보
//	int n = rand() % 3;
//
//	switch (n)
//	{
//	case 0: printf("가위\n"); break;
//	case 1: printf("바위\n"); break;
//	case 2: printf("보\n"); break;
//	default: printf("없음\n"); break;
//	}
//
//	return 0;
//}