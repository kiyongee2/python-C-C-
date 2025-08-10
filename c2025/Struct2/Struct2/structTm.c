//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//
//int main()
//{
//	time_t ct = time(NULL);
//	struct tm* now = localtime(&ct);
//
//	printf("%d. %d. %d.\n", now->tm_year + 1900, 
//					now->tm_mon + 1, now->tm_mday);
//	printf("%d : %d : %d\n", now->tm_hour, 
//				now->tm_min, now->tm_sec);
//
//	//12 시각제
//	int hour = (now->tm_hour > 12) ? 
//		now->tm_hour - 12 : now->tm_hour;
//
//	//char* str = "cloud"; printf("%s\n", str);
//
//	char* ampm = (now->tm_hour < 12) ? "오전" : "오후";
//	printf("%s %d시 %d분 %d초\n", ampm, hour, now->tm_min, now->tm_sec);
//
//	printf("%d\n", now->tm_wday); //(0-일, 1-월, ...)
//	char* days[] = {"일", "월", "화", "수", "목", "금", "토" };
//	printf("%s요일\n", days[now->tm_wday]);
//			
//	return 0;
//}
