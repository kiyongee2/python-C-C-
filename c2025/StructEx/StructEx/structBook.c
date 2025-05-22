//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////Employee 구조체 정의
//typedef struct {
//	int no;
//	char title[50];
//}Book;
//
////책 정보 출력 함수
//void displayInfo(Book* b, int len) {
//	for (int i = 0; i < len; i++) {
//		printf("번호: %d, 제목: %s\n",
//			b[i].no, b[i].title);
//	}
//}
//
//int main()
//{
//	//구조체 배열 동적 할당
//	Book* book;
//	book = (Book*)malloc(sizeof(Book) * 3);
//	if (book == NULL) {
//		printf("동적 메모리 할당에 실패했습니다.\n");
//		exit(1);
//	}
//
//	//book 1권 생성
//	book[0].no = 201;
//	strcpy_s(book[0].title, sizeof(book[0].title), "모두의 C언어");
//
//	//book 2권 생성
//	book[1].no = 202;
//	strcpy_s(book[1].title, sizeof(book[1].title), "채식주의자");
//
//	//displayInfo() 호출
//	displayInfo(book, 2);
//
//	//메모리 해제
//	free(book);
//
//	return 0;
//}
