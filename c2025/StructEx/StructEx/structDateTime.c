//#define _CRT_SECURE_NO_WARNINGS //localtime()
//#include <stdio.h>
//#include <time.h>
//
//int main()
//{
//	time_t ct = time(NULL);  //���� �ð�
//	struct tm* now = localtime(&ct); //���� ��¥�� �ð� ����
//
//	printf("���� ��¥: %d. %d. %d.\n", now->tm_year + 1900,
//		now->tm_mon + 1, now->tm_mday);
//
//	printf("���� �ð�: %d : %d : %d.\n", now->tm_hour,
//		now->tm_min, now->tm_sec);
//
//	//12�ð��� ���
//	int hour = (now->tm_hour > 12) ? now->tm_hour - 12 : now->tm_hour;
//	char* ampm = (now->tm_hour < 12) ? "����" : "����";
//	printf("%s %d�� %d�� %d��\n", ampm, hour, now->tm_min, now->tm_sec);
//
//	//���� (0-��, 1-��, 2-ȭ...)
//	printf("���� ����: %d\n", now->tm_wday);
//
//	//���� ���
//	char* days[] = {"��", "��", "ȭ", "��", "��", "��", "��"};
//	int idx = now->tm_wday;
//
//	printf("%s�����Դϴ�.\n", days[idx]);
//
//	return 0;
//}
//
