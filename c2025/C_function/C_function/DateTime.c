//#define _CRT_SECURE_NO_WARNINGS //localtime ���� ó��
//#include <stdio.h>
//#include <time.h>
//
//int main()
//{
//	time_t ct;  //���� �ð� ct ����
//	struct tm* now; //���� ��¥�� �ð�(tm ����ü ���� ����)
//
//	//���� �ð� ��������
//	ct = time(NULL);
//	now = localtime(&ct);
//
//	printf("%d��\n", now->tm_year + 1900);
//	printf("%d��\n", now->tm_mon + 1);
//	printf("%d��\n", now->tm_mday);
//	printf("���� ��¥ : %d. %d. %d.\n", now->tm_year + 1900,
//		now->tm_mon + 1, now->tm_mday);
//
//	return 0;
//}
