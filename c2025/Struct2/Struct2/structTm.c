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
//	//12 �ð���
//	int hour = (now->tm_hour > 12) ? 
//		now->tm_hour - 12 : now->tm_hour;
//
//	//char* str = "cloud"; printf("%s\n", str);
//
//	char* ampm = (now->tm_hour < 12) ? "����" : "����";
//	printf("%s %d�� %d�� %d��\n", ampm, hour, now->tm_min, now->tm_sec);
//
//	printf("%d\n", now->tm_wday); //(0-��, 1-��, ...)
//	char* days[] = {"��", "��", "ȭ", "��", "��", "��", "��" };
//	printf("%s����\n", days[now->tm_wday]);
//			
//	return 0;
//}
