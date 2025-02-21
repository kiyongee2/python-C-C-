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
//		printf("동적 메모리 할당에 실패했습니다.\n");
//		exit(1);
//	}
//
//	book->bookNum = 201;
//	strcpy(book->title, "모두의 C언어");
//
//	(book + 1)->bookNum = 202;
//	strcpy((book + 1)->title, "채식주의자");
//
//	/*for (i = 0; i < 2; i++)
//	{
//		printf("번호: %d, 제목: %s\n",
//			(book + i)->bookNum, (book + i)->title);
//	}*/
//
//	//책 정보 
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
//		printf("번호: %d, 제목: %s\n",
//			(b + i)->bookNum, (b + i)->title);
//	}
//}