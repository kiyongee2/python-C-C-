//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////Employee ����ü ����
//typedef struct {
//	int no;
//	char title[50];
//}Book;
//
////å ���� ��� �Լ�
//void displayInfo(Book* b, int len) {
//	for (int i = 0; i < len; i++) {
//		printf("��ȣ: %d, ����: %s\n",
//			b[i].no, b[i].title);
//	}
//}
//
//int main()
//{
//	//����ü �迭 ���� �Ҵ�
//	Book* book;
//	book = (Book*)malloc(sizeof(Book) * 3);
//	if (book == NULL) {
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1);
//	}
//
//	//book 1�� ����
//	book[0].no = 201;
//	strcpy_s(book[0].title, sizeof(book[0].title), "����� C���");
//
//	//book 2�� ����
//	book[1].no = 202;
//	strcpy_s(book[1].title, sizeof(book[1].title), "ä��������");
//
//	//displayInfo() ȣ��
//	displayInfo(book, 2);
//
//	//�޸� ����
//	free(book);
//
//	return 0;
//}
