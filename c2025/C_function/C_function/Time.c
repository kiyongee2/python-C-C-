//#include <stdio.h>
//#include <time.h>
//#include <Windows.h>
//
//int main()
//{
//	time_t now = time(NULL);
//
//	printf("%ld초\n", now);
//	printf("%ld일\n", now / (24*60*60));
//	printf("%ld년\n", now / (365*24*60*60));
//
//	//수행 시간 측정
//	time_t start, end;   //time_t 자료형
//	start = time(NULL);  //시작 시각
//	printf("시작 시각: %ld초\n", start);
//
//	//0.5초 간격으로 1 ~ 10 출력
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//		Sleep(500);  //<Wondows.h> 포함
//	}
//
//	end = time(NULL);  //종료 시각
//	printf("종료 시각: %ld초\n", end);
//	printf("%ld초\n", (end - start));
//
//	//수행 시간(정밀 측정)
//	/*clock_t start, end;
//	double elapsedTime;
//
//	start = clock();  //시작 시각
//
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//		Sleep(500);
//	}
//	end = clock();  //종료 시각
//
//	//CLOCKS_PER_SEC - 초당 시각 상수
//	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//	printf("소요시간: %.2lf초\n", elapsedTime);*/
//	
//	return 0;
//}
