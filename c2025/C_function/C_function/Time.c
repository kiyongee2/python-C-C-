//#include <stdio.h>
//#include <time.h>
//#include <Windows.h>
//
//int main()
//{
//	time_t now = time(NULL);
//
//	printf("%ld��\n", now);
//	printf("%ld��\n", now / (24*60*60));
//	printf("%ld��\n", now / (365*24*60*60));
//
//	//���� �ð� ����
//	time_t start, end;   //time_t �ڷ���
//	start = time(NULL);  //���� �ð�
//	printf("���� �ð�: %ld��\n", start);
//
//	//0.5�� �������� 1 ~ 10 ���
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//		Sleep(500);  //<Wondows.h> ����
//	}
//
//	end = time(NULL);  //���� �ð�
//	printf("���� �ð�: %ld��\n", end);
//	printf("%ld��\n", (end - start));
//
//	//���� �ð�(���� ����)
//	/*clock_t start, end;
//	double elapsedTime;
//
//	start = clock();  //���� �ð�
//
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//		Sleep(500);
//	}
//	end = clock();  //���� �ð�
//
//	//CLOCKS_PER_SEC - �ʴ� �ð� ���
//	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//	printf("�ҿ�ð�: %.2lf��\n", elapsedTime);*/
//	
//	return 0;
//}
