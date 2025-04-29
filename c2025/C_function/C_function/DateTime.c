//#define _CRT_SECURE_NO_WARNINGS //localtime 오류 처리
//#include <stdio.h>
//#include <time.h>
//
//int main()
//{
//	time_t ct;  //현재 시간 ct 선언
//	struct tm* now; //현재 날짜와 시간(tm 구조체 변수 선언)
//
//	//현재 시간 가져오기
//	ct = time(NULL);
//	now = localtime(&ct);
//
//	printf("%d년\n", now->tm_year + 1900);
//	printf("%d월\n", now->tm_mon + 1);
//	printf("%d일\n", now->tm_mday);
//	printf("현재 날짜 : %d. %d. %d.\n", now->tm_year + 1900,
//		now->tm_mon + 1, now->tm_mday);
//
//	return 0;
//}
