//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//typedef struct
//{
//	int bookNum;
//	char title[100];
//}Book;
//
//void showBookInfo(Book*, int);
//int main()
//{
//	Book* book;
//	book = (Book *)malloc(sizeof(Book) * 2);
//	int i;
//
//	if (book == NULL)
//	{
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1);
//	}
//
//	book->bookNum = 201;
//	strcpy(book->title, "����� C���");
//
//	(book + 1)->bookNum = 202;
//	strcpy((book + 1)->title, "ä��������");
//
//	/*for (i = 0; i < 2; i++)
//	{
//		printf("��ȣ: %d, ����: %s\n",
//			(book + i)->bookNum, (book + i)->title);
//	}*/
//
//	//å ���� 
//	showBookInfo(book, 2);
//
//	free(book);
//
//	return 0;
//}
//
//void showBookInfo(Book* b, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("��ȣ: %d, ����: %s\n",
//			(b + i)->bookNum, (b + i)->title);
//	}
//}